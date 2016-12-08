/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "ovn/lib/ovn-sb-idl.h"
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


static struct sbrec_chassis *
sbrec_chassis_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_chassis, header_) : NULL;
}

static struct sbrec_datapath_binding *
sbrec_datapath_binding_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_datapath_binding, header_) : NULL;
}

static struct sbrec_encap *
sbrec_encap_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_encap, header_) : NULL;
}

static struct sbrec_logical_flow *
sbrec_logical_flow_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_logical_flow, header_) : NULL;
}

static struct sbrec_multicast_group *
sbrec_multicast_group_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_multicast_group, header_) : NULL;
}

static struct sbrec_port_binding *
sbrec_port_binding_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct sbrec_port_binding, header_) : NULL;
}

/* Chassis table. */

static void
sbrec_chassis_parse_encaps(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->encaps = NULL;
    row->n_encaps = 0;
    for (i = 0; i < datum->n; i++) {
        struct sbrec_encap *keyRow = sbrec_encap_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_ENCAP], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_encaps) {
                row->encaps = xmalloc(datum->n * sizeof *row->encaps);
            }
            row->encaps[row->n_encaps] = keyRow;
            row->n_encaps++;
        }
    }
}

static void
sbrec_chassis_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_chassis_parse_vtep_logical_switches(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->vtep_logical_switches = NULL;
    row->n_vtep_logical_switches = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_vtep_logical_switches) {
            row->vtep_logical_switches = xmalloc(datum->n * sizeof *row->vtep_logical_switches);
        }
        row->vtep_logical_switches[row->n_vtep_logical_switches] = datum->keys[i].string;
        row->n_vtep_logical_switches++;
    }
}

static void
sbrec_chassis_unparse_encaps(struct ovsdb_idl_row *row_)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    free(row->encaps);
}

static void
sbrec_chassis_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_chassis_unparse_vtep_logical_switches(struct ovsdb_idl_row *row_)
{
    struct sbrec_chassis *row = sbrec_chassis_cast(row_);

    ovs_assert(inited);
    free(row->vtep_logical_switches);
}

static void
sbrec_chassis_init__(struct ovsdb_idl_row *row)
{
    sbrec_chassis_init(sbrec_chassis_cast(row));
}

/* Clears the contents of 'row' in table "Chassis". */
void
sbrec_chassis_init(struct sbrec_chassis *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Chassis" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_chassis *
sbrec_chassis_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_chassis_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS], uuid));
}

/* Returns a row in table "Chassis" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_chassis *
sbrec_chassis_first(const struct ovsdb_idl *idl)
{
    return sbrec_chassis_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_chassis *
sbrec_chassis_next(const struct sbrec_chassis *row)
{
    return sbrec_chassis_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_chassis_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]);
}

unsigned int sbrec_chassis_row_get_seqno(const struct sbrec_chassis *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_chassis *
sbrec_chassis_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_chassis_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_CHASSIS]));
}

const struct sbrec_chassis
*sbrec_chassis_track_get_next(const struct sbrec_chassis *row)
{
    return sbrec_chassis_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Chassis".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_delete(const struct sbrec_chassis *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Chassis" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_chassis *
sbrec_chassis_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_chassis_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_CHASSIS], NULL));
}

/* Causes the original contents of column "encaps" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "encaps" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "encaps" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "encaps" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_chassis_insert()).
 *
 *   - If "encaps" has already been modified (with
 *     sbrec_chassis_set_encaps()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_encaps() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_encaps(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS]);
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
 *     sbrec_chassis_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_chassis_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_name(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME]);
}

/* Causes the original contents of column "vtep_logical_switches" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vtep_logical_switches" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vtep_logical_switches" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vtep_logical_switches" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_chassis_insert()).
 *
 *   - If "vtep_logical_switches" has already been modified (with
 *     sbrec_chassis_set_vtep_logical_switches()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_chassis_set_vtep_logical_switches() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_chassis_verify_vtep_logical_switches(const struct sbrec_chassis *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES]);
}

/* Returns the "encaps" column's value from the "Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes encaps's
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
 * directly through the "encaps" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_encaps(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_encaps);
}

/* Returns the "name" column's value from the "Chassis" table in 'row'
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
 * directly through the "name" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_name(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_name);
}

/* Returns the "vtep_logical_switches" column's value from the "Chassis" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes vtep_logical_switches's
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
 * directly through the "vtep_logical_switches" member in sbrec_chassis. */
const struct ovsdb_datum *
sbrec_chassis_get_vtep_logical_switches(const struct sbrec_chassis *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_chassis_col_vtep_logical_switches);
}

