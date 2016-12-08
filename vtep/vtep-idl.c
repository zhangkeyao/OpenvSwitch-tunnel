/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "vtep/vtep-idl.h"
#include <limits.h>
#include "ovs-thread.h"
#include "ovsdb-data.h"
#include "ovsdb-error.h"
#include "util.h"

#ifdef __CHECKER__
/* Sparse dislikes sizeof(bool) ("warning: expression using sizeof bool"). */
enum { sizeof_bool = 1 };
#else
enum { sizeof_bool = sizeof(bool) };
#endif

static bool inited;


static struct vteprec_acl *
vteprec_acl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_acl, header_) : NULL;
}

static struct vteprec_acl_entry *
vteprec_acl_entry_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_acl_entry, header_) : NULL;
}

static struct vteprec_arp_sources_local *
vteprec_arp_sources_local_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_arp_sources_local, header_) : NULL;
}

static struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_arp_sources_remote, header_) : NULL;
}

static struct vteprec_global *
vteprec_global_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_global, header_) : NULL;
}

static struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_logical_binding_stats, header_) : NULL;
}

static struct vteprec_logical_router *
vteprec_logical_router_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_logical_router, header_) : NULL;
}

static struct vteprec_logical_switch *
vteprec_logical_switch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_logical_switch, header_) : NULL;
}

static struct vteprec_manager *
vteprec_manager_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_manager, header_) : NULL;
}

static struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_mcast_macs_local, header_) : NULL;
}

static struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_mcast_macs_remote, header_) : NULL;
}

static struct vteprec_physical_locator *
vteprec_physical_locator_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_physical_locator, header_) : NULL;
}

static struct vteprec_physical_locator_set *
vteprec_physical_locator_set_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_physical_locator_set, header_) : NULL;
}

static struct vteprec_physical_port *
vteprec_physical_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_physical_port, header_) : NULL;
}

static struct vteprec_physical_switch *
vteprec_physical_switch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_physical_switch, header_) : NULL;
}

static struct vteprec_tunnel *
vteprec_tunnel_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_tunnel, header_) : NULL;
}

static struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_ucast_macs_local, header_) : NULL;
}

static struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct vteprec_ucast_macs_remote, header_) : NULL;
}

/* ACL table. */

static void
vteprec_acl_parse_acl_entries(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl *row = vteprec_acl_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->acl_entries = NULL;
    row->n_acl_entries = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_acl_entry *keyRow = vteprec_acl_entry_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_acl_entries) {
                row->acl_entries = xmalloc(datum->n * sizeof *row->acl_entries);
            }
            row->acl_entries[row->n_acl_entries] = keyRow;
            row->n_acl_entries++;
        }
    }
}

static void
vteprec_acl_parse_acl_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl *row = vteprec_acl_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->acl_fault_status = NULL;
    row->n_acl_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_acl_fault_status) {
            row->acl_fault_status = xmalloc(datum->n * sizeof *row->acl_fault_status);
        }
        row->acl_fault_status[row->n_acl_fault_status] = datum->keys[i].string;
        row->n_acl_fault_status++;
    }
}

static void
vteprec_acl_parse_acl_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl *row = vteprec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->acl_name = datum->keys[0].string;
    } else {
        row->acl_name = "";
    }
}

static void
vteprec_acl_unparse_acl_entries(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl *row = vteprec_acl_cast(row_);

    ovs_assert(inited);
    free(row->acl_entries);
}

static void
vteprec_acl_unparse_acl_fault_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl *row = vteprec_acl_cast(row_);

    ovs_assert(inited);
    free(row->acl_fault_status);
}

static void
vteprec_acl_unparse_acl_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_init__(struct ovsdb_idl_row *row)
{
    vteprec_acl_init(vteprec_acl_cast(row));
}

/* Clears the contents of 'row' in table "ACL". */
void
vteprec_acl_init(struct vteprec_acl *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "ACL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_acl *
vteprec_acl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_acl_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL], uuid));
}

/* Returns a row in table "ACL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_acl *
vteprec_acl_first(const struct ovsdb_idl *idl)
{
    return vteprec_acl_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_acl *
vteprec_acl_next(const struct vteprec_acl *row)
{
    return vteprec_acl_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_acl_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL]);
}

unsigned int vteprec_acl_row_get_seqno(const struct vteprec_acl *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_acl *
vteprec_acl_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_acl_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL]));
}

const struct vteprec_acl
*vteprec_acl_track_get_next(const struct vteprec_acl *row)
{
    return vteprec_acl_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "ACL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_delete(const struct vteprec_acl *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "ACL" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_acl *
vteprec_acl_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_acl_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_ACL], NULL));
}

/* Causes the original contents of column "acl_entries" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acl_entries" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acl_entries" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acl_entries" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_insert()).
 *
 *   - If "acl_entries" has already been modified (with
 *     vteprec_acl_set_acl_entries()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_set_acl_entries() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_verify_acl_entries(const struct vteprec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_ENTRIES]);
}

/* Causes the original contents of column "acl_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acl_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acl_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acl_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_insert()).
 *
 *   - If "acl_fault_status" has already been modified (with
 *     vteprec_acl_set_acl_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_set_acl_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_verify_acl_fault_status(const struct vteprec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_FAULT_STATUS]);
}

/* Causes the original contents of column "acl_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acl_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acl_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acl_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_insert()).
 *
 *   - If "acl_name" has already been modified (with
 *     vteprec_acl_set_acl_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_set_acl_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_verify_acl_name(const struct vteprec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_NAME]);
}

/* Returns the "acl_entries" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acl_entries's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acl_entries" member in vteprec_acl. */
const struct ovsdb_datum *
vteprec_acl_get_acl_entries(const struct vteprec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_col_acl_entries);
}

/* Returns the "acl_fault_status" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes acl_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acl_fault_status" member in vteprec_acl. */
const struct ovsdb_datum *
vteprec_acl_get_acl_fault_status(const struct vteprec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_col_acl_fault_status);
}

/* Returns the "acl_name" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes acl_name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acl_name" member in vteprec_acl. */
const struct ovsdb_datum *
vteprec_acl_get_acl_name(const struct vteprec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_col_acl_name);
}

/* Sets the "acl_entries" column from the "ACL" table in 'row' to
 * the 'acl_entries' set with 'n_acl_entries' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_set_acl_entries(const struct vteprec_acl *row, struct vteprec_acl_entry **acl_entries, size_t n_acl_entries)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acl_entries;
    datum.keys = n_acl_entries ? xmalloc(n_acl_entries * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acl_entries; i++) {
        datum.keys[i].uuid = acl_entries[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_ENTRIES], &datum);
}

/* Sets the "acl_fault_status" column from the "ACL" table in 'row' to
 * the 'acl_fault_status' set with 'n_acl_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_set_acl_fault_status(const struct vteprec_acl *row, const char **acl_fault_status, size_t n_acl_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acl_fault_status;
    datum.keys = n_acl_fault_status ? xmalloc(n_acl_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acl_fault_status; i++) {
        datum.keys[i].string = xstrdup(acl_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_FAULT_STATUS], &datum);
}

/* Sets the "acl_name" column from the "ACL" table in 'row' to
 * 'acl_name'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_set_acl_name(const struct vteprec_acl *row, const char *acl_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, acl_name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_columns[VTEPREC_ACL_COL_ACL_NAME], &datum);
}

struct ovsdb_idl_column vteprec_acl_columns[VTEPREC_ACL_N_COLUMNS];

static void
vteprec_acl_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_acl_col_acl_entries. */
    c = &vteprec_acl_col_acl_entries;
    c->name = "acl_entries";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "ACL_entry";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_acl_parse_acl_entries;
    c->unparse = vteprec_acl_unparse_acl_entries;

    /* Initialize vteprec_acl_col_acl_fault_status. */
    c = &vteprec_acl_col_acl_fault_status;
    c->name = "acl_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_acl_parse_acl_fault_status;
    c->unparse = vteprec_acl_unparse_acl_fault_status;

    /* Initialize vteprec_acl_col_acl_name. */
    c = &vteprec_acl_col_acl_name;
    c->name = "acl_name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_parse_acl_name;
    c->unparse = vteprec_acl_unparse_acl_name;
}

/* ACL_entry table. */

static void
vteprec_acl_entry_parse_acle_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->acle_fault_status = NULL;
    row->n_acle_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_acle_fault_status) {
            row->acle_fault_status = xmalloc(datum->n * sizeof *row->acle_fault_status);
        }
        row->acle_fault_status[row->n_acle_fault_status] = datum->keys[i].string;
        row->n_acle_fault_status++;
    }
}

static void
vteprec_acl_entry_parse_action(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->action = datum->keys[0].string;
    } else {
        row->action = "";
    }
}

static void
vteprec_acl_entry_parse_dest_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dest_ip = datum->keys[0].string;
    } else {
        row->dest_ip = NULL;
    }
}

static void
vteprec_acl_entry_parse_dest_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dest_mac = datum->keys[0].string;
    } else {
        row->dest_mac = NULL;
    }
}

static void
vteprec_acl_entry_parse_dest_mask(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dest_mask = datum->keys[0].string;
    } else {
        row->dest_mask = NULL;
    }
}

static void
vteprec_acl_entry_parse_dest_port_max(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->dest_port_max = NULL;
    row->n_dest_port_max = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_dest_port_max) {
            row->dest_port_max = xmalloc(n * sizeof *row->dest_port_max);
        }
        row->dest_port_max[row->n_dest_port_max] = datum->keys[i].integer;
        row->n_dest_port_max++;
    }
}

static void
vteprec_acl_entry_parse_dest_port_min(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->dest_port_min = NULL;
    row->n_dest_port_min = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_dest_port_min) {
            row->dest_port_min = xmalloc(n * sizeof *row->dest_port_min);
        }
        row->dest_port_min[row->n_dest_port_min] = datum->keys[i].integer;
        row->n_dest_port_min++;
    }
}

static void
vteprec_acl_entry_parse_direction(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->direction = datum->keys[0].string;
    } else {
        row->direction = "";
    }
}

static void
vteprec_acl_entry_parse_ethertype(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ethertype = datum->keys[0].string;
    } else {
        row->ethertype = NULL;
    }
}

static void
vteprec_acl_entry_parse_icmp_code(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->icmp_code = NULL;
    row->n_icmp_code = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_icmp_code) {
            row->icmp_code = xmalloc(n * sizeof *row->icmp_code);
        }
        row->icmp_code[row->n_icmp_code] = datum->keys[i].integer;
        row->n_icmp_code++;
    }
}

static void
vteprec_acl_entry_parse_icmp_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->icmp_type = NULL;
    row->n_icmp_type = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_icmp_type) {
            row->icmp_type = xmalloc(n * sizeof *row->icmp_type);
        }
        row->icmp_type[row->n_icmp_type] = datum->keys[i].integer;
        row->n_icmp_type++;
    }
}

static void
vteprec_acl_entry_parse_protocol(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->protocol = NULL;
    row->n_protocol = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_protocol) {
            row->protocol = xmalloc(n * sizeof *row->protocol);
        }
        row->protocol[row->n_protocol] = datum->keys[i].integer;
        row->n_protocol++;
    }
}

static void
vteprec_acl_entry_parse_sequence(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->sequence = datum->keys[0].integer;
    } else {
        row->sequence = 0;
    }
}

static void
vteprec_acl_entry_parse_source_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->source_ip = datum->keys[0].string;
    } else {
        row->source_ip = NULL;
    }
}

static void
vteprec_acl_entry_parse_source_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->source_mac = datum->keys[0].string;
    } else {
        row->source_mac = NULL;
    }
}

static void
vteprec_acl_entry_parse_source_mask(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->source_mask = datum->keys[0].string;
    } else {
        row->source_mask = NULL;
    }
}

static void
vteprec_acl_entry_parse_source_port_max(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->source_port_max = NULL;
    row->n_source_port_max = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_source_port_max) {
            row->source_port_max = xmalloc(n * sizeof *row->source_port_max);
        }
        row->source_port_max[row->n_source_port_max] = datum->keys[i].integer;
        row->n_source_port_max++;
    }
}

static void
vteprec_acl_entry_parse_source_port_min(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->source_port_min = NULL;
    row->n_source_port_min = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_source_port_min) {
            row->source_port_min = xmalloc(n * sizeof *row->source_port_min);
        }
        row->source_port_min[row->n_source_port_min] = datum->keys[i].integer;
        row->n_source_port_min++;
    }
}

static void
vteprec_acl_entry_parse_tcp_flags(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tcp_flags = NULL;
    row->n_tcp_flags = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tcp_flags) {
            row->tcp_flags = xmalloc(n * sizeof *row->tcp_flags);
        }
        row->tcp_flags[row->n_tcp_flags] = datum->keys[i].integer;
        row->n_tcp_flags++;
    }
}

static void
vteprec_acl_entry_parse_tcp_flags_mask(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tcp_flags_mask = NULL;
    row->n_tcp_flags_mask = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tcp_flags_mask) {
            row->tcp_flags_mask = xmalloc(n * sizeof *row->tcp_flags_mask);
        }
        row->tcp_flags_mask[row->n_tcp_flags_mask] = datum->keys[i].integer;
        row->n_tcp_flags_mask++;
    }
}

static void
vteprec_acl_entry_unparse_acle_fault_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->acle_fault_status);
}

static void
vteprec_acl_entry_unparse_action(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_dest_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_dest_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_dest_mask(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_dest_port_max(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->dest_port_max);
}

static void
vteprec_acl_entry_unparse_dest_port_min(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->dest_port_min);
}

static void
vteprec_acl_entry_unparse_direction(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_ethertype(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_icmp_code(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->icmp_code);
}

static void
vteprec_acl_entry_unparse_icmp_type(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->icmp_type);
}

static void
vteprec_acl_entry_unparse_protocol(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->protocol);
}

static void
vteprec_acl_entry_unparse_sequence(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_source_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_source_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_source_mask(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_acl_entry_unparse_source_port_max(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->source_port_max);
}

static void
vteprec_acl_entry_unparse_source_port_min(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->source_port_min);
}

static void
vteprec_acl_entry_unparse_tcp_flags(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->tcp_flags);
}

static void
vteprec_acl_entry_unparse_tcp_flags_mask(struct ovsdb_idl_row *row_)
{
    struct vteprec_acl_entry *row = vteprec_acl_entry_cast(row_);

    ovs_assert(inited);
    free(row->tcp_flags_mask);
}

static void
vteprec_acl_entry_init__(struct ovsdb_idl_row *row)
{
    vteprec_acl_entry_init(vteprec_acl_entry_cast(row));
}

/* Clears the contents of 'row' in table "ACL_entry". */
void
vteprec_acl_entry_init(struct vteprec_acl_entry *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "ACL_entry" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_acl_entry *
vteprec_acl_entry_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_acl_entry_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY], uuid));
}