/* Sets the "encaps" column from the "Chassis" table in 'row' to
 * the 'encaps' set with 'n_encaps' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_encaps(const struct sbrec_chassis *row, struct sbrec_encap **encaps, size_t n_encaps)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_encaps;
    datum.keys = n_encaps ? xmalloc(n_encaps * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_encaps; i++) {
        datum.keys[i].uuid = encaps[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS], &datum);
}

/* Sets the "name" column from the "Chassis" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_name(const struct sbrec_chassis *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME], &datum);
}

/* Sets the "vtep_logical_switches" column from the "Chassis" table in 'row' to
 * the 'vtep_logical_switches' set with 'n_vtep_logical_switches' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_chassis_set_vtep_logical_switches(const struct sbrec_chassis *row, const char **vtep_logical_switches, size_t n_vtep_logical_switches)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_vtep_logical_switches;
    datum.keys = n_vtep_logical_switches ? xmalloc(n_vtep_logical_switches * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_vtep_logical_switches; i++) {
        datum.keys[i].string = xstrdup(vtep_logical_switches[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES], &datum);
}

struct ovsdb_idl_column sbrec_chassis_columns[SBREC_CHASSIS_N_COLUMNS];

static void
sbrec_chassis_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_chassis_col_encaps. */
    c = &sbrec_chassis_col_encaps;
    c->name = "encaps";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Encap";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_encaps;
    c->unparse = sbrec_chassis_unparse_encaps;

    /* Initialize sbrec_chassis_col_name. */
    c = &sbrec_chassis_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_name;
    c->unparse = sbrec_chassis_unparse_name;

    /* Initialize sbrec_chassis_col_vtep_logical_switches. */
    c = &sbrec_chassis_col_vtep_logical_switches;
    c->name = "vtep_logical_switches";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_chassis_parse_vtep_logical_switches;
    c->unparse = sbrec_chassis_unparse_vtep_logical_switches;
}

/* Datapath_Binding table. */

static void
sbrec_datapath_binding_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
sbrec_datapath_binding_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_datapath_binding_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_datapath_binding *row = sbrec_datapath_binding_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_datapath_binding_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_datapath_binding_init__(struct ovsdb_idl_row *row)
{
    sbrec_datapath_binding_init(sbrec_datapath_binding_cast(row));
}

/* Clears the contents of 'row' in table "Datapath_Binding". */
void
sbrec_datapath_binding_init(struct sbrec_datapath_binding *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Datapath_Binding" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], uuid));
}

/* Returns a row in table "Datapath_Binding" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_first(const struct ovsdb_idl *idl)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_datapath_binding *
sbrec_datapath_binding_next(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_datapath_binding_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]);
}

unsigned int sbrec_datapath_binding_row_get_seqno(const struct sbrec_datapath_binding *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_datapath_binding *
sbrec_datapath_binding_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING]));
}

const struct sbrec_datapath_binding
*sbrec_datapath_binding_track_get_next(const struct sbrec_datapath_binding *row)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Datapath_Binding".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_delete(const struct sbrec_datapath_binding *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Datapath_Binding" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_datapath_binding *
sbrec_datapath_binding_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_datapath_binding_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], NULL));
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_datapath_binding_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_datapath_binding_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_datapath_binding_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_verify_external_ids(const struct sbrec_datapath_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS]);
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
 *     sbrec_datapath_binding_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_datapath_binding_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_datapath_binding_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_datapath_binding_verify_tunnel_key(const struct sbrec_datapath_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY]);
}

/* Returns the "external_ids" column's value from the "Datapath_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in sbrec_datapath_binding. */
const struct ovsdb_datum *
sbrec_datapath_binding_get_external_ids(const struct sbrec_datapath_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_datapath_binding_col_external_ids);
}

/* Returns the "tunnel_key" column's value from the "Datapath_Binding" table in 'row'
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
 * directly through the "tunnel_key" member in sbrec_datapath_binding. */
const struct ovsdb_datum *
sbrec_datapath_binding_get_tunnel_key(const struct sbrec_datapath_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_datapath_binding_col_tunnel_key);
}

/* Sets the "external_ids" column's value from the "Datapath_Binding" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_datapath_binding_set_external_ids(const struct sbrec_datapath_binding *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "tunnel_key" column from the "Datapath_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 16,777,215
 *
 * The caller retains ownership of the arguments. */
void
sbrec_datapath_binding_set_tunnel_key(const struct sbrec_datapath_binding *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY], &datum);
}

struct ovsdb_idl_column sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_N_COLUMNS];

static void
sbrec_datapath_binding_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_datapath_binding_col_external_ids. */
    c = &sbrec_datapath_binding_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_datapath_binding_parse_external_ids;
    c->unparse = sbrec_datapath_binding_unparse_external_ids;

    /* Initialize sbrec_datapath_binding_col_tunnel_key. */
    c = &sbrec_datapath_binding_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(16777215);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_datapath_binding_parse_tunnel_key;
    c->unparse = sbrec_datapath_binding_unparse_tunnel_key;
}

/* Encap table. */

static void
sbrec_encap_parse_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ip = datum->keys[0].string;
    } else {
        row->ip = "";
    }
}

static void
sbrec_encap_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
sbrec_encap_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_encap_unparse_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_encap_unparse_options(struct ovsdb_idl_row *row_)
{
    struct sbrec_encap *row = sbrec_encap_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
sbrec_encap_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_encap_init__(struct ovsdb_idl_row *row)
{
    sbrec_encap_init(sbrec_encap_cast(row));
}

/* Clears the contents of 'row' in table "Encap". */
void
sbrec_encap_init(struct sbrec_encap *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->options);
}

/* Searches table "Encap" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_encap *
sbrec_encap_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_encap_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP], uuid));
}

/* Returns a row in table "Encap" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_encap *
sbrec_encap_first(const struct ovsdb_idl *idl)
{
    return sbrec_encap_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_encap *
sbrec_encap_next(const struct sbrec_encap *row)
{
    return sbrec_encap_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_encap_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]);
}

unsigned int sbrec_encap_row_get_seqno(const struct sbrec_encap *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_encap *
sbrec_encap_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_encap_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_ENCAP]));
}

const struct sbrec_encap
*sbrec_encap_track_get_next(const struct sbrec_encap *row)
{
    return sbrec_encap_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Encap".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_delete(const struct sbrec_encap *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Encap" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_encap *
sbrec_encap_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_encap_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_ENCAP], NULL));
}

/* Causes the original contents of column "ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_encap_insert()).
 *
 *   - If "ip" has already been modified (with
 *     sbrec_encap_set_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_ip(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_IP]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_encap_insert()).
 *
 *   - If "options" has already been modified (with
 *     sbrec_encap_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_options(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_encap_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_encap_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_encap_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_encap_verify_type(const struct sbrec_encap *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE]);
}

/* Returns the "ip" column's value from the "Encap" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ip's
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
 * directly through the "ip" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_ip(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_ip);
}

/* Returns the "options" column's value from the "Encap" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_options(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_options);
}

/* Returns the "type" column's value from the "Encap" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
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
 * directly through the "type" member in sbrec_encap. */
const struct ovsdb_datum *
sbrec_encap_get_type(const struct sbrec_encap *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_encap_col_type);
}

/* Sets the "ip" column from the "Encap" table in 'row' to
 * 'ip'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_set_ip(const struct sbrec_encap *row, const char *ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ip);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_IP], &datum);
}

/* Sets the "options" column's value from the "Encap" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_encap_set_options(const struct sbrec_encap *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS],
                        &datum);
}


/* Sets the "type" column from the "Encap" table in 'row' to
 * 'type'.
 *
 * Argument constraints: one of "stt", "geneve", or "vxlan"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_encap_set_type(const struct sbrec_encap *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_encap_columns[SBREC_ENCAP_COL_TYPE], &datum);
}

struct ovsdb_idl_column sbrec_encap_columns[SBREC_ENCAP_N_COLUMNS];

static void
sbrec_encap_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_encap_col_ip. */
    c = &sbrec_encap_col_ip;
    c->name = "ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_encap_parse_ip;
    c->unparse = sbrec_encap_unparse_ip;

    /* Initialize sbrec_encap_col_options. */
    c = &sbrec_encap_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_encap_parse_options;
    c->unparse = sbrec_encap_unparse_options;

    /* Initialize sbrec_encap_col_type. */
    c = &sbrec_encap_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("geneve");
    c->type.key.enum_->keys[1].string = xstrdup("stt");
    c->type.key.enum_->keys[2].string = xstrdup("vxlan");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_encap_parse_type;
    c->unparse = sbrec_encap_unparse_type;
}

/* Logical_Flow table. */

static void
sbrec_logical_flow_parse_actions(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->actions = datum->keys[0].string;
    } else {
        row->actions = "";
    }
}

static void
sbrec_logical_flow_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
sbrec_logical_flow_parse_logical_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->logical_datapath = NULL;
    }
}

static void
sbrec_logical_flow_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
sbrec_logical_flow_parse_pipeline(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->pipeline = datum->keys[0].string;
    } else {
        row->pipeline = "";
    }
}

static void
sbrec_logical_flow_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
sbrec_logical_flow_parse_table_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->table_id = datum->keys[0].integer;
    } else {
        row->table_id = 0;
    }
}