/* Returns a row in table "ACL_entry" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_acl_entry *
vteprec_acl_entry_first(const struct ovsdb_idl *idl)
{
    return vteprec_acl_entry_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_acl_entry *
vteprec_acl_entry_next(const struct vteprec_acl_entry *row)
{
    return vteprec_acl_entry_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_acl_entry_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY]);
}

unsigned int vteprec_acl_entry_row_get_seqno(const struct vteprec_acl_entry *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_acl_entry *
vteprec_acl_entry_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_acl_entry_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY]));
}

const struct vteprec_acl_entry
*vteprec_acl_entry_track_get_next(const struct vteprec_acl_entry *row)
{
    return vteprec_acl_entry_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "ACL_entry".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_delete(const struct vteprec_acl_entry *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "ACL_entry" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_acl_entry *
vteprec_acl_entry_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_acl_entry_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_ACL_ENTRY], NULL));
}

/* Causes the original contents of column "acle_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acle_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acle_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acle_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "acle_fault_status" has already been modified (with
 *     vteprec_acl_entry_set_acle_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_acle_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_acle_fault_status(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACLE_FAULT_STATUS]);
}

/* Causes the original contents of column "action" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "action" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "action" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "action" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "action" has already been modified (with
 *     vteprec_acl_entry_set_action()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_action() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_action(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACTION]);
}

/* Causes the original contents of column "dest_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dest_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dest_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dest_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "dest_ip" has already been modified (with
 *     vteprec_acl_entry_set_dest_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_dest_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_dest_ip(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_IP]);
}

/* Causes the original contents of column "dest_mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dest_mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dest_mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dest_mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "dest_mac" has already been modified (with
 *     vteprec_acl_entry_set_dest_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_dest_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_dest_mac(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MAC]);
}

/* Causes the original contents of column "dest_mask" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dest_mask" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dest_mask" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dest_mask" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "dest_mask" has already been modified (with
 *     vteprec_acl_entry_set_dest_mask()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_dest_mask() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_dest_mask(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MASK]);
}

/* Causes the original contents of column "dest_port_max" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dest_port_max" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dest_port_max" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dest_port_max" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "dest_port_max" has already been modified (with
 *     vteprec_acl_entry_set_dest_port_max()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_dest_port_max() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_dest_port_max(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MAX]);
}

/* Causes the original contents of column "dest_port_min" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dest_port_min" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dest_port_min" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dest_port_min" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "dest_port_min" has already been modified (with
 *     vteprec_acl_entry_set_dest_port_min()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_dest_port_min() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_dest_port_min(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MIN]);
}

/* Causes the original contents of column "direction" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "direction" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "direction" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "direction" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "direction" has already been modified (with
 *     vteprec_acl_entry_set_direction()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_direction() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_direction(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DIRECTION]);
}

/* Causes the original contents of column "ethertype" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ethertype" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ethertype" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ethertype" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "ethertype" has already been modified (with
 *     vteprec_acl_entry_set_ethertype()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_ethertype() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_ethertype(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ETHERTYPE]);
}

/* Causes the original contents of column "icmp_code" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "icmp_code" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "icmp_code" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "icmp_code" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "icmp_code" has already been modified (with
 *     vteprec_acl_entry_set_icmp_code()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_icmp_code() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_icmp_code(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_CODE]);
}

/* Causes the original contents of column "icmp_type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "icmp_type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "icmp_type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "icmp_type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "icmp_type" has already been modified (with
 *     vteprec_acl_entry_set_icmp_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_icmp_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_icmp_type(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_TYPE]);
}

/* Causes the original contents of column "protocol" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "protocol" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "protocol" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "protocol" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "protocol" has already been modified (with
 *     vteprec_acl_entry_set_protocol()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_protocol() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_protocol(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_PROTOCOL]);
}

/* Causes the original contents of column "sequence" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sequence" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sequence" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sequence" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "sequence" has already been modified (with
 *     vteprec_acl_entry_set_sequence()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_sequence() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_sequence(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SEQUENCE]);
}

/* Causes the original contents of column "source_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "source_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "source_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "source_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "source_ip" has already been modified (with
 *     vteprec_acl_entry_set_source_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_source_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_source_ip(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_IP]);
}

/* Causes the original contents of column "source_mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "source_mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "source_mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "source_mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "source_mac" has already been modified (with
 *     vteprec_acl_entry_set_source_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_source_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_source_mac(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MAC]);
}

/* Causes the original contents of column "source_mask" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "source_mask" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "source_mask" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "source_mask" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "source_mask" has already been modified (with
 *     vteprec_acl_entry_set_source_mask()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_source_mask() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_source_mask(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MASK]);
}

/* Causes the original contents of column "source_port_max" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "source_port_max" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "source_port_max" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "source_port_max" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "source_port_max" has already been modified (with
 *     vteprec_acl_entry_set_source_port_max()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_source_port_max() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_source_port_max(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MAX]);
}

/* Causes the original contents of column "source_port_min" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "source_port_min" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "source_port_min" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "source_port_min" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "source_port_min" has already been modified (with
 *     vteprec_acl_entry_set_source_port_min()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_source_port_min() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_source_port_min(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MIN]);
}

/* Causes the original contents of column "tcp_flags" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tcp_flags" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tcp_flags" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tcp_flags" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "tcp_flags" has already been modified (with
 *     vteprec_acl_entry_set_tcp_flags()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_tcp_flags() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_tcp_flags(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS]);
}

/* Causes the original contents of column "tcp_flags_mask" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tcp_flags_mask" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tcp_flags_mask" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tcp_flags_mask" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_acl_entry_insert()).
 *
 *   - If "tcp_flags_mask" has already been modified (with
 *     vteprec_acl_entry_set_tcp_flags_mask()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_acl_entry_set_tcp_flags_mask() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_acl_entry_verify_tcp_flags_mask(const struct vteprec_acl_entry *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS_MASK]);
}

/* Returns the "acle_fault_status" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes acle_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acle_fault_status" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_acle_fault_status(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_acle_fault_status);
}

/* Returns the "action" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes action's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "action" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_action(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_action);
}

/* Returns the "dest_ip" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dest_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dest_ip" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_dest_ip(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_dest_ip);
}

/* Returns the "dest_mac" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dest_mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dest_mac" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_dest_mac(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_dest_mac);
}

/* Returns the "dest_mask" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dest_mask's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dest_mask" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_dest_mask(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_dest_mask);
}

/* Returns the "dest_port_max" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes dest_port_max's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dest_port_max" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_dest_port_max(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_dest_port_max);
}

/* Returns the "dest_port_min" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes dest_port_min's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dest_port_min" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_dest_port_min(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_dest_port_min);
}

/* Returns the "direction" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes direction's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "direction" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_direction(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_direction);
}

/* Returns the "ethertype" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ethertype's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ethertype" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_ethertype(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_ethertype);
}

/* Returns the "icmp_code" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes icmp_code's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "icmp_code" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_icmp_code(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_icmp_code);
}

/* Returns the "icmp_type" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes icmp_type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "icmp_type" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_icmp_type(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_icmp_type);
}

/* Returns the "protocol" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes protocol's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "protocol" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_protocol(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_protocol);
}

/* Returns the "sequence" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes sequence's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sequence" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_sequence(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_sequence);
}

/* Returns the "source_ip" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes source_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "source_ip" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_source_ip(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_source_ip);
}

/* Returns the "source_mac" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes source_mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "source_mac" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_source_mac(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_source_mac);
}

/* Returns the "source_mask" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes source_mask's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "source_mask" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_source_mask(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_source_mask);
}

/* Returns the "source_port_max" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes source_port_max's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "source_port_max" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_source_port_max(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_source_port_max);
}

/* Returns the "source_port_min" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes source_port_min's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "source_port_min" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_source_port_min(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_source_port_min);
}

/* Returns the "tcp_flags" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tcp_flags's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tcp_flags" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_tcp_flags(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_tcp_flags);
}

/* Returns the "tcp_flags_mask" column's value from the "ACL_entry" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tcp_flags_mask's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tcp_flags_mask" member in vteprec_acl_entry. */
const struct ovsdb_datum *
vteprec_acl_entry_get_tcp_flags_mask(const struct vteprec_acl_entry *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_acl_entry_col_tcp_flags_mask);
}

/* Sets the "acle_fault_status" column from the "ACL_entry" table in 'row' to
 * the 'acle_fault_status' set with 'n_acle_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_acle_fault_status(const struct vteprec_acl_entry *row, const char **acle_fault_status, size_t n_acle_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acle_fault_status;
    datum.keys = n_acle_fault_status ? xmalloc(n_acle_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acle_fault_status; i++) {
        datum.keys[i].string = xstrdup(acle_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACLE_FAULT_STATUS], &datum);
}

/* Sets the "action" column from the "ACL_entry" table in 'row' to
 * 'action'.
 *
 * Argument constraints: either "deny" or "permit"
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_action(const struct vteprec_acl_entry *row, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ACTION], &datum);
}

/* Sets the "dest_ip" column from the "ACL_entry" table in 'row' to
 * the 'dest_ip' set.
 *
 * If "dest_ip" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_dest_ip(const struct vteprec_acl_entry *row, const char *dest_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dest_ip) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dest_ip);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_IP], &datum);
}

/* Sets the "dest_mac" column from the "ACL_entry" table in 'row' to
 * the 'dest_mac' set.
 *
 * If "dest_mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_dest_mac(const struct vteprec_acl_entry *row, const char *dest_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dest_mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dest_mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MAC], &datum);
}

/* Sets the "dest_mask" column from the "ACL_entry" table in 'row' to
 * the 'dest_mask' set.
 *
 * If "dest_mask" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_dest_mask(const struct vteprec_acl_entry *row, const char *dest_mask)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (dest_mask) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, dest_mask);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_MASK], &datum);
}

/* Sets the "dest_port_max" column from the "ACL_entry" table in 'row' to
 * the 'dest_port_max' set with 'n_dest_port_max' entries.
 *
 * 'n_dest_port_max' may be 0 or 1; if it is 0, then 'dest_port_max'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_dest_port_max(const struct vteprec_acl_entry *row, const int64_t *dest_port_max, size_t n_dest_port_max)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_dest_port_max) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *dest_port_max;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MAX], &datum);
}

/* Sets the "dest_port_min" column from the "ACL_entry" table in 'row' to
 * the 'dest_port_min' set with 'n_dest_port_min' entries.
 *
 * 'n_dest_port_min' may be 0 or 1; if it is 0, then 'dest_port_min'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_dest_port_min(const struct vteprec_acl_entry *row, const int64_t *dest_port_min, size_t n_dest_port_min)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_dest_port_min) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *dest_port_min;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DEST_PORT_MIN], &datum);
}

/* Sets the "direction" column from the "ACL_entry" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "ingress" or "egress"
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_direction(const struct vteprec_acl_entry *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_DIRECTION], &datum);
}

/* Sets the "ethertype" column from the "ACL_entry" table in 'row' to
 * the 'ethertype' set.
 *
 * If "ethertype" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_ethertype(const struct vteprec_acl_entry *row, const char *ethertype)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (ethertype) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, ethertype);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ETHERTYPE], &datum);
}

/* Sets the "icmp_code" column from the "ACL_entry" table in 'row' to
 * the 'icmp_code' set with 'n_icmp_code' entries.
 *
 * 'n_icmp_code' may be 0 or 1; if it is 0, then 'icmp_code'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_icmp_code(const struct vteprec_acl_entry *row, const int64_t *icmp_code, size_t n_icmp_code)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_icmp_code) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *icmp_code;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_CODE], &datum);
}

/* Sets the "icmp_type" column from the "ACL_entry" table in 'row' to
 * the 'icmp_type' set with 'n_icmp_type' entries.
 *
 * 'n_icmp_type' may be 0 or 1; if it is 0, then 'icmp_type'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_icmp_type(const struct vteprec_acl_entry *row, const int64_t *icmp_type, size_t n_icmp_type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_icmp_type) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *icmp_type;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_ICMP_TYPE], &datum);
}

/* Sets the "protocol" column from the "ACL_entry" table in 'row' to
 * the 'protocol' set with 'n_protocol' entries.
 *
 * 'n_protocol' may be 0 or 1; if it is 0, then 'protocol'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_protocol(const struct vteprec_acl_entry *row, const int64_t *protocol, size_t n_protocol)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_protocol) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *protocol;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_PROTOCOL], &datum);
}

/* Sets the "sequence" column from the "ACL_entry" table in 'row' to
 * 'sequence'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_sequence(const struct vteprec_acl_entry *row, int64_t sequence)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = sequence;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SEQUENCE], &datum);
}

/* Sets the "source_ip" column from the "ACL_entry" table in 'row' to
 * the 'source_ip' set.
 *
 * If "source_ip" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_source_ip(const struct vteprec_acl_entry *row, const char *source_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (source_ip) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, source_ip);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_IP], &datum);
}

/* Sets the "source_mac" column from the "ACL_entry" table in 'row' to
 * the 'source_mac' set.
 *
 * If "source_mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_source_mac(const struct vteprec_acl_entry *row, const char *source_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (source_mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, source_mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MAC], &datum);
}

/* Sets the "source_mask" column from the "ACL_entry" table in 'row' to
 * the 'source_mask' set.
 *
 * If "source_mask" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_source_mask(const struct vteprec_acl_entry *row, const char *source_mask)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (source_mask) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, source_mask);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_MASK], &datum);
}

/* Sets the "source_port_max" column from the "ACL_entry" table in 'row' to
 * the 'source_port_max' set with 'n_source_port_max' entries.
 *
 * 'n_source_port_max' may be 0 or 1; if it is 0, then 'source_port_max'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_source_port_max(const struct vteprec_acl_entry *row, const int64_t *source_port_max, size_t n_source_port_max)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_source_port_max) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *source_port_max;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MAX], &datum);
}

/* Sets the "source_port_min" column from the "ACL_entry" table in 'row' to
 * the 'source_port_min' set with 'n_source_port_min' entries.
 *
 * 'n_source_port_min' may be 0 or 1; if it is 0, then 'source_port_min'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_source_port_min(const struct vteprec_acl_entry *row, const int64_t *source_port_min, size_t n_source_port_min)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_source_port_min) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *source_port_min;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_SOURCE_PORT_MIN], &datum);
}

/* Sets the "tcp_flags" column from the "ACL_entry" table in 'row' to
 * the 'tcp_flags' set with 'n_tcp_flags' entries.
 *
 * 'n_tcp_flags' may be 0 or 1; if it is 0, then 'tcp_flags'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_tcp_flags(const struct vteprec_acl_entry *row, const int64_t *tcp_flags, size_t n_tcp_flags)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tcp_flags) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tcp_flags;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS], &datum);
}

/* Sets the "tcp_flags_mask" column from the "ACL_entry" table in 'row' to
 * the 'tcp_flags_mask' set with 'n_tcp_flags_mask' entries.
 *
 * 'n_tcp_flags_mask' may be 0 or 1; if it is 0, then 'tcp_flags_mask'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_acl_entry_set_tcp_flags_mask(const struct vteprec_acl_entry *row, const int64_t *tcp_flags_mask, size_t n_tcp_flags_mask)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tcp_flags_mask) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tcp_flags_mask;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_COL_TCP_FLAGS_MASK], &datum);
}

struct ovsdb_idl_column vteprec_acl_entry_columns[VTEPREC_ACL_ENTRY_N_COLUMNS];

static void
vteprec_acl_entry_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_acl_entry_col_acle_fault_status. */
    c = &vteprec_acl_entry_col_acle_fault_status;
    c->name = "acle_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_acle_fault_status;
    c->unparse = vteprec_acl_entry_unparse_acle_fault_status;

    /* Initialize vteprec_acl_entry_col_action. */
    c = &vteprec_acl_entry_col_action;
    c->name = "action";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("deny");
    c->type.key.enum_->keys[1].string = xstrdup("permit");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_action;
    c->unparse = vteprec_acl_entry_unparse_action;

    /* Initialize vteprec_acl_entry_col_dest_ip. */
    c = &vteprec_acl_entry_col_dest_ip;
    c->name = "dest_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_dest_ip;
    c->unparse = vteprec_acl_entry_unparse_dest_ip;

    /* Initialize vteprec_acl_entry_col_dest_mac. */
    c = &vteprec_acl_entry_col_dest_mac;
    c->name = "dest_mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_dest_mac;
    c->unparse = vteprec_acl_entry_unparse_dest_mac;

    /* Initialize vteprec_acl_entry_col_dest_mask. */
    c = &vteprec_acl_entry_col_dest_mask;
    c->name = "dest_mask";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_dest_mask;
    c->unparse = vteprec_acl_entry_unparse_dest_mask;

    /* Initialize vteprec_acl_entry_col_dest_port_max. */
    c = &vteprec_acl_entry_col_dest_port_max;
    c->name = "dest_port_max";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_dest_port_max;
    c->unparse = vteprec_acl_entry_unparse_dest_port_max;

    /* Initialize vteprec_acl_entry_col_dest_port_min. */
    c = &vteprec_acl_entry_col_dest_port_min;
    c->name = "dest_port_min";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_dest_port_min;
    c->unparse = vteprec_acl_entry_unparse_dest_port_min;

    /* Initialize vteprec_acl_entry_col_direction. */
    c = &vteprec_acl_entry_col_direction;
    c->name = "direction";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("egress");
    c->type.key.enum_->keys[1].string = xstrdup("ingress");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_direction;
    c->unparse = vteprec_acl_entry_unparse_direction;

    /* Initialize vteprec_acl_entry_col_ethertype. */
    c = &vteprec_acl_entry_col_ethertype;
    c->name = "ethertype";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_ethertype;
    c->unparse = vteprec_acl_entry_unparse_ethertype;

    /* Initialize vteprec_acl_entry_col_icmp_code. */
    c = &vteprec_acl_entry_col_icmp_code;
    c->name = "icmp_code";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_icmp_code;
    c->unparse = vteprec_acl_entry_unparse_icmp_code;

    /* Initialize vteprec_acl_entry_col_icmp_type. */
    c = &vteprec_acl_entry_col_icmp_type;
    c->name = "icmp_type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_icmp_type;
    c->unparse = vteprec_acl_entry_unparse_icmp_type;

    /* Initialize vteprec_acl_entry_col_protocol. */
    c = &vteprec_acl_entry_col_protocol;
    c->name = "protocol";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_protocol;
    c->unparse = vteprec_acl_entry_unparse_protocol;

    /* Initialize vteprec_acl_entry_col_sequence. */
    c = &vteprec_acl_entry_col_sequence;
    c->name = "sequence";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_sequence;
    c->unparse = vteprec_acl_entry_unparse_sequence;

    /* Initialize vteprec_acl_entry_col_source_ip. */
    c = &vteprec_acl_entry_col_source_ip;
    c->name = "source_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_source_ip;
    c->unparse = vteprec_acl_entry_unparse_source_ip;

    /* Initialize vteprec_acl_entry_col_source_mac. */
    c = &vteprec_acl_entry_col_source_mac;
    c->name = "source_mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_source_mac;
    c->unparse = vteprec_acl_entry_unparse_source_mac;

    /* Initialize vteprec_acl_entry_col_source_mask. */
    c = &vteprec_acl_entry_col_source_mask;
    c->name = "source_mask";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_source_mask;
    c->unparse = vteprec_acl_entry_unparse_source_mask;

    /* Initialize vteprec_acl_entry_col_source_port_max. */
    c = &vteprec_acl_entry_col_source_port_max;
    c->name = "source_port_max";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_source_port_max;
    c->unparse = vteprec_acl_entry_unparse_source_port_max;

    /* Initialize vteprec_acl_entry_col_source_port_min. */
    c = &vteprec_acl_entry_col_source_port_min;
    c->name = "source_port_min";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_source_port_min;
    c->unparse = vteprec_acl_entry_unparse_source_port_min;

    /* Initialize vteprec_acl_entry_col_tcp_flags. */
    c = &vteprec_acl_entry_col_tcp_flags;
    c->name = "tcp_flags";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_tcp_flags;
    c->unparse = vteprec_acl_entry_unparse_tcp_flags;

    /* Initialize vteprec_acl_entry_col_tcp_flags_mask. */
    c = &vteprec_acl_entry_col_tcp_flags_mask;
    c->name = "tcp_flags_mask";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_acl_entry_parse_tcp_flags_mask;
    c->unparse = vteprec_acl_entry_unparse_tcp_flags_mask;
}

/* Arp_Sources_Local table. */

static void
vteprec_arp_sources_local_parse_locator(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_arp_sources_local *row = vteprec_arp_sources_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->locator = NULL;
    }
}

static void
vteprec_arp_sources_local_parse_src_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_arp_sources_local *row = vteprec_arp_sources_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->src_mac = datum->keys[0].string;
    } else {
        row->src_mac = "";
    }
}

static void
vteprec_arp_sources_local_unparse_locator(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_arp_sources_local_unparse_src_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_arp_sources_local_init__(struct ovsdb_idl_row *row)
{
    vteprec_arp_sources_local_init(vteprec_arp_sources_local_cast(row));
}

/* Clears the contents of 'row' in table "Arp_Sources_Local". */
void
vteprec_arp_sources_local_init(struct vteprec_arp_sources_local *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Arp_Sources_Local" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_arp_sources_local *
vteprec_arp_sources_local_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL], uuid));
}

/* Returns a row in table "Arp_Sources_Local" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_arp_sources_local *
vteprec_arp_sources_local_first(const struct ovsdb_idl *idl)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_arp_sources_local *
vteprec_arp_sources_local_next(const struct vteprec_arp_sources_local *row)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_arp_sources_local_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL]);
}

unsigned int vteprec_arp_sources_local_row_get_seqno(const struct vteprec_arp_sources_local *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_arp_sources_local *
vteprec_arp_sources_local_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL]));
}

const struct vteprec_arp_sources_local
*vteprec_arp_sources_local_track_get_next(const struct vteprec_arp_sources_local *row)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Arp_Sources_Local".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_local_delete(const struct vteprec_arp_sources_local *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Arp_Sources_Local" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_arp_sources_local *
vteprec_arp_sources_local_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_arp_sources_local_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_LOCAL], NULL));
}

/* Causes the original contents of column "locator" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_arp_sources_local_insert()).
 *
 *   - If "locator" has already been modified (with
 *     vteprec_arp_sources_local_set_locator()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_arp_sources_local_set_locator() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_local_verify_locator(const struct vteprec_arp_sources_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_LOCATOR]);
}

/* Causes the original contents of column "src_mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "src_mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "src_mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "src_mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_arp_sources_local_insert()).
 *
 *   - If "src_mac" has already been modified (with
 *     vteprec_arp_sources_local_set_src_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_arp_sources_local_set_src_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_local_verify_src_mac(const struct vteprec_arp_sources_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_SRC_MAC]);
}

/* Returns the "locator" column's value from the "Arp_Sources_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator" member in vteprec_arp_sources_local. */
const struct ovsdb_datum *
vteprec_arp_sources_local_get_locator(const struct vteprec_arp_sources_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_arp_sources_local_col_locator);
}