static void
sbrec_logical_flow_unparse_actions(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct sbrec_logical_flow *row = sbrec_logical_flow_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
sbrec_logical_flow_unparse_logical_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_pipeline(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_unparse_table_id(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_logical_flow_init__(struct ovsdb_idl_row *row)
{
    sbrec_logical_flow_init(sbrec_logical_flow_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Flow". */
void
sbrec_logical_flow_init(struct sbrec_logical_flow *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Flow" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_logical_flow *
sbrec_logical_flow_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_logical_flow_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], uuid));
}

/* Returns a row in table "Logical_Flow" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_logical_flow *
sbrec_logical_flow_first(const struct ovsdb_idl *idl)
{
    return sbrec_logical_flow_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_logical_flow *
sbrec_logical_flow_next(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_logical_flow_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]);
}

unsigned int sbrec_logical_flow_row_get_seqno(const struct sbrec_logical_flow *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_logical_flow *
sbrec_logical_flow_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_logical_flow_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW]));
}

const struct sbrec_logical_flow
*sbrec_logical_flow_track_get_next(const struct sbrec_logical_flow *row)
{
    return sbrec_logical_flow_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Flow".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_delete(const struct sbrec_logical_flow *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Flow" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_logical_flow *
sbrec_logical_flow_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_logical_flow_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW], NULL));
}

/* Causes the original contents of column "actions" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "actions" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "actions" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "actions" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "actions" has already been modified (with
 *     sbrec_logical_flow_set_actions()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_actions() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_actions(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     sbrec_logical_flow_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_external_ids(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "logical_datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "logical_datapath" has already been modified (with
 *     sbrec_logical_flow_set_logical_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_logical_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_logical_datapath(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH]);
}

/* Causes the original contents of column "match" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "match" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "match" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "match" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "match" has already been modified (with
 *     sbrec_logical_flow_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_match(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH]);
}

/* Causes the original contents of column "pipeline" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "pipeline" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "pipeline" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "pipeline" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "pipeline" has already been modified (with
 *     sbrec_logical_flow_set_pipeline()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_pipeline() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_pipeline(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE]);
}

/* Causes the original contents of column "priority" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "priority" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "priority" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "priority" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "priority" has already been modified (with
 *     sbrec_logical_flow_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_priority(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY]);
}

/* Causes the original contents of column "table_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "table_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "table_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "table_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_logical_flow_insert()).
 *
 *   - If "table_id" has already been modified (with
 *     sbrec_logical_flow_set_table_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_logical_flow_set_table_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_logical_flow_verify_table_id(const struct sbrec_logical_flow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID]);
}

/* Returns the "actions" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes actions's
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
 * directly through the "actions" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_actions(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_actions);
}

/* Returns the "external_ids" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
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
 * directly through the "external_ids" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_external_ids(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_external_ids);
}

/* Returns the "logical_datapath" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes logical_datapath's
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
 * directly through the "logical_datapath" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_logical_datapath(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_logical_datapath);
}

/* Returns the "match" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes match's
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
 * directly through the "match" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_match(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_match);
}

/* Returns the "pipeline" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes pipeline's
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
 * directly through the "pipeline" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_pipeline(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_pipeline);
}

/* Returns the "priority" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes priority's
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
 * directly through the "priority" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_priority(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_priority);
}

/* Returns the "table_id" column's value from the "Logical_Flow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes table_id's
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
 * directly through the "table_id" member in sbrec_logical_flow. */
const struct ovsdb_datum *
sbrec_logical_flow_get_table_id(const struct sbrec_logical_flow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_logical_flow_col_table_id);
}

/* Sets the "actions" column from the "Logical_Flow" table in 'row' to
 * 'actions'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_actions(const struct sbrec_logical_flow *row, const char *actions)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, actions);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Flow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
sbrec_logical_flow_set_external_ids(const struct sbrec_logical_flow *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "logical_datapath" column from the "Logical_Flow" table in 'row' to
 * 'logical_datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_logical_datapath(const struct sbrec_logical_flow *row, const struct sbrec_datapath_binding *logical_datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = logical_datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH], &datum);
}

/* Sets the "match" column from the "Logical_Flow" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_match(const struct sbrec_logical_flow *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH], &datum);
}

/* Sets the "pipeline" column from the "Logical_Flow" table in 'row' to
 * 'pipeline'.
 *
 * Argument constraints: either "ingress" or "egress"
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_pipeline(const struct sbrec_logical_flow *row, const char *pipeline)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, pipeline);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE], &datum);
}

/* Sets the "priority" column from the "Logical_Flow" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_priority(const struct sbrec_logical_flow *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY], &datum);
}

/* Sets the "table_id" column from the "Logical_Flow" table in 'row' to
 * 'table_id'.
 *
 * Argument constraints: in range 0 to 15
 *
 * The caller retains ownership of the arguments. */
void
sbrec_logical_flow_set_table_id(const struct sbrec_logical_flow *row, int64_t table_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = table_id;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID], &datum);
}

struct ovsdb_idl_column sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_N_COLUMNS];

static void
sbrec_logical_flow_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_logical_flow_col_actions. */
    c = &sbrec_logical_flow_col_actions;
    c->name = "actions";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_actions;
    c->unparse = sbrec_logical_flow_unparse_actions;

    /* Initialize sbrec_logical_flow_col_external_ids. */
    c = &sbrec_logical_flow_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_external_ids;
    c->unparse = sbrec_logical_flow_unparse_external_ids;

    /* Initialize sbrec_logical_flow_col_logical_datapath. */
    c = &sbrec_logical_flow_col_logical_datapath;
    c->name = "logical_datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_logical_datapath;
    c->unparse = sbrec_logical_flow_unparse_logical_datapath;

    /* Initialize sbrec_logical_flow_col_match. */
    c = &sbrec_logical_flow_col_match;
    c->name = "match";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_match;
    c->unparse = sbrec_logical_flow_unparse_match;

    /* Initialize sbrec_logical_flow_col_pipeline. */
    c = &sbrec_logical_flow_col_pipeline;
    c->name = "pipeline";
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
    c->parse = sbrec_logical_flow_parse_pipeline;
    c->unparse = sbrec_logical_flow_unparse_pipeline;

    /* Initialize sbrec_logical_flow_col_priority. */
    c = &sbrec_logical_flow_col_priority;
    c->name = "priority";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(65535);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_priority;
    c->unparse = sbrec_logical_flow_unparse_priority;

    /* Initialize sbrec_logical_flow_col_table_id. */
    c = &sbrec_logical_flow_col_table_id;
    c->name = "table_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(15);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_logical_flow_parse_table_id;
    c->unparse = sbrec_logical_flow_unparse_table_id;
}

/* Multicast_Group table. */

static void
sbrec_multicast_group_parse_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->datapath = NULL;
    }
}

static void
sbrec_multicast_group_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
sbrec_multicast_group_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct sbrec_port_binding *keyRow = sbrec_port_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], &datum->keys[i].uuid));
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
sbrec_multicast_group_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_multicast_group_unparse_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct sbrec_multicast_group *row = sbrec_multicast_group_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
sbrec_multicast_group_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_multicast_group_init__(struct ovsdb_idl_row *row)
{
    sbrec_multicast_group_init(sbrec_multicast_group_cast(row));
}

/* Clears the contents of 'row' in table "Multicast_Group". */
void
sbrec_multicast_group_init(struct sbrec_multicast_group *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "Multicast_Group" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_multicast_group *
sbrec_multicast_group_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_multicast_group_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], uuid));
}

/* Returns a row in table "Multicast_Group" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_multicast_group *
sbrec_multicast_group_first(const struct ovsdb_idl *idl)
{
    return sbrec_multicast_group_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_multicast_group *
sbrec_multicast_group_next(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_multicast_group_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]);
}

unsigned int sbrec_multicast_group_row_get_seqno(const struct sbrec_multicast_group *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_multicast_group *
sbrec_multicast_group_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_multicast_group_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP]));
}

const struct sbrec_multicast_group
*sbrec_multicast_group_track_get_next(const struct sbrec_multicast_group *row)
{
    return sbrec_multicast_group_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Multicast_Group".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_delete(const struct sbrec_multicast_group *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Multicast_Group" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_multicast_group *
sbrec_multicast_group_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_multicast_group_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP], NULL));
}

/* Causes the original contents of column "datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_multicast_group_insert()).
 *
 *   - If "datapath" has already been modified (with
 *     sbrec_multicast_group_set_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_datapath(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH]);
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
 *     sbrec_multicast_group_insert()).
 *
 *   - If "name" has already been modified (with
 *     sbrec_multicast_group_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_name(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME]);
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
 *     sbrec_multicast_group_insert()).
 *
 *   - If "ports" has already been modified (with
 *     sbrec_multicast_group_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_ports(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS]);
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
 *     sbrec_multicast_group_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_multicast_group_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_multicast_group_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_multicast_group_verify_tunnel_key(const struct sbrec_multicast_group *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY]);
}

/* Returns the "datapath" column's value from the "Multicast_Group" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes datapath's
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
 * directly through the "datapath" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_datapath(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_datapath);
}

/* Returns the "name" column's value from the "Multicast_Group" table in 'row'
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
 * directly through the "name" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_name(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_name);
}

/* Returns the "ports" column's value from the "Multicast_Group" table in 'row'
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
 * directly through the "ports" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_ports(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_ports);
}

/* Returns the "tunnel_key" column's value from the "Multicast_Group" table in 'row'
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
 * directly through the "tunnel_key" member in sbrec_multicast_group. */
const struct ovsdb_datum *
sbrec_multicast_group_get_tunnel_key(const struct sbrec_multicast_group *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_multicast_group_col_tunnel_key);
}