/* Returns the "src_mac" column's value from the "Arp_Sources_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes src_mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "src_mac" member in vteprec_arp_sources_local. */
const struct ovsdb_datum *
vteprec_arp_sources_local_get_src_mac(const struct vteprec_arp_sources_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_arp_sources_local_col_src_mac);
}

/* Sets the "locator" column from the "Arp_Sources_Local" table in 'row' to
 * 'locator'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_arp_sources_local_set_locator(const struct vteprec_arp_sources_local *row, const struct vteprec_physical_locator *locator)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_LOCATOR], &datum);
}

/* Sets the "src_mac" column from the "Arp_Sources_Local" table in 'row' to
 * 'src_mac'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_arp_sources_local_set_src_mac(const struct vteprec_arp_sources_local *row, const char *src_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, src_mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_COL_SRC_MAC], &datum);
}

struct ovsdb_idl_column vteprec_arp_sources_local_columns[VTEPREC_ARP_SOURCES_LOCAL_N_COLUMNS];

static void
vteprec_arp_sources_local_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_arp_sources_local_col_locator. */
    c = &vteprec_arp_sources_local_col_locator;
    c->name = "locator";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_arp_sources_local_parse_locator;
    c->unparse = vteprec_arp_sources_local_unparse_locator;

    /* Initialize vteprec_arp_sources_local_col_src_mac. */
    c = &vteprec_arp_sources_local_col_src_mac;
    c->name = "src_mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_arp_sources_local_parse_src_mac;
    c->unparse = vteprec_arp_sources_local_unparse_src_mac;
}

/* Arp_Sources_Remote table. */

static void
vteprec_arp_sources_remote_parse_locator(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_arp_sources_remote *row = vteprec_arp_sources_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->locator = NULL;
    }
}

static void
vteprec_arp_sources_remote_parse_src_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_arp_sources_remote *row = vteprec_arp_sources_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->src_mac = datum->keys[0].string;
    } else {
        row->src_mac = "";
    }
}

static void
vteprec_arp_sources_remote_unparse_locator(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_arp_sources_remote_unparse_src_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_arp_sources_remote_init__(struct ovsdb_idl_row *row)
{
    vteprec_arp_sources_remote_init(vteprec_arp_sources_remote_cast(row));
}

/* Clears the contents of 'row' in table "Arp_Sources_Remote". */
void
vteprec_arp_sources_remote_init(struct vteprec_arp_sources_remote *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Arp_Sources_Remote" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE], uuid));
}

/* Returns a row in table "Arp_Sources_Remote" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_first(const struct ovsdb_idl *idl)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_next(const struct vteprec_arp_sources_remote *row)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_arp_sources_remote_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE]);
}

unsigned int vteprec_arp_sources_remote_row_get_seqno(const struct vteprec_arp_sources_remote *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE]));
}

const struct vteprec_arp_sources_remote
*vteprec_arp_sources_remote_track_get_next(const struct vteprec_arp_sources_remote *row)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Arp_Sources_Remote".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_remote_delete(const struct vteprec_arp_sources_remote *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Arp_Sources_Remote" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_arp_sources_remote *
vteprec_arp_sources_remote_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_arp_sources_remote_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_ARP_SOURCES_REMOTE], NULL));
}

/* Causes the original contents of column "locator" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_arp_sources_remote_insert()).
 *
 *   - If "locator" has already been modified (with
 *     vteprec_arp_sources_remote_set_locator()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_arp_sources_remote_set_locator() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_remote_verify_locator(const struct vteprec_arp_sources_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_LOCATOR]);
}

/* Causes the original contents of column "src_mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "src_mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "src_mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "src_mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_arp_sources_remote_insert()).
 *
 *   - If "src_mac" has already been modified (with
 *     vteprec_arp_sources_remote_set_src_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_arp_sources_remote_set_src_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_arp_sources_remote_verify_src_mac(const struct vteprec_arp_sources_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_SRC_MAC]);
}

/* Returns the "locator" column's value from the "Arp_Sources_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator" member in vteprec_arp_sources_remote. */
const struct ovsdb_datum *
vteprec_arp_sources_remote_get_locator(const struct vteprec_arp_sources_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_arp_sources_remote_col_locator);
}

/* Returns the "src_mac" column's value from the "Arp_Sources_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes src_mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "src_mac" member in vteprec_arp_sources_remote. */
const struct ovsdb_datum *
vteprec_arp_sources_remote_get_src_mac(const struct vteprec_arp_sources_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_arp_sources_remote_col_src_mac);
}

/* Sets the "locator" column from the "Arp_Sources_Remote" table in 'row' to
 * 'locator'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_arp_sources_remote_set_locator(const struct vteprec_arp_sources_remote *row, const struct vteprec_physical_locator *locator)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_LOCATOR], &datum);
}

/* Sets the "src_mac" column from the "Arp_Sources_Remote" table in 'row' to
 * 'src_mac'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_arp_sources_remote_set_src_mac(const struct vteprec_arp_sources_remote *row, const char *src_mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, src_mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_COL_SRC_MAC], &datum);
}

struct ovsdb_idl_column vteprec_arp_sources_remote_columns[VTEPREC_ARP_SOURCES_REMOTE_N_COLUMNS];

static void
vteprec_arp_sources_remote_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_arp_sources_remote_col_locator. */
    c = &vteprec_arp_sources_remote_col_locator;
    c->name = "locator";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_arp_sources_remote_parse_locator;
    c->unparse = vteprec_arp_sources_remote_unparse_locator;

    /* Initialize vteprec_arp_sources_remote_col_src_mac. */
    c = &vteprec_arp_sources_remote_col_src_mac;
    c->name = "src_mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_arp_sources_remote_parse_src_mac;
    c->unparse = vteprec_arp_sources_remote_unparse_src_mac;
}

/* Global table. */

static void
vteprec_global_parse_managers(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_global *row = vteprec_global_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->managers = NULL;
    row->n_managers = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_manager *keyRow = vteprec_manager_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_MANAGER], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_managers) {
                row->managers = xmalloc(datum->n * sizeof *row->managers);
            }
            row->managers[row->n_managers] = keyRow;
            row->n_managers++;
        }
    }
}

static void
vteprec_global_parse_switches(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_global *row = vteprec_global_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->switches = NULL;
    row->n_switches = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_physical_switch *keyRow = vteprec_physical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_switches) {
                row->switches = xmalloc(datum->n * sizeof *row->switches);
            }
            row->switches[row->n_switches] = keyRow;
            row->n_switches++;
        }
    }
}

static void
vteprec_global_unparse_managers(struct ovsdb_idl_row *row_)
{
    struct vteprec_global *row = vteprec_global_cast(row_);

    ovs_assert(inited);
    free(row->managers);
}

static void
vteprec_global_unparse_switches(struct ovsdb_idl_row *row_)
{
    struct vteprec_global *row = vteprec_global_cast(row_);

    ovs_assert(inited);
    free(row->switches);
}

static void
vteprec_global_init__(struct ovsdb_idl_row *row)
{
    vteprec_global_init(vteprec_global_cast(row));
}

/* Clears the contents of 'row' in table "Global". */
void
vteprec_global_init(struct vteprec_global *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Global" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_global *
vteprec_global_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_global_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_GLOBAL], uuid));
}

/* Returns a row in table "Global" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_global *
vteprec_global_first(const struct ovsdb_idl *idl)
{
    return vteprec_global_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_GLOBAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_global *
vteprec_global_next(const struct vteprec_global *row)
{
    return vteprec_global_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_global_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_GLOBAL]);
}

unsigned int vteprec_global_row_get_seqno(const struct vteprec_global *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_global *
vteprec_global_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_global_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_GLOBAL]));
}

const struct vteprec_global
*vteprec_global_track_get_next(const struct vteprec_global *row)
{
    return vteprec_global_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Global".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_global_delete(const struct vteprec_global *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Global" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_global *
vteprec_global_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_global_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_GLOBAL], NULL));
}

/* Causes the original contents of column "managers" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "managers" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "managers" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "managers" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_global_insert()).
 *
 *   - If "managers" has already been modified (with
 *     vteprec_global_set_managers()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_global_set_managers() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_global_verify_managers(const struct vteprec_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_global_columns[VTEPREC_GLOBAL_COL_MANAGERS]);
}

/* Causes the original contents of column "switches" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "switches" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "switches" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "switches" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_global_insert()).
 *
 *   - If "switches" has already been modified (with
 *     vteprec_global_set_switches()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_global_set_switches() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_global_verify_switches(const struct vteprec_global *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_global_columns[VTEPREC_GLOBAL_COL_SWITCHES]);
}

/* Returns the "managers" column's value from the "Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes managers's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "managers" member in vteprec_global. */
const struct ovsdb_datum *
vteprec_global_get_managers(const struct vteprec_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_global_col_managers);
}

/* Returns the "switches" column's value from the "Global" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes switches's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "switches" member in vteprec_global. */
const struct ovsdb_datum *
vteprec_global_get_switches(const struct vteprec_global *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_global_col_switches);
}

/* Sets the "managers" column from the "Global" table in 'row' to
 * the 'managers' set with 'n_managers' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_global_set_managers(const struct vteprec_global *row, struct vteprec_manager **managers, size_t n_managers)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_managers;
    datum.keys = n_managers ? xmalloc(n_managers * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_managers; i++) {
        datum.keys[i].uuid = managers[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_global_columns[VTEPREC_GLOBAL_COL_MANAGERS], &datum);
}

/* Sets the "switches" column from the "Global" table in 'row' to
 * the 'switches' set with 'n_switches' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_global_set_switches(const struct vteprec_global *row, struct vteprec_physical_switch **switches, size_t n_switches)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_switches;
    datum.keys = n_switches ? xmalloc(n_switches * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_switches; i++) {
        datum.keys[i].uuid = switches[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_global_columns[VTEPREC_GLOBAL_COL_SWITCHES], &datum);
}

struct ovsdb_idl_column vteprec_global_columns[VTEPREC_GLOBAL_N_COLUMNS];

static void
vteprec_global_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_global_col_managers. */
    c = &vteprec_global_col_managers;
    c->name = "managers";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Manager";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_global_parse_managers;
    c->unparse = vteprec_global_unparse_managers;

    /* Initialize vteprec_global_col_switches. */
    c = &vteprec_global_col_switches;
    c->name = "switches";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Switch";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_global_parse_switches;
    c->unparse = vteprec_global_unparse_switches;
}

/* Logical_Binding_Stats table. */

static void
vteprec_logical_binding_stats_parse_bytes_from_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_binding_stats *row = vteprec_logical_binding_stats_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bytes_from_local = datum->keys[0].integer;
    } else {
        row->bytes_from_local = 0;
    }
}

static void
vteprec_logical_binding_stats_parse_bytes_to_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_binding_stats *row = vteprec_logical_binding_stats_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bytes_to_local = datum->keys[0].integer;
    } else {
        row->bytes_to_local = 0;
    }
}

static void
vteprec_logical_binding_stats_parse_packets_from_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_binding_stats *row = vteprec_logical_binding_stats_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->packets_from_local = datum->keys[0].integer;
    } else {
        row->packets_from_local = 0;
    }
}

static void
vteprec_logical_binding_stats_parse_packets_to_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_binding_stats *row = vteprec_logical_binding_stats_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->packets_to_local = datum->keys[0].integer;
    } else {
        row->packets_to_local = 0;
    }
}

static void
vteprec_logical_binding_stats_unparse_bytes_from_local(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_binding_stats_unparse_bytes_to_local(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_binding_stats_unparse_packets_from_local(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_binding_stats_unparse_packets_to_local(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_binding_stats_init__(struct ovsdb_idl_row *row)
{
    vteprec_logical_binding_stats_init(vteprec_logical_binding_stats_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Binding_Stats". */
void
vteprec_logical_binding_stats_init(struct vteprec_logical_binding_stats *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Logical_Binding_Stats" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS], uuid));
}

/* Returns a row in table "Logical_Binding_Stats" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_next(const struct vteprec_logical_binding_stats *row)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_logical_binding_stats_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS]);
}

unsigned int vteprec_logical_binding_stats_row_get_seqno(const struct vteprec_logical_binding_stats *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS]));
}

const struct vteprec_logical_binding_stats
*vteprec_logical_binding_stats_track_get_next(const struct vteprec_logical_binding_stats *row)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Binding_Stats".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_binding_stats_delete(const struct vteprec_logical_binding_stats *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Binding_Stats" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_logical_binding_stats *
vteprec_logical_binding_stats_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_logical_binding_stats_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS], NULL));
}

/* Causes the original contents of column "bytes_from_local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bytes_from_local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bytes_from_local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bytes_from_local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_binding_stats_insert()).
 *
 *   - If "bytes_from_local" has already been modified (with
 *     vteprec_logical_binding_stats_set_bytes_from_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_binding_stats_set_bytes_from_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_binding_stats_verify_bytes_from_local(const struct vteprec_logical_binding_stats *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_FROM_LOCAL]);
}

/* Causes the original contents of column "bytes_to_local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bytes_to_local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bytes_to_local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bytes_to_local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_binding_stats_insert()).
 *
 *   - If "bytes_to_local" has already been modified (with
 *     vteprec_logical_binding_stats_set_bytes_to_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_binding_stats_set_bytes_to_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_binding_stats_verify_bytes_to_local(const struct vteprec_logical_binding_stats *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_TO_LOCAL]);
}

/* Causes the original contents of column "packets_from_local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "packets_from_local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "packets_from_local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "packets_from_local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_binding_stats_insert()).
 *
 *   - If "packets_from_local" has already been modified (with
 *     vteprec_logical_binding_stats_set_packets_from_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_binding_stats_set_packets_from_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_binding_stats_verify_packets_from_local(const struct vteprec_logical_binding_stats *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_FROM_LOCAL]);
}

/* Causes the original contents of column "packets_to_local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "packets_to_local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "packets_to_local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "packets_to_local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_binding_stats_insert()).
 *
 *   - If "packets_to_local" has already been modified (with
 *     vteprec_logical_binding_stats_set_packets_to_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_binding_stats_set_packets_to_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_binding_stats_verify_packets_to_local(const struct vteprec_logical_binding_stats *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_TO_LOCAL]);
}

/* Returns the "bytes_from_local" column's value from the "Logical_Binding_Stats" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes bytes_from_local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bytes_from_local" member in vteprec_logical_binding_stats. */
const struct ovsdb_datum *
vteprec_logical_binding_stats_get_bytes_from_local(const struct vteprec_logical_binding_stats *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_binding_stats_col_bytes_from_local);
}

/* Returns the "bytes_to_local" column's value from the "Logical_Binding_Stats" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes bytes_to_local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bytes_to_local" member in vteprec_logical_binding_stats. */
const struct ovsdb_datum *
vteprec_logical_binding_stats_get_bytes_to_local(const struct vteprec_logical_binding_stats *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_binding_stats_col_bytes_to_local);
}

/* Returns the "packets_from_local" column's value from the "Logical_Binding_Stats" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes packets_from_local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "packets_from_local" member in vteprec_logical_binding_stats. */
const struct ovsdb_datum *
vteprec_logical_binding_stats_get_packets_from_local(const struct vteprec_logical_binding_stats *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_binding_stats_col_packets_from_local);
}

/* Returns the "packets_to_local" column's value from the "Logical_Binding_Stats" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes packets_to_local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "packets_to_local" member in vteprec_logical_binding_stats. */
const struct ovsdb_datum *
vteprec_logical_binding_stats_get_packets_to_local(const struct vteprec_logical_binding_stats *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_binding_stats_col_packets_to_local);
}

/* Sets the "bytes_from_local" column from the "Logical_Binding_Stats" table in 'row' to
 * 'bytes_from_local'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_binding_stats_set_bytes_from_local(const struct vteprec_logical_binding_stats *row, int64_t bytes_from_local)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = bytes_from_local;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_FROM_LOCAL], &datum);
}

/* Sets the "bytes_to_local" column from the "Logical_Binding_Stats" table in 'row' to
 * 'bytes_to_local'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_binding_stats_set_bytes_to_local(const struct vteprec_logical_binding_stats *row, int64_t bytes_to_local)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = bytes_to_local;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_BYTES_TO_LOCAL], &datum);
}

/* Sets the "packets_from_local" column from the "Logical_Binding_Stats" table in 'row' to
 * 'packets_from_local'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_binding_stats_set_packets_from_local(const struct vteprec_logical_binding_stats *row, int64_t packets_from_local)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = packets_from_local;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_FROM_LOCAL], &datum);
}

/* Sets the "packets_to_local" column from the "Logical_Binding_Stats" table in 'row' to
 * 'packets_to_local'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_binding_stats_set_packets_to_local(const struct vteprec_logical_binding_stats *row, int64_t packets_to_local)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = packets_to_local;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_COL_PACKETS_TO_LOCAL], &datum);
}

struct ovsdb_idl_column vteprec_logical_binding_stats_columns[VTEPREC_LOGICAL_BINDING_STATS_N_COLUMNS];

static void
vteprec_logical_binding_stats_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_logical_binding_stats_col_bytes_from_local. */
    c = &vteprec_logical_binding_stats_col_bytes_from_local;
    c->name = "bytes_from_local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_binding_stats_parse_bytes_from_local;
    c->unparse = vteprec_logical_binding_stats_unparse_bytes_from_local;

    /* Initialize vteprec_logical_binding_stats_col_bytes_to_local. */
    c = &vteprec_logical_binding_stats_col_bytes_to_local;
    c->name = "bytes_to_local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_binding_stats_parse_bytes_to_local;
    c->unparse = vteprec_logical_binding_stats_unparse_bytes_to_local;

    /* Initialize vteprec_logical_binding_stats_col_packets_from_local. */
    c = &vteprec_logical_binding_stats_col_packets_from_local;
    c->name = "packets_from_local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_binding_stats_parse_packets_from_local;
    c->unparse = vteprec_logical_binding_stats_unparse_packets_from_local;

    /* Initialize vteprec_logical_binding_stats_col_packets_to_local. */
    c = &vteprec_logical_binding_stats_col_packets_to_local;
    c->name = "packets_to_local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_binding_stats_parse_packets_to_local;
    c->unparse = vteprec_logical_binding_stats_unparse_packets_to_local;
}

/* Logical_Router table. */

static void
vteprec_logical_router_parse_LR_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->LR_fault_status = NULL;
    row->n_LR_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_LR_fault_status) {
            row->LR_fault_status = xmalloc(datum->n * sizeof *row->LR_fault_status);
        }
        row->LR_fault_status[row->n_LR_fault_status] = datum->keys[i].string;
        row->n_LR_fault_status++;
    }
}

static void
vteprec_logical_router_parse_acl_binding(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_acl_binding = NULL;
    row->value_acl_binding = NULL;
    row->n_acl_binding = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_acl *valueRow = vteprec_acl_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_ACL], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_acl_binding) {
                row->key_acl_binding = xmalloc(datum->n * sizeof *row->key_acl_binding);
                row->value_acl_binding = xmalloc(datum->n * sizeof *row->value_acl_binding);
            }
            row->key_acl_binding[row->n_acl_binding] = datum->keys[i].string;
            row->value_acl_binding[row->n_acl_binding] = valueRow;
            row->n_acl_binding++;
        }
    }
}

static void
vteprec_logical_router_parse_description(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->description = datum->keys[0].string;
    } else {
        row->description = "";
    }
}

static void
vteprec_logical_router_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
vteprec_logical_router_parse_static_routes(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->static_routes);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->static_routes,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_logical_router_parse_switch_binding(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_switch_binding = NULL;
    row->value_switch_binding = NULL;
    row->n_switch_binding = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_logical_switch *valueRow = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_switch_binding) {
                row->key_switch_binding = xmalloc(datum->n * sizeof *row->key_switch_binding);
                row->value_switch_binding = xmalloc(datum->n * sizeof *row->value_switch_binding);
            }
            row->key_switch_binding[row->n_switch_binding] = datum->keys[i].string;
            row->value_switch_binding[row->n_switch_binding] = valueRow;
            row->n_switch_binding++;
        }
    }
}

static void
vteprec_logical_router_unparse_LR_fault_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->LR_fault_status);
}

static void
vteprec_logical_router_unparse_acl_binding(struct ovsdb_idl_row *row_)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->key_acl_binding);
    free(row->value_acl_binding);
}

static void
vteprec_logical_router_unparse_description(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_router_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_router_unparse_static_routes(struct ovsdb_idl_row *row_)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->static_routes);
}

static void
vteprec_logical_router_unparse_switch_binding(struct ovsdb_idl_row *row_)
{
    struct vteprec_logical_router *row = vteprec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->key_switch_binding);
    free(row->value_switch_binding);
}

static void
vteprec_logical_router_init__(struct ovsdb_idl_row *row)
{
    vteprec_logical_router_init(vteprec_logical_router_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router". */
void
vteprec_logical_router_init(struct vteprec_logical_router *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->static_routes);
}

/* Searches table "Logical_Router" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_logical_router *
vteprec_logical_router_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_logical_router_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER], uuid));
}

/* Returns a row in table "Logical_Router" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_logical_router *
vteprec_logical_router_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_router_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_logical_router *
vteprec_logical_router_next(const struct vteprec_logical_router *row)
{
    return vteprec_logical_router_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_logical_router_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER]);
}

unsigned int vteprec_logical_router_row_get_seqno(const struct vteprec_logical_router *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_logical_router *
vteprec_logical_router_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_router_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER]));
}

const struct vteprec_logical_router
*vteprec_logical_router_track_get_next(const struct vteprec_logical_router *row)
{
    return vteprec_logical_router_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_delete(const struct vteprec_logical_router *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_logical_router *
vteprec_logical_router_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_logical_router_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_ROUTER], NULL));
}

/* Causes the original contents of column "LR_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "LR_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "LR_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "LR_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "LR_fault_status" has already been modified (with
 *     vteprec_logical_router_set_LR_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_LR_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_LR_fault_status(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_LR_FAULT_STATUS]);
}

/* Causes the original contents of column "acl_binding" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acl_binding" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acl_binding" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acl_binding" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "acl_binding" has already been modified (with
 *     vteprec_logical_router_set_acl_binding()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_acl_binding() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_acl_binding(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_ACL_BINDING]);
}

/* Causes the original contents of column "description" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "description" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "description" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "description" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "description" has already been modified (with
 *     vteprec_logical_router_set_description()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_description() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_description(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_DESCRIPTION]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "name" has already been modified (with
 *     vteprec_logical_router_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_name(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_NAME]);
}

/* Causes the original contents of column "static_routes" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "static_routes" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "static_routes" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "static_routes" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "static_routes" has already been modified (with
 *     vteprec_logical_router_set_static_routes()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_static_routes() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_static_routes(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_STATIC_ROUTES]);
}

/* Causes the original contents of column "switch_binding" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "switch_binding" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "switch_binding" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "switch_binding" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_router_insert()).
 *
 *   - If "switch_binding" has already been modified (with
 *     vteprec_logical_router_set_switch_binding()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_router_set_switch_binding() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_router_verify_switch_binding(const struct vteprec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_SWITCH_BINDING]);
}

/* Returns the "LR_fault_status" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes LR_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "LR_fault_status" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_LR_fault_status(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_LR_fault_status);
}

/* Returns the "acl_binding" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acl_binding's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acl_binding" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_acl_binding(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_acl_binding);
}

/* Returns the "description" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes description's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "description" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_description(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_description);
}

/* Returns the "name" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_name(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_name);
}

/* Returns the "static_routes" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes static_routes's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "static_routes" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_static_routes(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_static_routes);
}

/* Returns the "switch_binding" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes switch_binding's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "switch_binding" member in vteprec_logical_router. */
const struct ovsdb_datum *
vteprec_logical_router_get_switch_binding(const struct vteprec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_router_col_switch_binding);
}

/* Sets the "LR_fault_status" column from the "Logical_Router" table in 'row' to
 * the 'LR_fault_status' set with 'n_LR_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_router_set_LR_fault_status(const struct vteprec_logical_router *row, const char **LR_fault_status, size_t n_LR_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_LR_fault_status;
    datum.keys = n_LR_fault_status ? xmalloc(n_LR_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_LR_fault_status; i++) {
        datum.keys[i].string = xstrdup(LR_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_LR_FAULT_STATUS], &datum);
}

/* Sets the "acl_binding" column from the "Logical_Router" table in 'row' to
 * the map with keys 'key_acl_binding' and values 'value_acl_binding'
 * with 'n_acl_binding' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_router_set_acl_binding(const struct vteprec_logical_router *row, const char **key_acl_binding, struct vteprec_acl **value_acl_binding, size_t n_acl_binding)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acl_binding;
    datum.keys = n_acl_binding ? xmalloc(n_acl_binding * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_acl_binding * sizeof *datum.values);
    for (i = 0; i < n_acl_binding; i++) {
        datum.keys[i].string = xstrdup(key_acl_binding[i]);
        datum.values[i].uuid = value_acl_binding[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_ACL_BINDING], &datum);
}

/* Sets the "description" column from the "Logical_Router" table in 'row' to
 * 'description'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_router_set_description(const struct vteprec_logical_router *row, const char *description)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, description);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_DESCRIPTION], &datum);
}

/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_router_set_name(const struct vteprec_logical_router *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_NAME], &datum);
}

/* Sets the "static_routes" column's value from the "Logical_Router" table in 'row'
 * to 'static_routes'.
 *
 * The caller retains ownership of 'static_routes' and everything in it. */
void
vteprec_logical_router_set_static_routes(const struct vteprec_logical_router *row, const struct smap *static_routes)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (static_routes) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(static_routes);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, static_routes) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_STATIC_ROUTES],
                        &datum);
}


/* Sets the "switch_binding" column from the "Logical_Router" table in 'row' to
 * the map with keys 'key_switch_binding' and values 'value_switch_binding'
 * with 'n_switch_binding' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_router_set_switch_binding(const struct vteprec_logical_router *row, const char **key_switch_binding, struct vteprec_logical_switch **value_switch_binding, size_t n_switch_binding)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_switch_binding;
    datum.keys = n_switch_binding ? xmalloc(n_switch_binding * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_switch_binding * sizeof *datum.values);
    for (i = 0; i < n_switch_binding; i++) {
        datum.keys[i].string = xstrdup(key_switch_binding[i]);
        datum.values[i].uuid = value_switch_binding[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_COL_SWITCH_BINDING], &datum);
}

struct ovsdb_idl_column vteprec_logical_router_columns[VTEPREC_LOGICAL_ROUTER_N_COLUMNS];

static void
vteprec_logical_router_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_logical_router_col_LR_fault_status. */
    c = &vteprec_logical_router_col_LR_fault_status;
    c->name = "LR_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_LR_fault_status;
    c->unparse = vteprec_logical_router_unparse_LR_fault_status;

    /* Initialize vteprec_logical_router_col_acl_binding. */
    c = &vteprec_logical_router_col_acl_binding;
    c->name = "acl_binding";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "ACL";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_acl_binding;
    c->unparse = vteprec_logical_router_unparse_acl_binding;

    /* Initialize vteprec_logical_router_col_description. */
    c = &vteprec_logical_router_col_description;
    c->name = "description";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_description;
    c->unparse = vteprec_logical_router_unparse_description;

    /* Initialize vteprec_logical_router_col_name. */
    c = &vteprec_logical_router_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_name;
    c->unparse = vteprec_logical_router_unparse_name;

    /* Initialize vteprec_logical_router_col_static_routes. */
    c = &vteprec_logical_router_col_static_routes;
    c->name = "static_routes";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_static_routes;
    c->unparse = vteprec_logical_router_unparse_static_routes;

    /* Initialize vteprec_logical_router_col_switch_binding. */
    c = &vteprec_logical_router_col_switch_binding;
    c->name = "switch_binding";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "Logical_Switch";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_logical_router_parse_switch_binding;
    c->unparse = vteprec_logical_router_unparse_switch_binding;
}

/* Logical_Switch table. */

static void
vteprec_logical_switch_parse_description(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_switch *row = vteprec_logical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->description = datum->keys[0].string;
    } else {
        row->description = "";
    }
}

static void
vteprec_logical_switch_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_switch *row = vteprec_logical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
vteprec_logical_switch_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_logical_switch *row = vteprec_logical_switch_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tunnel_key = NULL;
    row->n_tunnel_key = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tunnel_key) {
            row->tunnel_key = xmalloc(n * sizeof *row->tunnel_key);
        }
        row->tunnel_key[row->n_tunnel_key] = datum->keys[i].integer;
        row->n_tunnel_key++;
    }
}

static void
vteprec_logical_switch_unparse_description(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_switch_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_logical_switch_unparse_tunnel_key(struct ovsdb_idl_row *row_)
{
    struct vteprec_logical_switch *row = vteprec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->tunnel_key);
}

static void
vteprec_logical_switch_init__(struct ovsdb_idl_row *row)
{
    vteprec_logical_switch_init(vteprec_logical_switch_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch". */
void
vteprec_logical_switch_init(struct vteprec_logical_switch *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Logical_Switch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_logical_switch *
vteprec_logical_switch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_logical_switch_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], uuid));
}

/* Returns a row in table "Logical_Switch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_logical_switch *
vteprec_logical_switch_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_switch_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_logical_switch *
vteprec_logical_switch_next(const struct vteprec_logical_switch *row)
{
    return vteprec_logical_switch_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_logical_switch_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH]);
}

unsigned int vteprec_logical_switch_row_get_seqno(const struct vteprec_logical_switch *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_logical_switch *
vteprec_logical_switch_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_logical_switch_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH]));
}

const struct vteprec_logical_switch
*vteprec_logical_switch_track_get_next(const struct vteprec_logical_switch *row)
{
    return vteprec_logical_switch_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_switch_delete(const struct vteprec_logical_switch *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Switch" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_logical_switch *
vteprec_logical_switch_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_logical_switch_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], NULL));
}

/* Causes the original contents of column "description" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "description" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "description" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "description" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_switch_insert()).
 *
 *   - If "description" has already been modified (with
 *     vteprec_logical_switch_set_description()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_switch_set_description() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_switch_verify_description(const struct vteprec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_DESCRIPTION]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_switch_insert()).
 *
 *   - If "name" has already been modified (with
 *     vteprec_logical_switch_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_switch_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_switch_verify_name(const struct vteprec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_NAME]);
}

/* Causes the original contents of column "tunnel_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnel_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnel_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnel_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_logical_switch_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     vteprec_logical_switch_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_logical_switch_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_logical_switch_verify_tunnel_key(const struct vteprec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_TUNNEL_KEY]);
}

/* Returns the "description" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes description's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "description" member in vteprec_logical_switch. */
const struct ovsdb_datum *
vteprec_logical_switch_get_description(const struct vteprec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_switch_col_description);
}

/* Returns the "name" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in vteprec_logical_switch. */
const struct ovsdb_datum *
vteprec_logical_switch_get_name(const struct vteprec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_switch_col_name);
}

/* Returns the "tunnel_key" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tunnel_key's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tunnel_key" member in vteprec_logical_switch. */
const struct ovsdb_datum *
vteprec_logical_switch_get_tunnel_key(const struct vteprec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_logical_switch_col_tunnel_key);
}

/* Sets the "description" column from the "Logical_Switch" table in 'row' to
 * 'description'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_switch_set_description(const struct vteprec_logical_switch *row, const char *description)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, description);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_DESCRIPTION], &datum);
}

/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_switch_set_name(const struct vteprec_logical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_NAME], &datum);
}

/* Sets the "tunnel_key" column from the "Logical_Switch" table in 'row' to
 * the 'tunnel_key' set with 'n_tunnel_key' entries.
 *
 * 'n_tunnel_key' may be 0 or 1; if it is 0, then 'tunnel_key'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_logical_switch_set_tunnel_key(const struct vteprec_logical_switch *row, const int64_t *tunnel_key, size_t n_tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tunnel_key) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tunnel_key;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_COL_TUNNEL_KEY], &datum);
}

struct ovsdb_idl_column vteprec_logical_switch_columns[VTEPREC_LOGICAL_SWITCH_N_COLUMNS];

static void
vteprec_logical_switch_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_logical_switch_col_description. */
    c = &vteprec_logical_switch_col_description;
    c->name = "description";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_switch_parse_description;
    c->unparse = vteprec_logical_switch_unparse_description;

    /* Initialize vteprec_logical_switch_col_name. */
    c = &vteprec_logical_switch_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_switch_parse_name;
    c->unparse = vteprec_logical_switch_unparse_name;

    /* Initialize vteprec_logical_switch_col_tunnel_key. */
    c = &vteprec_logical_switch_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_logical_switch_parse_tunnel_key;
    c->unparse = vteprec_logical_switch_unparse_tunnel_key;
}

/* Manager table. */

static void
vteprec_manager_parse_inactivity_probe(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->inactivity_probe = NULL;
    row->n_inactivity_probe = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_inactivity_probe) {
            row->inactivity_probe = xmalloc(n * sizeof *row->inactivity_probe);
        }
        row->inactivity_probe[row->n_inactivity_probe] = datum->keys[i].integer;
        row->n_inactivity_probe++;
    }
}

static void
vteprec_manager_parse_is_connected(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->is_connected = datum->keys[0].boolean;
    } else {
        row->is_connected = false;
    }
}

static void
vteprec_manager_parse_max_backoff(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->max_backoff = NULL;
    row->n_max_backoff = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_max_backoff) {
            row->max_backoff = xmalloc(n * sizeof *row->max_backoff);
        }
        row->max_backoff[row->n_max_backoff] = datum->keys[i].integer;
        row->n_max_backoff++;
    }
}

static void
vteprec_manager_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_manager_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_manager_parse_target(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->target = datum->keys[0].string;
    } else {
        row->target = "";
    }
}

static void
vteprec_manager_unparse_inactivity_probe(struct ovsdb_idl_row *row_)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    free(row->inactivity_probe);
}

static void
vteprec_manager_unparse_is_connected(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_manager_unparse_max_backoff(struct ovsdb_idl_row *row_)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    free(row->max_backoff);
}

static void
vteprec_manager_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
vteprec_manager_unparse_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_manager *row = vteprec_manager_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
vteprec_manager_unparse_target(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_manager_init__(struct ovsdb_idl_row *row)
{
    vteprec_manager_init(vteprec_manager_cast(row));
}

/* Clears the contents of 'row' in table "Manager". */
void
vteprec_manager_init(struct vteprec_manager *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->other_config);
    smap_init(&row->status);
}

/* Searches table "Manager" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_manager *
vteprec_manager_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_manager_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_MANAGER], uuid));
}

/* Returns a row in table "Manager" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_manager *
vteprec_manager_first(const struct ovsdb_idl *idl)
{
    return vteprec_manager_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_MANAGER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_manager *
vteprec_manager_next(const struct vteprec_manager *row)
{
    return vteprec_manager_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_manager_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_MANAGER]);
}

unsigned int vteprec_manager_row_get_seqno(const struct vteprec_manager *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_manager *
vteprec_manager_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_manager_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_MANAGER]));
}

const struct vteprec_manager
*vteprec_manager_track_get_next(const struct vteprec_manager *row)
{
    return vteprec_manager_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Manager".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_delete(const struct vteprec_manager *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Manager" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_manager *
vteprec_manager_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_manager_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_MANAGER], NULL));
}

/* Causes the original contents of column "inactivity_probe" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "inactivity_probe" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "inactivity_probe" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "inactivity_probe" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "inactivity_probe" has already been modified (with
 *     vteprec_manager_set_inactivity_probe()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_inactivity_probe() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_inactivity_probe(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_INACTIVITY_PROBE]);
}

/* Causes the original contents of column "is_connected" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "is_connected" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "is_connected" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "is_connected" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "is_connected" has already been modified (with
 *     vteprec_manager_set_is_connected()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_is_connected() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_is_connected(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_IS_CONNECTED]);
}

/* Causes the original contents of column "max_backoff" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "max_backoff" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "max_backoff" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "max_backoff" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "max_backoff" has already been modified (with
 *     vteprec_manager_set_max_backoff()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_max_backoff() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_max_backoff(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_MAX_BACKOFF]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     vteprec_manager_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_other_config(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "status" has already been modified (with
 *     vteprec_manager_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_status(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_STATUS]);
}

/* Causes the original contents of column "target" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "target" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "target" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "target" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_manager_insert()).
 *
 *   - If "target" has already been modified (with
 *     vteprec_manager_set_target()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_manager_set_target() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_manager_verify_target(const struct vteprec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_TARGET]);
}

/* Returns the "inactivity_probe" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes inactivity_probe's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "inactivity_probe" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_inactivity_probe(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_inactivity_probe);
}

/* Returns the "is_connected" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes is_connected's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "is_connected" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_is_connected(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_is_connected);
}

/* Returns the "max_backoff" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes max_backoff's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "max_backoff" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_max_backoff(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_max_backoff);
}

/* Returns the "other_config" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_other_config(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_other_config);
}

/* Returns the "status" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_status(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_status);
}

/* Returns the "target" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes target's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "target" member in vteprec_manager. */
const struct ovsdb_datum *
vteprec_manager_get_target(const struct vteprec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_manager_col_target);
}