/* Sets the "datapath" column from the "Multicast_Group" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_datapath(const struct sbrec_multicast_group *row, const struct sbrec_datapath_binding *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH], &datum);
}

/* Sets the "name" column from the "Multicast_Group" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_name(const struct sbrec_multicast_group *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME], &datum);
}

/* Sets the "ports" column from the "Multicast_Group" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_ports(const struct sbrec_multicast_group *row, struct sbrec_port_binding **ports, size_t n_ports)
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
    ovsdb_idl_txn_write(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS], &datum);
}

/* Sets the "tunnel_key" column from the "Multicast_Group" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 32,768 to 65,535
 *
 * The caller retains ownership of the arguments. */
void
sbrec_multicast_group_set_tunnel_key(const struct sbrec_multicast_group *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY], &datum);
}

struct ovsdb_idl_column sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_N_COLUMNS];

static void
sbrec_multicast_group_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_multicast_group_col_datapath. */
    c = &sbrec_multicast_group_col_datapath;
    c->name = "datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_datapath;
    c->unparse = sbrec_multicast_group_unparse_datapath;

    /* Initialize sbrec_multicast_group_col_name. */
    c = &sbrec_multicast_group_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_name;
    c->unparse = sbrec_multicast_group_unparse_name;

    /* Initialize sbrec_multicast_group_col_ports. */
    c = &sbrec_multicast_group_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_ports;
    c->unparse = sbrec_multicast_group_unparse_ports;

    /* Initialize sbrec_multicast_group_col_tunnel_key. */
    c = &sbrec_multicast_group_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(32768);
    c->type.key.u.integer.max = INT64_C(65535);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_multicast_group_parse_tunnel_key;
    c->unparse = sbrec_multicast_group_unparse_tunnel_key;
}

/* Port_Binding table. */

static void
sbrec_port_binding_parse_chassis(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->chassis = sbrec_chassis_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_CHASSIS], &datum->keys[0].uuid));
    } else {
        row->chassis = NULL;
    }
}

static void
sbrec_port_binding_parse_datapath(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath = sbrec_datapath_binding_cast(ovsdb_idl_get_row_arc(row_, &sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING], &datum->keys[0].uuid));
    } else {
        row->datapath = NULL;
    }
}

static void
sbrec_port_binding_parse_logical_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->logical_port = datum->keys[0].string;
    } else {
        row->logical_port = "";
    }
}

static void
sbrec_port_binding_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->mac = NULL;
    row->n_mac = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_mac) {
            row->mac = xmalloc(datum->n * sizeof *row->mac);
        }
        row->mac[row->n_mac] = datum->keys[i].string;
        row->n_mac++;
    }
}

static void
sbrec_port_binding_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
sbrec_port_binding_parse_parent_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->parent_port = datum->keys[0].string;
    } else {
        row->parent_port = NULL;
    }
}

static void
sbrec_port_binding_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tag = NULL;
    row->n_tag = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tag) {
            row->tag = xmalloc(n * sizeof *row->tag);
        }
        row->tag[row->n_tag] = datum->keys[i].integer;
        row->n_tag++;
    }
}

static void
sbrec_port_binding_parse_tunnel_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->tunnel_key = datum->keys[0].integer;
    } else {
        row->tunnel_key = 0;
    }
}