/* Sets the "inactivity_probe" column from the "Manager" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_manager_set_inactivity_probe(const struct vteprec_manager *row, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_INACTIVITY_PROBE], &datum);
}

/* Sets the "is_connected" column from the "Manager" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_manager_set_is_connected(const struct vteprec_manager *row, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_IS_CONNECTED], &datum);
}

/* Sets the "max_backoff" column from the "Manager" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
vteprec_manager_set_max_backoff(const struct vteprec_manager *row, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_MAX_BACKOFF], &datum);
}

/* Sets the "other_config" column's value from the "Manager" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
vteprec_manager_set_other_config(const struct vteprec_manager *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_manager_columns[VTEPREC_MANAGER_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "status" column's value from the "Manager" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
vteprec_manager_set_status(const struct vteprec_manager *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_manager_columns[VTEPREC_MANAGER_COL_STATUS],
                        &datum);
}


/* Sets the "target" column from the "Manager" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_manager_set_target(const struct vteprec_manager *row, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_manager_columns[VTEPREC_MANAGER_COL_TARGET], &datum);
}

struct ovsdb_idl_column vteprec_manager_columns[VTEPREC_MANAGER_N_COLUMNS];

static void
vteprec_manager_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_manager_col_inactivity_probe. */
    c = &vteprec_manager_col_inactivity_probe;
    c->name = "inactivity_probe";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_manager_parse_inactivity_probe;
    c->unparse = vteprec_manager_unparse_inactivity_probe;

    /* Initialize vteprec_manager_col_is_connected. */
    c = &vteprec_manager_col_is_connected;
    c->name = "is_connected";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_manager_parse_is_connected;
    c->unparse = vteprec_manager_unparse_is_connected;

    /* Initialize vteprec_manager_col_max_backoff. */
    c = &vteprec_manager_col_max_backoff;
    c->name = "max_backoff";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1000);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_manager_parse_max_backoff;
    c->unparse = vteprec_manager_unparse_max_backoff;

    /* Initialize vteprec_manager_col_other_config. */
    c = &vteprec_manager_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_manager_parse_other_config;
    c->unparse = vteprec_manager_unparse_other_config;

    /* Initialize vteprec_manager_col_status. */
    c = &vteprec_manager_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_manager_parse_status;
    c->unparse = vteprec_manager_unparse_status;

    /* Initialize vteprec_manager_col_target. */
    c = &vteprec_manager_col_target;
    c->name = "target";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_manager_parse_target;
    c->unparse = vteprec_manager_unparse_target;
}

/* Mcast_Macs_Local table. */

static void
vteprec_mcast_macs_local_parse_MAC(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_local *row = vteprec_mcast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->MAC = datum->keys[0].string;
    } else {
        row->MAC = "";
    }
}

static void
vteprec_mcast_macs_local_parse_ipaddr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_local *row = vteprec_mcast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipaddr = datum->keys[0].string;
    } else {
        row->ipaddr = "";
    }
}

static void
vteprec_mcast_macs_local_parse_locator_set(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_local *row = vteprec_mcast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator_set = vteprec_physical_locator_set_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET], &datum->keys[0].uuid));
    } else {
        row->locator_set = NULL;
    }
}

static void
vteprec_mcast_macs_local_parse_logical_switch(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_local *row = vteprec_mcast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_switch = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->keys[0].uuid));
    } else {
        row->logical_switch = NULL;
    }
}

static void
vteprec_mcast_macs_local_unparse_MAC(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_local_unparse_ipaddr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_local_unparse_locator_set(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_local_unparse_logical_switch(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_local_init__(struct ovsdb_idl_row *row)
{
    vteprec_mcast_macs_local_init(vteprec_mcast_macs_local_cast(row));
}

/* Clears the contents of 'row' in table "Mcast_Macs_Local". */
void
vteprec_mcast_macs_local_init(struct vteprec_mcast_macs_local *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Mcast_Macs_Local" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL], uuid));
}

/* Returns a row in table "Mcast_Macs_Local" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_first(const struct ovsdb_idl *idl)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_next(const struct vteprec_mcast_macs_local *row)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_mcast_macs_local_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL]);
}

unsigned int vteprec_mcast_macs_local_row_get_seqno(const struct vteprec_mcast_macs_local *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL]));
}

const struct vteprec_mcast_macs_local
*vteprec_mcast_macs_local_track_get_next(const struct vteprec_mcast_macs_local *row)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Mcast_Macs_Local".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_local_delete(const struct vteprec_mcast_macs_local *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Mcast_Macs_Local" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_mcast_macs_local *
vteprec_mcast_macs_local_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_mcast_macs_local_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_LOCAL], NULL));
}

/* Causes the original contents of column "MAC" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "MAC" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "MAC" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "MAC" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_local_insert()).
 *
 *   - If "MAC" has already been modified (with
 *     vteprec_mcast_macs_local_set_MAC()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_local_set_MAC() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_local_verify_MAC(const struct vteprec_mcast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_MAC]);
}

/* Causes the original contents of column "ipaddr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipaddr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipaddr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipaddr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_local_insert()).
 *
 *   - If "ipaddr" has already been modified (with
 *     vteprec_mcast_macs_local_set_ipaddr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_local_set_ipaddr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_local_verify_ipaddr(const struct vteprec_mcast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_IPADDR]);
}

/* Causes the original contents of column "locator_set" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator_set" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator_set" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator_set" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_local_insert()).
 *
 *   - If "locator_set" has already been modified (with
 *     vteprec_mcast_macs_local_set_locator_set()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_local_set_locator_set() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_local_verify_locator_set(const struct vteprec_mcast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOCATOR_SET]);
}

/* Causes the original contents of column "logical_switch" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_switch" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_switch" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_switch" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_local_insert()).
 *
 *   - If "logical_switch" has already been modified (with
 *     vteprec_mcast_macs_local_set_logical_switch()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_local_set_logical_switch() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_local_verify_logical_switch(const struct vteprec_mcast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOGICAL_SWITCH]);
}

/* Returns the "MAC" column's value from the "Mcast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes MAC's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "MAC" member in vteprec_mcast_macs_local. */
const struct ovsdb_datum *
vteprec_mcast_macs_local_get_MAC(const struct vteprec_mcast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_local_col_MAC);
}

/* Returns the "ipaddr" column's value from the "Mcast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ipaddr's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipaddr" member in vteprec_mcast_macs_local. */
const struct ovsdb_datum *
vteprec_mcast_macs_local_get_ipaddr(const struct vteprec_mcast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_local_col_ipaddr);
}

/* Returns the "locator_set" column's value from the "Mcast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator_set's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator_set" member in vteprec_mcast_macs_local. */
const struct ovsdb_datum *
vteprec_mcast_macs_local_get_locator_set(const struct vteprec_mcast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_local_col_locator_set);
}

/* Returns the "logical_switch" column's value from the "Mcast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_switch's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "logical_switch" member in vteprec_mcast_macs_local. */
const struct ovsdb_datum *
vteprec_mcast_macs_local_get_logical_switch(const struct vteprec_mcast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_local_col_logical_switch);
}

/* Sets the "MAC" column from the "Mcast_Macs_Local" table in 'row' to
 * 'MAC'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_local_set_MAC(const struct vteprec_mcast_macs_local *row, const char *MAC)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, MAC);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_MAC], &datum);
}

/* Sets the "ipaddr" column from the "Mcast_Macs_Local" table in 'row' to
 * 'ipaddr'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_local_set_ipaddr(const struct vteprec_mcast_macs_local *row, const char *ipaddr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ipaddr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_IPADDR], &datum);
}

/* Sets the "locator_set" column from the "Mcast_Macs_Local" table in 'row' to
 * 'locator_set'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_local_set_locator_set(const struct vteprec_mcast_macs_local *row, const struct vteprec_physical_locator_set *locator_set)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator_set->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOCATOR_SET], &datum);
}

/* Sets the "logical_switch" column from the "Mcast_Macs_Local" table in 'row' to
 * 'logical_switch'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_local_set_logical_switch(const struct vteprec_mcast_macs_local *row, const struct vteprec_logical_switch *logical_switch)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_switch->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_COL_LOGICAL_SWITCH], &datum);
}

struct ovsdb_idl_column vteprec_mcast_macs_local_columns[VTEPREC_MCAST_MACS_LOCAL_N_COLUMNS];

static void
vteprec_mcast_macs_local_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_mcast_macs_local_col_MAC. */
    c = &vteprec_mcast_macs_local_col_MAC;
    c->name = "MAC";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_local_parse_MAC;
    c->unparse = vteprec_mcast_macs_local_unparse_MAC;

    /* Initialize vteprec_mcast_macs_local_col_ipaddr. */
    c = &vteprec_mcast_macs_local_col_ipaddr;
    c->name = "ipaddr";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_local_parse_ipaddr;
    c->unparse = vteprec_mcast_macs_local_unparse_ipaddr;

    /* Initialize vteprec_mcast_macs_local_col_locator_set. */
    c = &vteprec_mcast_macs_local_col_locator_set;
    c->name = "locator_set";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator_Set";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_local_parse_locator_set;
    c->unparse = vteprec_mcast_macs_local_unparse_locator_set;

    /* Initialize vteprec_mcast_macs_local_col_logical_switch. */
    c = &vteprec_mcast_macs_local_col_logical_switch;
    c->name = "logical_switch";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Switch";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_local_parse_logical_switch;
    c->unparse = vteprec_mcast_macs_local_unparse_logical_switch;
}

/* Mcast_Macs_Remote table. */

static void
vteprec_mcast_macs_remote_parse_MAC(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_remote *row = vteprec_mcast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->MAC = datum->keys[0].string;
    } else {
        row->MAC = "";
    }
}

static void
vteprec_mcast_macs_remote_parse_ipaddr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_remote *row = vteprec_mcast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipaddr = datum->keys[0].string;
    } else {
        row->ipaddr = "";
    }
}

static void
vteprec_mcast_macs_remote_parse_locator_set(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_remote *row = vteprec_mcast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator_set = vteprec_physical_locator_set_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET], &datum->keys[0].uuid));
    } else {
        row->locator_set = NULL;
    }
}

static void
vteprec_mcast_macs_remote_parse_logical_switch(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_mcast_macs_remote *row = vteprec_mcast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_switch = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->keys[0].uuid));
    } else {
        row->logical_switch = NULL;
    }
}

static void
vteprec_mcast_macs_remote_unparse_MAC(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_remote_unparse_ipaddr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_remote_unparse_locator_set(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_remote_unparse_logical_switch(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_mcast_macs_remote_init__(struct ovsdb_idl_row *row)
{
    vteprec_mcast_macs_remote_init(vteprec_mcast_macs_remote_cast(row));
}

/* Clears the contents of 'row' in table "Mcast_Macs_Remote". */
void
vteprec_mcast_macs_remote_init(struct vteprec_mcast_macs_remote *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Mcast_Macs_Remote" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE], uuid));
}

/* Returns a row in table "Mcast_Macs_Remote" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_first(const struct ovsdb_idl *idl)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_next(const struct vteprec_mcast_macs_remote *row)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_mcast_macs_remote_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE]);
}

unsigned int vteprec_mcast_macs_remote_row_get_seqno(const struct vteprec_mcast_macs_remote *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE]));
}

const struct vteprec_mcast_macs_remote
*vteprec_mcast_macs_remote_track_get_next(const struct vteprec_mcast_macs_remote *row)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Mcast_Macs_Remote".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_remote_delete(const struct vteprec_mcast_macs_remote *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Mcast_Macs_Remote" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_mcast_macs_remote *
vteprec_mcast_macs_remote_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_mcast_macs_remote_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_MCAST_MACS_REMOTE], NULL));
}

/* Causes the original contents of column "MAC" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "MAC" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "MAC" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "MAC" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_remote_insert()).
 *
 *   - If "MAC" has already been modified (with
 *     vteprec_mcast_macs_remote_set_MAC()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_remote_set_MAC() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_remote_verify_MAC(const struct vteprec_mcast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_MAC]);
}

/* Causes the original contents of column "ipaddr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipaddr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipaddr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipaddr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_remote_insert()).
 *
 *   - If "ipaddr" has already been modified (with
 *     vteprec_mcast_macs_remote_set_ipaddr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_remote_set_ipaddr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_remote_verify_ipaddr(const struct vteprec_mcast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_IPADDR]);
}

/* Causes the original contents of column "locator_set" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator_set" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator_set" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator_set" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_remote_insert()).
 *
 *   - If "locator_set" has already been modified (with
 *     vteprec_mcast_macs_remote_set_locator_set()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_remote_set_locator_set() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_remote_verify_locator_set(const struct vteprec_mcast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOCATOR_SET]);
}

/* Causes the original contents of column "logical_switch" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_switch" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_switch" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_switch" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_mcast_macs_remote_insert()).
 *
 *   - If "logical_switch" has already been modified (with
 *     vteprec_mcast_macs_remote_set_logical_switch()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_mcast_macs_remote_set_logical_switch() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_mcast_macs_remote_verify_logical_switch(const struct vteprec_mcast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOGICAL_SWITCH]);
}

/* Returns the "MAC" column's value from the "Mcast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes MAC's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "MAC" member in vteprec_mcast_macs_remote. */
const struct ovsdb_datum *
vteprec_mcast_macs_remote_get_MAC(const struct vteprec_mcast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_remote_col_MAC);
}

/* Returns the "ipaddr" column's value from the "Mcast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ipaddr's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipaddr" member in vteprec_mcast_macs_remote. */
const struct ovsdb_datum *
vteprec_mcast_macs_remote_get_ipaddr(const struct vteprec_mcast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_remote_col_ipaddr);
}

/* Returns the "locator_set" column's value from the "Mcast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator_set's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator_set" member in vteprec_mcast_macs_remote. */
const struct ovsdb_datum *
vteprec_mcast_macs_remote_get_locator_set(const struct vteprec_mcast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_remote_col_locator_set);
}

/* Returns the "logical_switch" column's value from the "Mcast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_switch's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "logical_switch" member in vteprec_mcast_macs_remote. */
const struct ovsdb_datum *
vteprec_mcast_macs_remote_get_logical_switch(const struct vteprec_mcast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_mcast_macs_remote_col_logical_switch);
}

/* Sets the "MAC" column from the "Mcast_Macs_Remote" table in 'row' to
 * 'MAC'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_remote_set_MAC(const struct vteprec_mcast_macs_remote *row, const char *MAC)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, MAC);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_MAC], &datum);
}

/* Sets the "ipaddr" column from the "Mcast_Macs_Remote" table in 'row' to
 * 'ipaddr'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_remote_set_ipaddr(const struct vteprec_mcast_macs_remote *row, const char *ipaddr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ipaddr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_IPADDR], &datum);
}

/* Sets the "locator_set" column from the "Mcast_Macs_Remote" table in 'row' to
 * 'locator_set'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_remote_set_locator_set(const struct vteprec_mcast_macs_remote *row, const struct vteprec_physical_locator_set *locator_set)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator_set->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOCATOR_SET], &datum);
}

/* Sets the "logical_switch" column from the "Mcast_Macs_Remote" table in 'row' to
 * 'logical_switch'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_mcast_macs_remote_set_logical_switch(const struct vteprec_mcast_macs_remote *row, const struct vteprec_logical_switch *logical_switch)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_switch->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_COL_LOGICAL_SWITCH], &datum);
}

struct ovsdb_idl_column vteprec_mcast_macs_remote_columns[VTEPREC_MCAST_MACS_REMOTE_N_COLUMNS];

static void
vteprec_mcast_macs_remote_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_mcast_macs_remote_col_MAC. */
    c = &vteprec_mcast_macs_remote_col_MAC;
    c->name = "MAC";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_remote_parse_MAC;
    c->unparse = vteprec_mcast_macs_remote_unparse_MAC;

    /* Initialize vteprec_mcast_macs_remote_col_ipaddr. */
    c = &vteprec_mcast_macs_remote_col_ipaddr;
    c->name = "ipaddr";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_remote_parse_ipaddr;
    c->unparse = vteprec_mcast_macs_remote_unparse_ipaddr;

    /* Initialize vteprec_mcast_macs_remote_col_locator_set. */
    c = &vteprec_mcast_macs_remote_col_locator_set;
    c->name = "locator_set";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator_Set";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_remote_parse_locator_set;
    c->unparse = vteprec_mcast_macs_remote_unparse_locator_set;

    /* Initialize vteprec_mcast_macs_remote_col_logical_switch. */
    c = &vteprec_mcast_macs_remote_col_logical_switch;
    c->name = "logical_switch";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Switch";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_mcast_macs_remote_parse_logical_switch;
    c->unparse = vteprec_mcast_macs_remote_unparse_logical_switch;
}

/* Physical_Locator table. */

static void
vteprec_physical_locator_parse_dst_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_locator *row = vteprec_physical_locator_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->dst_ip = datum->keys[0].string;
    } else {
        row->dst_ip = "";
    }
}

static void
vteprec_physical_locator_parse_encapsulation_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_locator *row = vteprec_physical_locator_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->encapsulation_type = datum->keys[0].string;
    } else {
        row->encapsulation_type = "";
    }
}

static void
vteprec_physical_locator_unparse_dst_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_locator_unparse_encapsulation_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_locator_init__(struct ovsdb_idl_row *row)
{
    vteprec_physical_locator_init(vteprec_physical_locator_cast(row));
}

/* Clears the contents of 'row' in table "Physical_Locator". */
void
vteprec_physical_locator_init(struct vteprec_physical_locator *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Physical_Locator" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_physical_locator *
vteprec_physical_locator_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_physical_locator_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], uuid));
}

/* Returns a row in table "Physical_Locator" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_physical_locator *
vteprec_physical_locator_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_locator_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_physical_locator *
vteprec_physical_locator_next(const struct vteprec_physical_locator *row)
{
    return vteprec_physical_locator_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_physical_locator_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR]);
}

unsigned int vteprec_physical_locator_row_get_seqno(const struct vteprec_physical_locator *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_physical_locator *
vteprec_physical_locator_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_locator_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR]));
}

const struct vteprec_physical_locator
*vteprec_physical_locator_track_get_next(const struct vteprec_physical_locator *row)
{
    return vteprec_physical_locator_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Physical_Locator".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_locator_delete(const struct vteprec_physical_locator *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Physical_Locator" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_physical_locator *
vteprec_physical_locator_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_physical_locator_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], NULL));
}

/* Causes the original contents of column "dst_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dst_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dst_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dst_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_locator_insert()).
 *
 *   - If "dst_ip" has already been modified (with
 *     vteprec_physical_locator_set_dst_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_locator_set_dst_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_locator_verify_dst_ip(const struct vteprec_physical_locator *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_DST_IP]);
}

/* Causes the original contents of column "encapsulation_type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "encapsulation_type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "encapsulation_type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "encapsulation_type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_locator_insert()).
 *
 *   - If "encapsulation_type" has already been modified (with
 *     vteprec_physical_locator_set_encapsulation_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_locator_set_encapsulation_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_locator_verify_encapsulation_type(const struct vteprec_physical_locator *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_ENCAPSULATION_TYPE]);
}

/* Returns the "dst_ip" column's value from the "Physical_Locator" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes dst_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dst_ip" member in vteprec_physical_locator. */
const struct ovsdb_datum *
vteprec_physical_locator_get_dst_ip(const struct vteprec_physical_locator *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_locator_col_dst_ip);
}

/* Returns the "encapsulation_type" column's value from the "Physical_Locator" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes encapsulation_type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "encapsulation_type" member in vteprec_physical_locator. */
const struct ovsdb_datum *
vteprec_physical_locator_get_encapsulation_type(const struct vteprec_physical_locator *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_locator_col_encapsulation_type);
}

/* Sets the "dst_ip" column from the "Physical_Locator" table in 'row' to
 * 'dst_ip'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_locator_set_dst_ip(const struct vteprec_physical_locator *row, const char *dst_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, dst_ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_DST_IP], &datum);
}

/* Sets the "encapsulation_type" column from the "Physical_Locator" table in 'row' to
 * 'encapsulation_type'.
 *
 * Argument constraints: must be "vxlan_over_ipv4"
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_locator_set_encapsulation_type(const struct vteprec_physical_locator *row, const char *encapsulation_type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, encapsulation_type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_COL_ENCAPSULATION_TYPE], &datum);
}

struct ovsdb_idl_column vteprec_physical_locator_columns[VTEPREC_PHYSICAL_LOCATOR_N_COLUMNS];

static void
vteprec_physical_locator_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_physical_locator_col_dst_ip. */
    c = &vteprec_physical_locator_col_dst_ip;
    c->name = "dst_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = false;
    c->parse = vteprec_physical_locator_parse_dst_ip;
    c->unparse = vteprec_physical_locator_unparse_dst_ip;

    /* Initialize vteprec_physical_locator_col_encapsulation_type. */
    c = &vteprec_physical_locator_col_encapsulation_type;
    c->name = "encapsulation_type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 1;
    c->type.key.enum_->keys = xmalloc(1 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("vxlan_over_ipv4");
    c->type.key.enum_->values = NULL;
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = false;
    c->parse = vteprec_physical_locator_parse_encapsulation_type;
    c->unparse = vteprec_physical_locator_unparse_encapsulation_type;
}

/* Physical_Locator_Set table. */

static void
vteprec_physical_locator_set_parse_locators(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_locator_set *row = vteprec_physical_locator_set_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->locators = NULL;
    row->n_locators = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_physical_locator *keyRow = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_locators) {
                row->locators = xmalloc(datum->n * sizeof *row->locators);
            }
            row->locators[row->n_locators] = keyRow;
            row->n_locators++;
        }
    }
}

static void
vteprec_physical_locator_set_unparse_locators(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_locator_set *row = vteprec_physical_locator_set_cast(row_);

    ovs_assert(inited);
    free(row->locators);
}

static void
vteprec_physical_locator_set_init__(struct ovsdb_idl_row *row)
{
    vteprec_physical_locator_set_init(vteprec_physical_locator_set_cast(row));
}

/* Clears the contents of 'row' in table "Physical_Locator_Set". */
void
vteprec_physical_locator_set_init(struct vteprec_physical_locator_set *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Physical_Locator_Set" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_physical_locator_set *
vteprec_physical_locator_set_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET], uuid));
}

/* Returns a row in table "Physical_Locator_Set" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_physical_locator_set *
vteprec_physical_locator_set_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_physical_locator_set *
vteprec_physical_locator_set_next(const struct vteprec_physical_locator_set *row)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_physical_locator_set_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET]);
}

unsigned int vteprec_physical_locator_set_row_get_seqno(const struct vteprec_physical_locator_set *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_physical_locator_set *
vteprec_physical_locator_set_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET]));
}

const struct vteprec_physical_locator_set
*vteprec_physical_locator_set_track_get_next(const struct vteprec_physical_locator_set *row)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Physical_Locator_Set".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_locator_set_delete(const struct vteprec_physical_locator_set *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Physical_Locator_Set" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_physical_locator_set *
vteprec_physical_locator_set_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_physical_locator_set_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR_SET], NULL));
}

/* Causes the original contents of column "locators" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locators" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locators" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locators" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_locator_set_insert()).
 *
 *   - If "locators" has already been modified (with
 *     vteprec_physical_locator_set_set_locators()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_locator_set_set_locators() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_locator_set_verify_locators(const struct vteprec_physical_locator_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_locator_set_columns[VTEPREC_PHYSICAL_LOCATOR_SET_COL_LOCATORS]);
}

/* Returns the "locators" column's value from the "Physical_Locator_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locators's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locators" member in vteprec_physical_locator_set. */
const struct ovsdb_datum *
vteprec_physical_locator_set_get_locators(const struct vteprec_physical_locator_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_locator_set_col_locators);
}

/* Sets the "locators" column from the "Physical_Locator_Set" table in 'row' to
 * the 'locators' set with 'n_locators' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_locator_set_set_locators(const struct vteprec_physical_locator_set *row, struct vteprec_physical_locator **locators, size_t n_locators)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_locators;
    datum.keys = n_locators ? xmalloc(n_locators * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_locators; i++) {
        datum.keys[i].uuid = locators[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_locator_set_columns[VTEPREC_PHYSICAL_LOCATOR_SET_COL_LOCATORS], &datum);
}

struct ovsdb_idl_column vteprec_physical_locator_set_columns[VTEPREC_PHYSICAL_LOCATOR_SET_N_COLUMNS];

static void
vteprec_physical_locator_set_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_physical_locator_set_col_locators. */
    c = &vteprec_physical_locator_set_col_locators;
    c->name = "locators";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = false;
    c->parse = vteprec_physical_locator_set_parse_locators;
    c->unparse = vteprec_physical_locator_set_unparse_locators;
}

/* Physical_Port table. */

static void
vteprec_physical_port_parse_acl_bindings(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_acl_bindings = NULL;
    row->value_acl_bindings = NULL;
    row->n_acl_bindings = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_acl *valueRow = vteprec_acl_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_ACL], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_acl_bindings) {
                row->key_acl_bindings = xmalloc(datum->n * sizeof *row->key_acl_bindings);
                row->value_acl_bindings = xmalloc(datum->n * sizeof *row->value_acl_bindings);
            }
            row->key_acl_bindings[row->n_acl_bindings] = datum->keys[i].integer;
            row->value_acl_bindings[row->n_acl_bindings] = valueRow;
            row->n_acl_bindings++;
        }
    }
}

static void
vteprec_physical_port_parse_description(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->description = datum->keys[0].string;
    } else {
        row->description = "";
    }
}

static void
vteprec_physical_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
vteprec_physical_port_parse_port_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->port_fault_status = NULL;
    row->n_port_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_port_fault_status) {
            row->port_fault_status = xmalloc(datum->n * sizeof *row->port_fault_status);
        }
        row->port_fault_status[row->n_port_fault_status] = datum->keys[i].string;
        row->n_port_fault_status++;
    }
}

static void
vteprec_physical_port_parse_vlan_bindings(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_vlan_bindings = NULL;
    row->value_vlan_bindings = NULL;
    row->n_vlan_bindings = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_logical_switch *valueRow = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_vlan_bindings) {
                row->key_vlan_bindings = xmalloc(datum->n * sizeof *row->key_vlan_bindings);
                row->value_vlan_bindings = xmalloc(datum->n * sizeof *row->value_vlan_bindings);
            }
            row->key_vlan_bindings[row->n_vlan_bindings] = datum->keys[i].integer;
            row->value_vlan_bindings[row->n_vlan_bindings] = valueRow;
            row->n_vlan_bindings++;
        }
    }
}

static void
vteprec_physical_port_parse_vlan_stats(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_vlan_stats = NULL;
    row->value_vlan_stats = NULL;
    row->n_vlan_stats = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_logical_binding_stats *valueRow = vteprec_logical_binding_stats_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_BINDING_STATS], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_vlan_stats) {
                row->key_vlan_stats = xmalloc(datum->n * sizeof *row->key_vlan_stats);
                row->value_vlan_stats = xmalloc(datum->n * sizeof *row->value_vlan_stats);
            }
            row->key_vlan_stats[row->n_vlan_stats] = datum->keys[i].integer;
            row->value_vlan_stats[row->n_vlan_stats] = valueRow;
            row->n_vlan_stats++;
        }
    }
}

static void
vteprec_physical_port_unparse_acl_bindings(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    free(row->key_acl_bindings);
    free(row->value_acl_bindings);
}

static void
vteprec_physical_port_unparse_description(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_port_unparse_port_fault_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    free(row->port_fault_status);
}

static void
vteprec_physical_port_unparse_vlan_bindings(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    free(row->key_vlan_bindings);
    free(row->value_vlan_bindings);
}

static void
vteprec_physical_port_unparse_vlan_stats(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_port *row = vteprec_physical_port_cast(row_);

    ovs_assert(inited);
    free(row->key_vlan_stats);
    free(row->value_vlan_stats);
}

static void
vteprec_physical_port_init__(struct ovsdb_idl_row *row)
{
    vteprec_physical_port_init(vteprec_physical_port_cast(row));
}

/* Clears the contents of 'row' in table "Physical_Port". */
void
vteprec_physical_port_init(struct vteprec_physical_port *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Physical_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_physical_port *
vteprec_physical_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_physical_port_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT], uuid));
}

/* Returns a row in table "Physical_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_physical_port *
vteprec_physical_port_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_port_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_physical_port *
vteprec_physical_port_next(const struct vteprec_physical_port *row)
{
    return vteprec_physical_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_physical_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT]);
}

unsigned int vteprec_physical_port_row_get_seqno(const struct vteprec_physical_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_physical_port *
vteprec_physical_port_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_port_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT]));
}

const struct vteprec_physical_port
*vteprec_physical_port_track_get_next(const struct vteprec_physical_port *row)
{
    return vteprec_physical_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Physical_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_delete(const struct vteprec_physical_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Physical_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_physical_port *
vteprec_physical_port_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_physical_port_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT], NULL));
}

/* Causes the original contents of column "acl_bindings" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acl_bindings" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acl_bindings" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acl_bindings" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "acl_bindings" has already been modified (with
 *     vteprec_physical_port_set_acl_bindings()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_acl_bindings() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_acl_bindings(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_ACL_BINDINGS]);
}

/* Causes the original contents of column "description" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "description" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "description" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "description" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "description" has already been modified (with
 *     vteprec_physical_port_set_description()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_description() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_description(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_DESCRIPTION]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     vteprec_physical_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_name(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_NAME]);
}

/* Causes the original contents of column "port_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "port_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "port_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "port_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "port_fault_status" has already been modified (with
 *     vteprec_physical_port_set_port_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_port_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_port_fault_status(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_PORT_FAULT_STATUS]);
}

/* Causes the original contents of column "vlan_bindings" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vlan_bindings" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vlan_bindings" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vlan_bindings" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "vlan_bindings" has already been modified (with
 *     vteprec_physical_port_set_vlan_bindings()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_vlan_bindings() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_vlan_bindings(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_BINDINGS]);
}

/* Causes the original contents of column "vlan_stats" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vlan_stats" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vlan_stats" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vlan_stats" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_port_insert()).
 *
 *   - If "vlan_stats" has already been modified (with
 *     vteprec_physical_port_set_vlan_stats()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_port_set_vlan_stats() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_port_verify_vlan_stats(const struct vteprec_physical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_STATS]);
}

/* Returns the "acl_bindings" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acl_bindings's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "acl_bindings" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_acl_bindings(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_acl_bindings);
}

/* Returns the "description" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes description's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "description" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_description(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_description);
}

/* Returns the "name" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_name(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_name);
}

/* Returns the "port_fault_status" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes port_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "port_fault_status" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_port_fault_status(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_port_fault_status);
}

/* Returns the "vlan_bindings" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes vlan_bindings's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "vlan_bindings" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_vlan_bindings(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_vlan_bindings);
}

/* Returns the "vlan_stats" column's value from the "Physical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes vlan_stats's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "vlan_stats" member in vteprec_physical_port. */
const struct ovsdb_datum *
vteprec_physical_port_get_vlan_stats(const struct vteprec_physical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_port_col_vlan_stats);
}

/* Sets the "acl_bindings" column from the "Physical_Port" table in 'row' to
 * the map with keys 'key_acl_bindings' and values 'value_acl_bindings'
 * with 'n_acl_bindings' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_acl_bindings(const struct vteprec_physical_port *row, const int64_t *key_acl_bindings, struct vteprec_acl **value_acl_bindings, size_t n_acl_bindings)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acl_bindings;
    datum.keys = n_acl_bindings ? xmalloc(n_acl_bindings * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_acl_bindings * sizeof *datum.values);
    for (i = 0; i < n_acl_bindings; i++) {
        datum.keys[i].integer = key_acl_bindings[i];
        datum.values[i].uuid = value_acl_bindings[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_ACL_BINDINGS], &datum);
}

/* Sets the "description" column from the "Physical_Port" table in 'row' to
 * 'description'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_description(const struct vteprec_physical_port *row, const char *description)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, description);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_DESCRIPTION], &datum);
}

/* Sets the "name" column from the "Physical_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_name(const struct vteprec_physical_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_NAME], &datum);
}

/* Sets the "port_fault_status" column from the "Physical_Port" table in 'row' to
 * the 'port_fault_status' set with 'n_port_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_port_fault_status(const struct vteprec_physical_port *row, const char **port_fault_status, size_t n_port_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_port_fault_status;
    datum.keys = n_port_fault_status ? xmalloc(n_port_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_fault_status; i++) {
        datum.keys[i].string = xstrdup(port_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_PORT_FAULT_STATUS], &datum);
}

/* Sets the "vlan_bindings" column from the "Physical_Port" table in 'row' to
 * the map with keys 'key_vlan_bindings' and values 'value_vlan_bindings'
 * with 'n_vlan_bindings' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_vlan_bindings(const struct vteprec_physical_port *row, const int64_t *key_vlan_bindings, struct vteprec_logical_switch **value_vlan_bindings, size_t n_vlan_bindings)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vlan_bindings;
    datum.keys = n_vlan_bindings ? xmalloc(n_vlan_bindings * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_vlan_bindings * sizeof *datum.values);
    for (i = 0; i < n_vlan_bindings; i++) {
        datum.keys[i].integer = key_vlan_bindings[i];
        datum.values[i].uuid = value_vlan_bindings[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_BINDINGS], &datum);
}

/* Sets the "vlan_stats" column from the "Physical_Port" table in 'row' to
 * the map with keys 'key_vlan_stats' and values 'value_vlan_stats'
 * with 'n_vlan_stats' entries.
 *
 * Argument constraints: key in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_port_set_vlan_stats(const struct vteprec_physical_port *row, const int64_t *key_vlan_stats, struct vteprec_logical_binding_stats **value_vlan_stats, size_t n_vlan_stats)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vlan_stats;
    datum.keys = n_vlan_stats ? xmalloc(n_vlan_stats * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_vlan_stats * sizeof *datum.values);
    for (i = 0; i < n_vlan_stats; i++) {
        datum.keys[i].integer = key_vlan_stats[i];
        datum.values[i].uuid = value_vlan_stats[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_COL_VLAN_STATS], &datum);
}

struct ovsdb_idl_column vteprec_physical_port_columns[VTEPREC_PHYSICAL_PORT_N_COLUMNS];

static void
vteprec_physical_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_physical_port_col_acl_bindings. */
    c = &vteprec_physical_port_col_acl_bindings;
    c->name = "acl_bindings";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "ACL";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_acl_bindings;
    c->unparse = vteprec_physical_port_unparse_acl_bindings;

    /* Initialize vteprec_physical_port_col_description. */
    c = &vteprec_physical_port_col_description;
    c->name = "description";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_description;
    c->unparse = vteprec_physical_port_unparse_description;

    /* Initialize vteprec_physical_port_col_name. */
    c = &vteprec_physical_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_name;
    c->unparse = vteprec_physical_port_unparse_name;

    /* Initialize vteprec_physical_port_col_port_fault_status. */
    c = &vteprec_physical_port_col_port_fault_status;
    c->name = "port_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_port_fault_status;
    c->unparse = vteprec_physical_port_unparse_port_fault_status;

    /* Initialize vteprec_physical_port_col_vlan_bindings. */
    c = &vteprec_physical_port_col_vlan_bindings;
    c->name = "vlan_bindings";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "Logical_Switch";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_vlan_bindings;
    c->unparse = vteprec_physical_port_unparse_vlan_bindings;

    /* Initialize vteprec_physical_port_col_vlan_stats. */
    c = &vteprec_physical_port_col_vlan_stats;
    c->name = "vlan_stats";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "Logical_Binding_Stats";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_port_parse_vlan_stats;
    c->unparse = vteprec_physical_port_unparse_vlan_stats;
}

/* Physical_Switch table. */

static void
vteprec_physical_switch_parse_description(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->description = datum->keys[0].string;
    } else {
        row->description = "";
    }
}

static void
vteprec_physical_switch_parse_management_ips(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->management_ips = NULL;
    row->n_management_ips = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_management_ips) {
            row->management_ips = xmalloc(datum->n * sizeof *row->management_ips);
        }
        row->management_ips[row->n_management_ips] = datum->keys[i].string;
        row->n_management_ips++;
    }
}

static void
vteprec_physical_switch_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
vteprec_physical_switch_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_physical_port *keyRow = vteprec_physical_port_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_ports) {
                row->ports = xmalloc(datum->n * sizeof *row->ports);
            }
            row->ports[row->n_ports] = keyRow;
            row->n_ports++;
        }
    }
}

static void
vteprec_physical_switch_parse_switch_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->switch_fault_status = NULL;
    row->n_switch_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_switch_fault_status) {
            row->switch_fault_status = xmalloc(datum->n * sizeof *row->switch_fault_status);
        }
        row->switch_fault_status[row->n_switch_fault_status] = datum->keys[i].string;
        row->n_switch_fault_status++;
    }
}