static void
sbrec_port_binding_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
sbrec_port_binding_unparse_chassis(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_datapath(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_logical_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_mac(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    free(row->mac);
}

static void
sbrec_port_binding_unparse_options(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
sbrec_port_binding_unparse_parent_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct sbrec_port_binding *row = sbrec_port_binding_cast(row_);

    ovs_assert(inited);
    free(row->tag);
}

static void
sbrec_port_binding_unparse_tunnel_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
sbrec_port_binding_init__(struct ovsdb_idl_row *row)
{
    sbrec_port_binding_init(sbrec_port_binding_cast(row));
}

/* Clears the contents of 'row' in table "Port_Binding". */
void
sbrec_port_binding_init(struct sbrec_port_binding *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->options);
}

/* Searches table "Port_Binding" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct sbrec_port_binding *
sbrec_port_binding_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return sbrec_port_binding_cast(ovsdb_idl_get_row_for_uuid(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], uuid));
}

/* Returns a row in table "Port_Binding" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct sbrec_port_binding *
sbrec_port_binding_first(const struct ovsdb_idl *idl)
{
    return sbrec_port_binding_cast(ovsdb_idl_first_row(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct sbrec_port_binding *
sbrec_port_binding_next(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int sbrec_port_binding_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]);
}

unsigned int sbrec_port_binding_row_get_seqno(const struct sbrec_port_binding *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct sbrec_port_binding *
sbrec_port_binding_track_get_first(const struct ovsdb_idl *idl)
{
    return sbrec_port_binding_cast(ovsdb_idl_track_get_first(idl, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING]));
}

const struct sbrec_port_binding
*sbrec_port_binding_track_get_next(const struct sbrec_port_binding *row)
{
    return sbrec_port_binding_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Port_Binding".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_delete(const struct sbrec_port_binding *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Port_Binding" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct sbrec_port_binding *
sbrec_port_binding_insert(struct ovsdb_idl_txn *txn)
{
    return sbrec_port_binding_cast(ovsdb_idl_txn_insert(txn, &sbrec_table_classes[SBREC_TABLE_PORT_BINDING], NULL));
}

/* Causes the original contents of column "chassis" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "chassis" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "chassis" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "chassis" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "chassis" has already been modified (with
 *     sbrec_port_binding_set_chassis()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_chassis() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_chassis(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS]);
}

/* Causes the original contents of column "datapath" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "datapath" has already been modified (with
 *     sbrec_port_binding_set_datapath()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_datapath() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_datapath(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH]);
}

/* Causes the original contents of column "logical_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "logical_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "logical_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "logical_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "logical_port" has already been modified (with
 *     sbrec_port_binding_set_logical_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_logical_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_logical_port(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT]);
}

/* Causes the original contents of column "mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "mac" has already been modified (with
 *     sbrec_port_binding_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_mac(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "options" has already been modified (with
 *     sbrec_port_binding_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_options(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS]);
}

/* Causes the original contents of column "parent_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "parent_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "parent_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "parent_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "parent_port" has already been modified (with
 *     sbrec_port_binding_set_parent_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_parent_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_parent_port(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT]);
}

/* Causes the original contents of column "tag" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "tag" has already been modified (with
 *     sbrec_port_binding_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_tag(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG]);
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
 *     sbrec_port_binding_insert()).
 *
 *   - If "tunnel_key" has already been modified (with
 *     sbrec_port_binding_set_tunnel_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_tunnel_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_tunnel_key(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     sbrec_port_binding_insert()).
 *
 *   - If "type" has already been modified (with
 *     sbrec_port_binding_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * sbrec_port_binding_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
sbrec_port_binding_verify_type(const struct sbrec_port_binding *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE]);
}

/* Returns the "chassis" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes chassis's
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
 * directly through the "chassis" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_chassis(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_chassis);
}

/* Returns the "datapath" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes datapath's
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
 * directly through the "datapath" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_datapath(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_datapath);
}

/* Returns the "logical_port" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes logical_port's
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
 * directly through the "logical_port" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_logical_port(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_logical_port);
}

/* Returns the "mac" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac's
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
 * directly through the "mac" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_mac(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_mac);
}

/* Returns the "options" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
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
 * directly through the "options" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_options(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_options);
}

/* Returns the "parent_port" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes parent_port's
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
 * directly through the "parent_port" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_parent_port(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_parent_port);
}

/* Returns the "tag" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag's
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
 * directly through the "tag" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_tag(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_tag);
}

/* Returns the "tunnel_key" column's value from the "Port_Binding" table in 'row'
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
 * directly through the "tunnel_key" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_tunnel_key(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_tunnel_key);
}

/* Returns the "type" column's value from the "Port_Binding" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
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
 * directly through the "type" member in sbrec_port_binding. */
const struct ovsdb_datum *
sbrec_port_binding_get_type(const struct sbrec_port_binding *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &sbrec_port_binding_col_type);
}