static void
vteprec_physical_switch_parse_tunnel_ips(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->tunnel_ips = NULL;
    row->n_tunnel_ips = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_tunnel_ips) {
            row->tunnel_ips = xmalloc(datum->n * sizeof *row->tunnel_ips);
        }
        row->tunnel_ips[row->n_tunnel_ips] = datum->keys[i].string;
        row->n_tunnel_ips++;
    }
}

static void
vteprec_physical_switch_parse_tunnels(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->tunnels = NULL;
    row->n_tunnels = 0;
    for (i = 0; i < datum->n; i++) {
        struct vteprec_tunnel *keyRow = vteprec_tunnel_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_tunnels) {
                row->tunnels = xmalloc(datum->n * sizeof *row->tunnels);
            }
            row->tunnels[row->n_tunnels] = keyRow;
            row->n_tunnels++;
        }
    }
}

static void
vteprec_physical_switch_unparse_description(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_switch_unparse_management_ips(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    free(row->management_ips);
}

static void
vteprec_physical_switch_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_physical_switch_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
vteprec_physical_switch_unparse_switch_fault_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    free(row->switch_fault_status);
}

static void
vteprec_physical_switch_unparse_tunnel_ips(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    free(row->tunnel_ips);
}

static void
vteprec_physical_switch_unparse_tunnels(struct ovsdb_idl_row *row_)
{
    struct vteprec_physical_switch *row = vteprec_physical_switch_cast(row_);

    ovs_assert(inited);
    free(row->tunnels);
}

static void
vteprec_physical_switch_init__(struct ovsdb_idl_row *row)
{
    vteprec_physical_switch_init(vteprec_physical_switch_cast(row));
}

/* Clears the contents of 'row' in table "Physical_Switch". */
void
vteprec_physical_switch_init(struct vteprec_physical_switch *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Physical_Switch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_physical_switch *
vteprec_physical_switch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_physical_switch_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH], uuid));
}

/* Returns a row in table "Physical_Switch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_physical_switch *
vteprec_physical_switch_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_switch_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_physical_switch *
vteprec_physical_switch_next(const struct vteprec_physical_switch *row)
{
    return vteprec_physical_switch_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_physical_switch_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH]);
}

unsigned int vteprec_physical_switch_row_get_seqno(const struct vteprec_physical_switch *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_physical_switch *
vteprec_physical_switch_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_physical_switch_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH]));
}

const struct vteprec_physical_switch
*vteprec_physical_switch_track_get_next(const struct vteprec_physical_switch *row)
{
    return vteprec_physical_switch_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Physical_Switch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_delete(const struct vteprec_physical_switch *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Physical_Switch" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_physical_switch *
vteprec_physical_switch_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_physical_switch_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_SWITCH], NULL));
}

/* Causes the original contents of column "description" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "description" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "description" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "description" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "description" has already been modified (with
 *     vteprec_physical_switch_set_description()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_description() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_description(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_DESCRIPTION]);
}

/* Causes the original contents of column "management_ips" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "management_ips" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "management_ips" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "management_ips" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "management_ips" has already been modified (with
 *     vteprec_physical_switch_set_management_ips()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_management_ips() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_management_ips(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_MANAGEMENT_IPS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "name" has already been modified (with
 *     vteprec_physical_switch_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_name(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_NAME]);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "ports" has already been modified (with
 *     vteprec_physical_switch_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_ports(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_PORTS]);
}

/* Causes the original contents of column "switch_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "switch_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "switch_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "switch_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "switch_fault_status" has already been modified (with
 *     vteprec_physical_switch_set_switch_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_switch_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_switch_fault_status(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_SWITCH_FAULT_STATUS]);
}

/* Causes the original contents of column "tunnel_ips" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnel_ips" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnel_ips" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnel_ips" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "tunnel_ips" has already been modified (with
 *     vteprec_physical_switch_set_tunnel_ips()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_tunnel_ips() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_tunnel_ips(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNEL_IPS]);
}

/* Causes the original contents of column "tunnels" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tunnels" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tunnels" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tunnels" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_physical_switch_insert()).
 *
 *   - If "tunnels" has already been modified (with
 *     vteprec_physical_switch_set_tunnels()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_physical_switch_set_tunnels() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_physical_switch_verify_tunnels(const struct vteprec_physical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNELS]);
}

/* Returns the "description" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes description's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "description" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_description(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_description);
}

/* Returns the "management_ips" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes management_ips's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "management_ips" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_management_ips(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_management_ips);
}

/* Returns the "name" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_name(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_name);
}

/* Returns the "ports" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ports" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_ports(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_ports);
}

/* Returns the "switch_fault_status" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes switch_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "switch_fault_status" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_switch_fault_status(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_switch_fault_status);
}

/* Returns the "tunnel_ips" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes tunnel_ips's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tunnel_ips" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_tunnel_ips(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_tunnel_ips);
}

/* Returns the "tunnels" column's value from the "Physical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes tunnels's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tunnels" member in vteprec_physical_switch. */
const struct ovsdb_datum *
vteprec_physical_switch_get_tunnels(const struct vteprec_physical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_physical_switch_col_tunnels);
}

/* Sets the "description" column from the "Physical_Switch" table in 'row' to
 * 'description'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_description(const struct vteprec_physical_switch *row, const char *description)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, description);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_DESCRIPTION], &datum);
}

/* Sets the "management_ips" column from the "Physical_Switch" table in 'row' to
 * the 'management_ips' set with 'n_management_ips' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_management_ips(const struct vteprec_physical_switch *row, const char **management_ips, size_t n_management_ips)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_management_ips;
    datum.keys = n_management_ips ? xmalloc(n_management_ips * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_management_ips; i++) {
        datum.keys[i].string = xstrdup(management_ips[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_MANAGEMENT_IPS], &datum);
}

/* Sets the "name" column from the "Physical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_name(const struct vteprec_physical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_NAME], &datum);
}

/* Sets the "ports" column from the "Physical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_ports(const struct vteprec_physical_switch *row, struct vteprec_physical_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_PORTS], &datum);
}

/* Sets the "switch_fault_status" column from the "Physical_Switch" table in 'row' to
 * the 'switch_fault_status' set with 'n_switch_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_switch_fault_status(const struct vteprec_physical_switch *row, const char **switch_fault_status, size_t n_switch_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_switch_fault_status;
    datum.keys = n_switch_fault_status ? xmalloc(n_switch_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_switch_fault_status; i++) {
        datum.keys[i].string = xstrdup(switch_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_SWITCH_FAULT_STATUS], &datum);
}

/* Sets the "tunnel_ips" column from the "Physical_Switch" table in 'row' to
 * the 'tunnel_ips' set with 'n_tunnel_ips' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_tunnel_ips(const struct vteprec_physical_switch *row, const char **tunnel_ips, size_t n_tunnel_ips)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_tunnel_ips;
    datum.keys = n_tunnel_ips ? xmalloc(n_tunnel_ips * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_tunnel_ips; i++) {
        datum.keys[i].string = xstrdup(tunnel_ips[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNEL_IPS], &datum);
}

/* Sets the "tunnels" column from the "Physical_Switch" table in 'row' to
 * the 'tunnels' set with 'n_tunnels' entries.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_physical_switch_set_tunnels(const struct vteprec_physical_switch *row, struct vteprec_tunnel **tunnels, size_t n_tunnels)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_tunnels;
    datum.keys = n_tunnels ? xmalloc(n_tunnels * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_tunnels; i++) {
        datum.keys[i].uuid = tunnels[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_COL_TUNNELS], &datum);
}

struct ovsdb_idl_column vteprec_physical_switch_columns[VTEPREC_PHYSICAL_SWITCH_N_COLUMNS];

static void
vteprec_physical_switch_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_physical_switch_col_description. */
    c = &vteprec_physical_switch_col_description;
    c->name = "description";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_description;
    c->unparse = vteprec_physical_switch_unparse_description;

    /* Initialize vteprec_physical_switch_col_management_ips. */
    c = &vteprec_physical_switch_col_management_ips;
    c->name = "management_ips";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_management_ips;
    c->unparse = vteprec_physical_switch_unparse_management_ips;

    /* Initialize vteprec_physical_switch_col_name. */
    c = &vteprec_physical_switch_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_name;
    c->unparse = vteprec_physical_switch_unparse_name;

    /* Initialize vteprec_physical_switch_col_ports. */
    c = &vteprec_physical_switch_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_ports;
    c->unparse = vteprec_physical_switch_unparse_ports;

    /* Initialize vteprec_physical_switch_col_switch_fault_status. */
    c = &vteprec_physical_switch_col_switch_fault_status;
    c->name = "switch_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_switch_fault_status;
    c->unparse = vteprec_physical_switch_unparse_switch_fault_status;

    /* Initialize vteprec_physical_switch_col_tunnel_ips. */
    c = &vteprec_physical_switch_col_tunnel_ips;
    c->name = "tunnel_ips";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_tunnel_ips;
    c->unparse = vteprec_physical_switch_unparse_tunnel_ips;

    /* Initialize vteprec_physical_switch_col_tunnels. */
    c = &vteprec_physical_switch_col_tunnels;
    c->name = "tunnels";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Tunnel";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_physical_switch_parse_tunnels;
    c->unparse = vteprec_physical_switch_unparse_tunnels;
}

/* Tunnel table. */

static void
vteprec_tunnel_parse_bfd_config_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd_config_local);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd_config_local,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_tunnel_parse_bfd_config_remote(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd_config_remote);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd_config_remote,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_tunnel_parse_bfd_params(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd_params);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd_params,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_tunnel_parse_bfd_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd_status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd_status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
vteprec_tunnel_parse_local(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->local = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->local = NULL;
    }
}

static void
vteprec_tunnel_parse_remote(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->remote = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->remote = NULL;
    }
}

static void
vteprec_tunnel_unparse_bfd_config_local(struct ovsdb_idl_row *row_)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd_config_local);
}

static void
vteprec_tunnel_unparse_bfd_config_remote(struct ovsdb_idl_row *row_)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd_config_remote);
}

static void
vteprec_tunnel_unparse_bfd_params(struct ovsdb_idl_row *row_)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd_params);
}

static void
vteprec_tunnel_unparse_bfd_status(struct ovsdb_idl_row *row_)
{
    struct vteprec_tunnel *row = vteprec_tunnel_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd_status);
}

static void
vteprec_tunnel_unparse_local(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_tunnel_unparse_remote(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_tunnel_init__(struct ovsdb_idl_row *row)
{
    vteprec_tunnel_init(vteprec_tunnel_cast(row));
}

/* Clears the contents of 'row' in table "Tunnel". */
void
vteprec_tunnel_init(struct vteprec_tunnel *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->bfd_config_local);
    smap_init(&row->bfd_config_remote);
    smap_init(&row->bfd_params);
    smap_init(&row->bfd_status);
}

/* Searches table "Tunnel" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_tunnel *
vteprec_tunnel_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_tunnel_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL], uuid));
}

/* Returns a row in table "Tunnel" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_tunnel *
vteprec_tunnel_first(const struct ovsdb_idl *idl)
{
    return vteprec_tunnel_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_tunnel *
vteprec_tunnel_next(const struct vteprec_tunnel *row)
{
    return vteprec_tunnel_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_tunnel_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL]);
}

unsigned int vteprec_tunnel_row_get_seqno(const struct vteprec_tunnel *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_tunnel *
vteprec_tunnel_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_tunnel_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL]));
}

const struct vteprec_tunnel
*vteprec_tunnel_track_get_next(const struct vteprec_tunnel *row)
{
    return vteprec_tunnel_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Tunnel".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_delete(const struct vteprec_tunnel *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Tunnel" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_tunnel *
vteprec_tunnel_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_tunnel_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_TUNNEL], NULL));
}

/* Causes the original contents of column "bfd_config_local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd_config_local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd_config_local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd_config_local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "bfd_config_local" has already been modified (with
 *     vteprec_tunnel_set_bfd_config_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_bfd_config_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_bfd_config_local(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_LOCAL]);
}

/* Causes the original contents of column "bfd_config_remote" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd_config_remote" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd_config_remote" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd_config_remote" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "bfd_config_remote" has already been modified (with
 *     vteprec_tunnel_set_bfd_config_remote()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_bfd_config_remote() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_bfd_config_remote(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_REMOTE]);
}

/* Causes the original contents of column "bfd_params" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd_params" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd_params" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd_params" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "bfd_params" has already been modified (with
 *     vteprec_tunnel_set_bfd_params()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_bfd_params() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_bfd_params(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_PARAMS]);
}

/* Causes the original contents of column "bfd_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "bfd_status" has already been modified (with
 *     vteprec_tunnel_set_bfd_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_bfd_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_bfd_status(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_STATUS]);
}

/* Causes the original contents of column "local" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "local" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "local" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "local" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "local" has already been modified (with
 *     vteprec_tunnel_set_local()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_local() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_local(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_LOCAL]);
}

/* Causes the original contents of column "remote" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "remote" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "remote" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "remote" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_tunnel_insert()).
 *
 *   - If "remote" has already been modified (with
 *     vteprec_tunnel_set_remote()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_tunnel_set_remote() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_tunnel_verify_remote(const struct vteprec_tunnel *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_REMOTE]);
}

/* Returns the "bfd_config_local" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd_config_local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd_config_local" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_bfd_config_local(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_bfd_config_local);
}

/* Returns the "bfd_config_remote" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd_config_remote's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd_config_remote" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_bfd_config_remote(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_bfd_config_remote);
}

/* Returns the "bfd_params" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd_params's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd_params" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_bfd_params(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_bfd_params);
}

/* Returns the "bfd_status" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd_status" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_bfd_status(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_bfd_status);
}

/* Returns the "local" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes local's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "local" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_local(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_local);
}

/* Returns the "remote" column's value from the "Tunnel" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes remote's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "remote" member in vteprec_tunnel. */
const struct ovsdb_datum *
vteprec_tunnel_get_remote(const struct vteprec_tunnel *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_tunnel_col_remote);
}

/* Sets the "bfd_config_local" column's value from the "Tunnel" table in 'row'
 * to 'bfd_config_local'.
 *
 * The caller retains ownership of 'bfd_config_local' and everything in it. */
void
vteprec_tunnel_set_bfd_config_local(const struct vteprec_tunnel *row, const struct smap *bfd_config_local)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd_config_local) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd_config_local);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd_config_local) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_LOCAL],
                        &datum);
}


/* Sets the "bfd_config_remote" column's value from the "Tunnel" table in 'row'
 * to 'bfd_config_remote'.
 *
 * The caller retains ownership of 'bfd_config_remote' and everything in it. */
void
vteprec_tunnel_set_bfd_config_remote(const struct vteprec_tunnel *row, const struct smap *bfd_config_remote)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd_config_remote) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd_config_remote);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd_config_remote) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_CONFIG_REMOTE],
                        &datum);
}


/* Sets the "bfd_params" column's value from the "Tunnel" table in 'row'
 * to 'bfd_params'.
 *
 * The caller retains ownership of 'bfd_params' and everything in it. */
void
vteprec_tunnel_set_bfd_params(const struct vteprec_tunnel *row, const struct smap *bfd_params)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd_params) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd_params);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd_params) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_PARAMS],
                        &datum);
}


/* Sets the "bfd_status" column's value from the "Tunnel" table in 'row'
 * to 'bfd_status'.
 *
 * The caller retains ownership of 'bfd_status' and everything in it. */
void
vteprec_tunnel_set_bfd_status(const struct vteprec_tunnel *row, const struct smap *bfd_status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd_status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd_status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd_status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_BFD_STATUS],
                        &datum);
}


/* Sets the "local" column from the "Tunnel" table in 'row' to
 * 'local'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_tunnel_set_local(const struct vteprec_tunnel *row, const struct vteprec_physical_locator *local)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = local->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_LOCAL], &datum);
}

/* Sets the "remote" column from the "Tunnel" table in 'row' to
 * 'remote'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_tunnel_set_remote(const struct vteprec_tunnel *row, const struct vteprec_physical_locator *remote)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = remote->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_tunnel_columns[VTEPREC_TUNNEL_COL_REMOTE], &datum);
}

struct ovsdb_idl_column vteprec_tunnel_columns[VTEPREC_TUNNEL_N_COLUMNS];

static void
vteprec_tunnel_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_tunnel_col_bfd_config_local. */
    c = &vteprec_tunnel_col_bfd_config_local;
    c->name = "bfd_config_local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_bfd_config_local;
    c->unparse = vteprec_tunnel_unparse_bfd_config_local;

    /* Initialize vteprec_tunnel_col_bfd_config_remote. */
    c = &vteprec_tunnel_col_bfd_config_remote;
    c->name = "bfd_config_remote";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_bfd_config_remote;
    c->unparse = vteprec_tunnel_unparse_bfd_config_remote;

    /* Initialize vteprec_tunnel_col_bfd_params. */
    c = &vteprec_tunnel_col_bfd_params;
    c->name = "bfd_params";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_bfd_params;
    c->unparse = vteprec_tunnel_unparse_bfd_params;

    /* Initialize vteprec_tunnel_col_bfd_status. */
    c = &vteprec_tunnel_col_bfd_status;
    c->name = "bfd_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_bfd_status;
    c->unparse = vteprec_tunnel_unparse_bfd_status;

    /* Initialize vteprec_tunnel_col_local. */
    c = &vteprec_tunnel_col_local;
    c->name = "local";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_local;
    c->unparse = vteprec_tunnel_unparse_local;

    /* Initialize vteprec_tunnel_col_remote. */
    c = &vteprec_tunnel_col_remote;
    c->name = "remote";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_tunnel_parse_remote;
    c->unparse = vteprec_tunnel_unparse_remote;
}

/* Ucast_Macs_Local table. */

static void
vteprec_ucast_macs_local_parse_MAC(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_local *row = vteprec_ucast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->MAC = datum->keys[0].string;
    } else {
        row->MAC = "";
    }
}

static void
vteprec_ucast_macs_local_parse_ipaddr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_local *row = vteprec_ucast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipaddr = datum->keys[0].string;
    } else {
        row->ipaddr = "";
    }
}

static void
vteprec_ucast_macs_local_parse_locator(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_local *row = vteprec_ucast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->locator = NULL;
    }
}

static void
vteprec_ucast_macs_local_parse_logical_switch(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_local *row = vteprec_ucast_macs_local_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_switch = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->keys[0].uuid));
    } else {
        row->logical_switch = NULL;
    }
}

static void
vteprec_ucast_macs_local_unparse_MAC(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_local_unparse_ipaddr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_local_unparse_locator(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_local_unparse_logical_switch(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_local_init__(struct ovsdb_idl_row *row)
{
    vteprec_ucast_macs_local_init(vteprec_ucast_macs_local_cast(row));
}

/* Clears the contents of 'row' in table "Ucast_Macs_Local". */
void
vteprec_ucast_macs_local_init(struct vteprec_ucast_macs_local *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Ucast_Macs_Local" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL], uuid));
}

/* Returns a row in table "Ucast_Macs_Local" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_first(const struct ovsdb_idl *idl)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_next(const struct vteprec_ucast_macs_local *row)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_ucast_macs_local_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL]);
}

unsigned int vteprec_ucast_macs_local_row_get_seqno(const struct vteprec_ucast_macs_local *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL]));
}

const struct vteprec_ucast_macs_local
*vteprec_ucast_macs_local_track_get_next(const struct vteprec_ucast_macs_local *row)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Ucast_Macs_Local".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_local_delete(const struct vteprec_ucast_macs_local *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Ucast_Macs_Local" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_ucast_macs_local *
vteprec_ucast_macs_local_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_ucast_macs_local_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_LOCAL], NULL));
}

/* Causes the original contents of column "MAC" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "MAC" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "MAC" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "MAC" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_local_insert()).
 *
 *   - If "MAC" has already been modified (with
 *     vteprec_ucast_macs_local_set_MAC()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_local_set_MAC() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_local_verify_MAC(const struct vteprec_ucast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_MAC]);
}

/* Causes the original contents of column "ipaddr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipaddr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipaddr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipaddr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_local_insert()).
 *
 *   - If "ipaddr" has already been modified (with
 *     vteprec_ucast_macs_local_set_ipaddr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_local_set_ipaddr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_local_verify_ipaddr(const struct vteprec_ucast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_IPADDR]);
}

/* Causes the original contents of column "locator" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_local_insert()).
 *
 *   - If "locator" has already been modified (with
 *     vteprec_ucast_macs_local_set_locator()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_local_set_locator() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_local_verify_locator(const struct vteprec_ucast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOCATOR]);
}

/* Causes the original contents of column "logical_switch" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_switch" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_switch" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_switch" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_local_insert()).
 *
 *   - If "logical_switch" has already been modified (with
 *     vteprec_ucast_macs_local_set_logical_switch()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_local_set_logical_switch() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_local_verify_logical_switch(const struct vteprec_ucast_macs_local *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOGICAL_SWITCH]);
}

/* Returns the "MAC" column's value from the "Ucast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes MAC's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "MAC" member in vteprec_ucast_macs_local. */
const struct ovsdb_datum *
vteprec_ucast_macs_local_get_MAC(const struct vteprec_ucast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_local_col_MAC);
}

/* Returns the "ipaddr" column's value from the "Ucast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ipaddr's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipaddr" member in vteprec_ucast_macs_local. */
const struct ovsdb_datum *
vteprec_ucast_macs_local_get_ipaddr(const struct vteprec_ucast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_local_col_ipaddr);
}

/* Returns the "locator" column's value from the "Ucast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator" member in vteprec_ucast_macs_local. */
const struct ovsdb_datum *
vteprec_ucast_macs_local_get_locator(const struct vteprec_ucast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_local_col_locator);
}

/* Returns the "logical_switch" column's value from the "Ucast_Macs_Local" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_switch's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "logical_switch" member in vteprec_ucast_macs_local. */
const struct ovsdb_datum *
vteprec_ucast_macs_local_get_logical_switch(const struct vteprec_ucast_macs_local *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_local_col_logical_switch);
}

/* Sets the "MAC" column from the "Ucast_Macs_Local" table in 'row' to
 * 'MAC'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_local_set_MAC(const struct vteprec_ucast_macs_local *row, const char *MAC)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, MAC);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_MAC], &datum);
}

/* Sets the "ipaddr" column from the "Ucast_Macs_Local" table in 'row' to
 * 'ipaddr'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_local_set_ipaddr(const struct vteprec_ucast_macs_local *row, const char *ipaddr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ipaddr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_IPADDR], &datum);
}

/* Sets the "locator" column from the "Ucast_Macs_Local" table in 'row' to
 * 'locator'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_local_set_locator(const struct vteprec_ucast_macs_local *row, const struct vteprec_physical_locator *locator)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOCATOR], &datum);
}

/* Sets the "logical_switch" column from the "Ucast_Macs_Local" table in 'row' to
 * 'logical_switch'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_local_set_logical_switch(const struct vteprec_ucast_macs_local *row, const struct vteprec_logical_switch *logical_switch)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_switch->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_COL_LOGICAL_SWITCH], &datum);
}

struct ovsdb_idl_column vteprec_ucast_macs_local_columns[VTEPREC_UCAST_MACS_LOCAL_N_COLUMNS];

static void
vteprec_ucast_macs_local_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_ucast_macs_local_col_MAC. */
    c = &vteprec_ucast_macs_local_col_MAC;
    c->name = "MAC";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_local_parse_MAC;
    c->unparse = vteprec_ucast_macs_local_unparse_MAC;

    /* Initialize vteprec_ucast_macs_local_col_ipaddr. */
    c = &vteprec_ucast_macs_local_col_ipaddr;
    c->name = "ipaddr";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_local_parse_ipaddr;
    c->unparse = vteprec_ucast_macs_local_unparse_ipaddr;

    /* Initialize vteprec_ucast_macs_local_col_locator. */
    c = &vteprec_ucast_macs_local_col_locator;
    c->name = "locator";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_local_parse_locator;
    c->unparse = vteprec_ucast_macs_local_unparse_locator;

    /* Initialize vteprec_ucast_macs_local_col_logical_switch. */
    c = &vteprec_ucast_macs_local_col_logical_switch;
    c->name = "logical_switch";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Switch";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_local_parse_logical_switch;
    c->unparse = vteprec_ucast_macs_local_unparse_logical_switch;
}

/* Ucast_Macs_Remote table. */

static void
vteprec_ucast_macs_remote_parse_MAC(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_remote *row = vteprec_ucast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->MAC = datum->keys[0].string;
    } else {
        row->MAC = "";
    }
}

static void
vteprec_ucast_macs_remote_parse_ipaddr(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_remote *row = vteprec_ucast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipaddr = datum->keys[0].string;
    } else {
        row->ipaddr = "";
    }
}

static void
vteprec_ucast_macs_remote_parse_locator(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_remote *row = vteprec_ucast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->locator = vteprec_physical_locator_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_PHYSICAL_LOCATOR], &datum->keys[0].uuid));
    } else {
        row->locator = NULL;
    }
}

static void
vteprec_ucast_macs_remote_parse_logical_switch(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct vteprec_ucast_macs_remote *row = vteprec_ucast_macs_remote_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_switch = vteprec_logical_switch_cast(ovsdb_idl_get_row_arc(row_, &vteprec_table_classes[VTEPREC_TABLE_LOGICAL_SWITCH], &datum->keys[0].uuid));
    } else {
        row->logical_switch = NULL;
    }
}

static void
vteprec_ucast_macs_remote_unparse_MAC(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_remote_unparse_ipaddr(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_remote_unparse_locator(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_remote_unparse_logical_switch(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
vteprec_ucast_macs_remote_init__(struct ovsdb_idl_row *row)
{
    vteprec_ucast_macs_remote_init(vteprec_ucast_macs_remote_cast(row));
}

/* Clears the contents of 'row' in table "Ucast_Macs_Remote". */
void
vteprec_ucast_macs_remote_init(struct vteprec_ucast_macs_remote *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Ucast_Macs_Remote" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_get_row_for_uuid(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE], uuid));
}

/* Returns a row in table "Ucast_Macs_Remote" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_first(const struct ovsdb_idl *idl)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_first_row(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_next(const struct vteprec_ucast_macs_remote *row)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int vteprec_ucast_macs_remote_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE]);
}

unsigned int vteprec_ucast_macs_remote_row_get_seqno(const struct vteprec_ucast_macs_remote *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_track_get_first(const struct ovsdb_idl *idl)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_track_get_first(idl, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE]));
}

const struct vteprec_ucast_macs_remote
*vteprec_ucast_macs_remote_track_get_next(const struct vteprec_ucast_macs_remote *row)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Ucast_Macs_Remote".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_remote_delete(const struct vteprec_ucast_macs_remote *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Ucast_Macs_Remote" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct vteprec_ucast_macs_remote *
vteprec_ucast_macs_remote_insert(struct ovsdb_idl_txn *txn)
{
    return vteprec_ucast_macs_remote_cast(ovsdb_idl_txn_insert(txn, &vteprec_table_classes[VTEPREC_TABLE_UCAST_MACS_REMOTE], NULL));
}

/* Causes the original contents of column "MAC" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "MAC" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "MAC" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "MAC" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_remote_insert()).
 *
 *   - If "MAC" has already been modified (with
 *     vteprec_ucast_macs_remote_set_MAC()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_remote_set_MAC() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_remote_verify_MAC(const struct vteprec_ucast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_MAC]);
}

/* Causes the original contents of column "ipaddr" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipaddr" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipaddr" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipaddr" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_remote_insert()).
 *
 *   - If "ipaddr" has already been modified (with
 *     vteprec_ucast_macs_remote_set_ipaddr()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_remote_set_ipaddr() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_remote_verify_ipaddr(const struct vteprec_ucast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_IPADDR]);
}

/* Causes the original contents of column "locator" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "locator" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "locator" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "locator" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_remote_insert()).
 *
 *   - If "locator" has already been modified (with
 *     vteprec_ucast_macs_remote_set_locator()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_remote_set_locator() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_remote_verify_locator(const struct vteprec_ucast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOCATOR]);
}

/* Causes the original contents of column "logical_switch" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_switch" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_switch" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_switch" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     vteprec_ucast_macs_remote_insert()).
 *
 *   - If "logical_switch" has already been modified (with
 *     vteprec_ucast_macs_remote_set_logical_switch()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * vteprec_ucast_macs_remote_set_logical_switch() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
vteprec_ucast_macs_remote_verify_logical_switch(const struct vteprec_ucast_macs_remote *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOGICAL_SWITCH]);
}

/* Returns the "MAC" column's value from the "Ucast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes MAC's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "MAC" member in vteprec_ucast_macs_remote. */
const struct ovsdb_datum *
vteprec_ucast_macs_remote_get_MAC(const struct vteprec_ucast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_remote_col_MAC);
}

/* Returns the "ipaddr" column's value from the "Ucast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ipaddr's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipaddr" member in vteprec_ucast_macs_remote. */
const struct ovsdb_datum *
vteprec_ucast_macs_remote_get_ipaddr(const struct vteprec_ucast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_remote_col_ipaddr);
}

/* Returns the "locator" column's value from the "Ucast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes locator's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "locator" member in vteprec_ucast_macs_remote. */
const struct ovsdb_datum *
vteprec_ucast_macs_remote_get_locator(const struct vteprec_ucast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_remote_col_locator);
}

/* Returns the "logical_switch" column's value from the "Ucast_Macs_Remote" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_switch's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "logical_switch" member in vteprec_ucast_macs_remote. */
const struct ovsdb_datum *
vteprec_ucast_macs_remote_get_logical_switch(const struct vteprec_ucast_macs_remote *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &vteprec_ucast_macs_remote_col_logical_switch);
}

/* Sets the "MAC" column from the "Ucast_Macs_Remote" table in 'row' to
 * 'MAC'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_remote_set_MAC(const struct vteprec_ucast_macs_remote *row, const char *MAC)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, MAC);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_MAC], &datum);
}

/* Sets the "ipaddr" column from the "Ucast_Macs_Remote" table in 'row' to
 * 'ipaddr'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_remote_set_ipaddr(const struct vteprec_ucast_macs_remote *row, const char *ipaddr)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ipaddr);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_IPADDR], &datum);
}

/* Sets the "locator" column from the "Ucast_Macs_Remote" table in 'row' to
 * 'locator'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_remote_set_locator(const struct vteprec_ucast_macs_remote *row, const struct vteprec_physical_locator *locator)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = locator->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOCATOR], &datum);
}

/* Sets the "logical_switch" column from the "Ucast_Macs_Remote" table in 'row' to
 * 'logical_switch'.
 *
 * The caller retains ownership of the arguments. */
void
vteprec_ucast_macs_remote_set_logical_switch(const struct vteprec_ucast_macs_remote *row, const struct vteprec_logical_switch *logical_switch)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_switch->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_COL_LOGICAL_SWITCH], &datum);
}

struct ovsdb_idl_column vteprec_ucast_macs_remote_columns[VTEPREC_UCAST_MACS_REMOTE_N_COLUMNS];

static void
vteprec_ucast_macs_remote_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize vteprec_ucast_macs_remote_col_MAC. */
    c = &vteprec_ucast_macs_remote_col_MAC;
    c->name = "MAC";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_remote_parse_MAC;
    c->unparse = vteprec_ucast_macs_remote_unparse_MAC;

    /* Initialize vteprec_ucast_macs_remote_col_ipaddr. */
    c = &vteprec_ucast_macs_remote_col_ipaddr;
    c->name = "ipaddr";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_remote_parse_ipaddr;
    c->unparse = vteprec_ucast_macs_remote_unparse_ipaddr;

    /* Initialize vteprec_ucast_macs_remote_col_locator. */
    c = &vteprec_ucast_macs_remote_col_locator;
    c->name = "locator";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Physical_Locator";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_remote_parse_locator;
    c->unparse = vteprec_ucast_macs_remote_unparse_locator;

    /* Initialize vteprec_ucast_macs_remote_col_logical_switch. */
    c = &vteprec_ucast_macs_remote_col_logical_switch;
    c->name = "logical_switch";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Switch";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = vteprec_ucast_macs_remote_parse_logical_switch;
    c->unparse = vteprec_ucast_macs_remote_unparse_logical_switch;
}

struct ovsdb_idl_table_class vteprec_table_classes[VTEPREC_N_TABLES] = {
    {"ACL", true,
     vteprec_acl_columns, ARRAY_SIZE(vteprec_acl_columns),
     sizeof(struct vteprec_acl), vteprec_acl_init__},
    {"ACL_entry", true,
     vteprec_acl_entry_columns, ARRAY_SIZE(vteprec_acl_entry_columns),
     sizeof(struct vteprec_acl_entry), vteprec_acl_entry_init__},
    {"Arp_Sources_Local", true,
     vteprec_arp_sources_local_columns, ARRAY_SIZE(vteprec_arp_sources_local_columns),
     sizeof(struct vteprec_arp_sources_local), vteprec_arp_sources_local_init__},
    {"Arp_Sources_Remote", true,
     vteprec_arp_sources_remote_columns, ARRAY_SIZE(vteprec_arp_sources_remote_columns),
     sizeof(struct vteprec_arp_sources_remote), vteprec_arp_sources_remote_init__},
    {"Global", true,
     vteprec_global_columns, ARRAY_SIZE(vteprec_global_columns),
     sizeof(struct vteprec_global), vteprec_global_init__},
    {"Logical_Binding_Stats", false,
     vteprec_logical_binding_stats_columns, ARRAY_SIZE(vteprec_logical_binding_stats_columns),
     sizeof(struct vteprec_logical_binding_stats), vteprec_logical_binding_stats_init__},
    {"Logical_Router", true,
     vteprec_logical_router_columns, ARRAY_SIZE(vteprec_logical_router_columns),
     sizeof(struct vteprec_logical_router), vteprec_logical_router_init__},
    {"Logical_Switch", true,
     vteprec_logical_switch_columns, ARRAY_SIZE(vteprec_logical_switch_columns),
     sizeof(struct vteprec_logical_switch), vteprec_logical_switch_init__},
    {"Manager", false,
     vteprec_manager_columns, ARRAY_SIZE(vteprec_manager_columns),
     sizeof(struct vteprec_manager), vteprec_manager_init__},
    {"Mcast_Macs_Local", true,
     vteprec_mcast_macs_local_columns, ARRAY_SIZE(vteprec_mcast_macs_local_columns),
     sizeof(struct vteprec_mcast_macs_local), vteprec_mcast_macs_local_init__},
    {"Mcast_Macs_Remote", true,
     vteprec_mcast_macs_remote_columns, ARRAY_SIZE(vteprec_mcast_macs_remote_columns),
     sizeof(struct vteprec_mcast_macs_remote), vteprec_mcast_macs_remote_init__},
    {"Physical_Locator", false,
     vteprec_physical_locator_columns, ARRAY_SIZE(vteprec_physical_locator_columns),
     sizeof(struct vteprec_physical_locator), vteprec_physical_locator_init__},
    {"Physical_Locator_Set", false,
     vteprec_physical_locator_set_columns, ARRAY_SIZE(vteprec_physical_locator_set_columns),
     sizeof(struct vteprec_physical_locator_set), vteprec_physical_locator_set_init__},
    {"Physical_Port", false,
     vteprec_physical_port_columns, ARRAY_SIZE(vteprec_physical_port_columns),
     sizeof(struct vteprec_physical_port), vteprec_physical_port_init__},
    {"Physical_Switch", false,
     vteprec_physical_switch_columns, ARRAY_SIZE(vteprec_physical_switch_columns),
     sizeof(struct vteprec_physical_switch), vteprec_physical_switch_init__},
    {"Tunnel", false,
     vteprec_tunnel_columns, ARRAY_SIZE(vteprec_tunnel_columns),
     sizeof(struct vteprec_tunnel), vteprec_tunnel_init__},
    {"Ucast_Macs_Local", true,
     vteprec_ucast_macs_local_columns, ARRAY_SIZE(vteprec_ucast_macs_local_columns),
     sizeof(struct vteprec_ucast_macs_local), vteprec_ucast_macs_local_init__},
    {"Ucast_Macs_Remote", true,
     vteprec_ucast_macs_remote_columns, ARRAY_SIZE(vteprec_ucast_macs_remote_columns),
     sizeof(struct vteprec_ucast_macs_remote), vteprec_ucast_macs_remote_init__},
};

struct ovsdb_idl_class vteprec_idl_class = {
    "hardware_vtep", vteprec_table_classes, ARRAY_SIZE(vteprec_table_classes)
};

void
vteprec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    vteprec_acl_columns_init();
    vteprec_acl_entry_columns_init();
    vteprec_arp_sources_local_columns_init();
    vteprec_arp_sources_remote_columns_init();
    vteprec_global_columns_init();
    vteprec_logical_binding_stats_columns_init();
    vteprec_logical_router_columns_init();
    vteprec_logical_switch_columns_init();
    vteprec_manager_columns_init();
    vteprec_mcast_macs_local_columns_init();
    vteprec_mcast_macs_remote_columns_init();
    vteprec_physical_locator_columns_init();
    vteprec_physical_locator_set_columns_init();
    vteprec_physical_port_columns_init();
    vteprec_physical_switch_columns_init();
    vteprec_tunnel_columns_init();
    vteprec_ucast_macs_local_columns_init();
    vteprec_ucast_macs_remote_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
vteprec_get_db_version(void)
{
    return "1.4.1";
}