/* Sets the "chassis" column from the "Port_Binding" table in 'row' to
 * the 'chassis' set.
 *
 * If "chassis" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_chassis(const struct sbrec_port_binding *row, const struct sbrec_chassis *chassis)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (chassis) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = chassis->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS], &datum);
}

/* Sets the "datapath" column from the "Port_Binding" table in 'row' to
 * 'datapath'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_datapath(const struct sbrec_port_binding *row, const struct sbrec_datapath_binding *datapath)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = datapath->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH], &datum);
}

/* Sets the "logical_port" column from the "Port_Binding" table in 'row' to
 * 'logical_port'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_logical_port(const struct sbrec_port_binding *row, const char *logical_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, logical_port);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT], &datum);
}

/* Sets the "mac" column from the "Port_Binding" table in 'row' to
 * the 'mac' set with 'n_mac' entries.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_mac(const struct sbrec_port_binding *row, const char **mac, size_t n_mac)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mac;
    datum.keys = n_mac ? xmalloc(n_mac * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_mac; i++) {
        datum.keys[i].string = xstrdup(mac[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC], &datum);
}

/* Sets the "options" column's value from the "Port_Binding" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
sbrec_port_binding_set_options(const struct sbrec_port_binding *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS],
                        &datum);
}


/* Sets the "parent_port" column from the "Port_Binding" table in 'row' to
 * the 'parent_port' set.
 *
 * If "parent_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_parent_port(const struct sbrec_port_binding *row, const char *parent_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_port) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_port);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT], &datum);
}

/* Sets the "tag" column from the "Port_Binding" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_tag(const struct sbrec_port_binding *row, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG], &datum);
}

/* Sets the "tunnel_key" column from the "Port_Binding" table in 'row' to
 * 'tunnel_key'.
 *
 * Argument constraints: in range 1 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_tunnel_key(const struct sbrec_port_binding *row, int64_t tunnel_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = tunnel_key;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY], &datum);
}

/* Sets the "type" column from the "Port_Binding" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
sbrec_port_binding_set_type(const struct sbrec_port_binding *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE], &datum);
}

struct ovsdb_idl_column sbrec_port_binding_columns[SBREC_PORT_BINDING_N_COLUMNS];

static void
sbrec_port_binding_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize sbrec_port_binding_col_chassis. */
    c = &sbrec_port_binding_col_chassis;
    c->name = "chassis";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Chassis";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_chassis;
    c->unparse = sbrec_port_binding_unparse_chassis;

    /* Initialize sbrec_port_binding_col_datapath. */
    c = &sbrec_port_binding_col_datapath;
    c->name = "datapath";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Datapath_Binding";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_datapath;
    c->unparse = sbrec_port_binding_unparse_datapath;

    /* Initialize sbrec_port_binding_col_logical_port. */
    c = &sbrec_port_binding_col_logical_port;
    c->name = "logical_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_logical_port;
    c->unparse = sbrec_port_binding_unparse_logical_port;

    /* Initialize sbrec_port_binding_col_mac. */
    c = &sbrec_port_binding_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_mac;
    c->unparse = sbrec_port_binding_unparse_mac;

    /* Initialize sbrec_port_binding_col_options. */
    c = &sbrec_port_binding_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_options;
    c->unparse = sbrec_port_binding_unparse_options;

    /* Initialize sbrec_port_binding_col_parent_port. */
    c = &sbrec_port_binding_col_parent_port;
    c->name = "parent_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_parent_port;
    c->unparse = sbrec_port_binding_unparse_parent_port;

    /* Initialize sbrec_port_binding_col_tag. */
    c = &sbrec_port_binding_col_tag;
    c->name = "tag";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_tag;
    c->unparse = sbrec_port_binding_unparse_tag;

    /* Initialize sbrec_port_binding_col_tunnel_key. */
    c = &sbrec_port_binding_col_tunnel_key;
    c->name = "tunnel_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(32767);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_tunnel_key;
    c->unparse = sbrec_port_binding_unparse_tunnel_key;

    /* Initialize sbrec_port_binding_col_type. */
    c = &sbrec_port_binding_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = sbrec_port_binding_parse_type;
    c->unparse = sbrec_port_binding_unparse_type;
}

struct ovsdb_idl_table_class sbrec_table_classes[SBREC_N_TABLES] = {
    {"Chassis", true,
     sbrec_chassis_columns, ARRAY_SIZE(sbrec_chassis_columns),
     sizeof(struct sbrec_chassis), sbrec_chassis_init__},
    {"Datapath_Binding", true,
     sbrec_datapath_binding_columns, ARRAY_SIZE(sbrec_datapath_binding_columns),
     sizeof(struct sbrec_datapath_binding), sbrec_datapath_binding_init__},
    {"Encap", false,
     sbrec_encap_columns, ARRAY_SIZE(sbrec_encap_columns),
     sizeof(struct sbrec_encap), sbrec_encap_init__},
    {"Logical_Flow", true,
     sbrec_logical_flow_columns, ARRAY_SIZE(sbrec_logical_flow_columns),
     sizeof(struct sbrec_logical_flow), sbrec_logical_flow_init__},
    {"Multicast_Group", true,
     sbrec_multicast_group_columns, ARRAY_SIZE(sbrec_multicast_group_columns),
     sizeof(struct sbrec_multicast_group), sbrec_multicast_group_init__},
    {"Port_Binding", true,
     sbrec_port_binding_columns, ARRAY_SIZE(sbrec_port_binding_columns),
     sizeof(struct sbrec_port_binding), sbrec_port_binding_init__},
};

struct ovsdb_idl_class sbrec_idl_class = {
    "OVN_Southbound", sbrec_table_classes, ARRAY_SIZE(sbrec_table_classes)
};

void
sbrec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    sbrec_chassis_columns_init();
    sbrec_datapath_binding_columns_init();
    sbrec_encap_columns_init();
    sbrec_logical_flow_columns_init();
    sbrec_multicast_group_columns_init();
    sbrec_port_binding_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
sbrec_get_db_version(void)
{
    return "1.0.0";
}

