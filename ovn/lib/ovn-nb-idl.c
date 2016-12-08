/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "ovn/lib/ovn-nb-idl.h"
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


static struct nbrec_acl *
nbrec_acl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_acl, header_) : NULL;
}

static struct nbrec_logical_port *
nbrec_logical_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_port, header_) : NULL;
}

static struct nbrec_logical_router *
nbrec_logical_router_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router, header_) : NULL;
}

static struct nbrec_logical_router_port *
nbrec_logical_router_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_router_port, header_) : NULL;
}

static struct nbrec_logical_switch *
nbrec_logical_switch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct nbrec_logical_switch, header_) : NULL;
}

/* ACL table. */

static void
nbrec_acl_parse_action(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->action = datum->keys[0].string;
    } else {
        row->action = "";
    }
}

static void
nbrec_acl_parse_direction(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->direction = datum->keys[0].string;
    } else {
        row->direction = "";
    }
}

static void
nbrec_acl_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);
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
nbrec_acl_parse_log(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->log = datum->keys[0].boolean;
    } else {
        row->log = false;
    }
}

static void
nbrec_acl_parse_match(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->match = datum->keys[0].string;
    } else {
        row->match = "";
    }
}

static void
nbrec_acl_parse_priority(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->priority = datum->keys[0].integer;
    } else {
        row->priority = 0;
    }
}

static void
nbrec_acl_unparse_action(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_direction(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_acl *row = nbrec_acl_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_acl_unparse_log(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_match(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_unparse_priority(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_acl_init__(struct ovsdb_idl_row *row)
{
    nbrec_acl_init(nbrec_acl_cast(row));
}

/* Clears the contents of 'row' in table "ACL". */
void
nbrec_acl_init(struct nbrec_acl *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "ACL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_acl *
nbrec_acl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_acl_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_ACL], uuid));
}

/* Returns a row in table "ACL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_acl *
nbrec_acl_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_ACL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_acl *
nbrec_acl_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_ACL]);
}

unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_acl *
nbrec_acl_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_ACL]));
}

const struct nbrec_acl
*nbrec_acl_track_get_next(const struct nbrec_acl *row)
{
    return nbrec_acl_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "ACL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_delete(const struct nbrec_acl *row)
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
struct nbrec_acl *
nbrec_acl_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_acl_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_ACL], NULL));
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
 *     nbrec_acl_insert()).
 *
 *   - If "action" has already been modified (with
 *     nbrec_acl_set_action()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_action() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_action(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_ACTION]);
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
 *     nbrec_acl_insert()).
 *
 *   - If "direction" has already been modified (with
 *     nbrec_acl_set_direction()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_direction() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_direction(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION]);
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
 *     nbrec_acl_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_acl_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_external_ids(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "log" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "log" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "log" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "log" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_acl_insert()).
 *
 *   - If "log" has already been modified (with
 *     nbrec_acl_set_log()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_log() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_log(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_LOG]);
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
 *     nbrec_acl_insert()).
 *
 *   - If "match" has already been modified (with
 *     nbrec_acl_set_match()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_match() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_match(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_MATCH]);
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
 *     nbrec_acl_insert()).
 *
 *   - If "priority" has already been modified (with
 *     nbrec_acl_set_priority()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_acl_set_priority() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_acl_verify_priority(const struct nbrec_acl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY]);
}

/* Returns the "action" column's value from the "ACL" table in 'row'
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
 * directly through the "action" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_action(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_action);
}

/* Returns the "direction" column's value from the "ACL" table in 'row'
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
 * directly through the "direction" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_direction(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_direction);
}

/* Returns the "external_ids" column's value from the "ACL" table in 'row'
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
 * directly through the "external_ids" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_external_ids(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_external_ids);
}

/* Returns the "log" column's value from the "ACL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes log's
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
 * directly through the "log" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_log(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_log);
}

/* Returns the "match" column's value from the "ACL" table in 'row'
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
 * directly through the "match" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_match(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_match);
}

/* Returns the "priority" column's value from the "ACL" table in 'row'
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
 * directly through the "priority" member in nbrec_acl. */
const struct ovsdb_datum *
nbrec_acl_get_priority(const struct nbrec_acl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_acl_col_priority);
}

/* Sets the "action" column from the "ACL" table in 'row' to
 * 'action'.
 *
 * Argument constraints: one of "allow-related", "drop", "allow", or "reject"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_action(const struct nbrec_acl *row, const char *action)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, action);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_ACTION], &datum);
}

/* Sets the "direction" column from the "ACL" table in 'row' to
 * 'direction'.
 *
 * Argument constraints: either "to-lport" or "from-lport"
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_direction(const struct nbrec_acl *row, const char *direction)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, direction);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_DIRECTION], &datum);
}

/* Sets the "external_ids" column's value from the "ACL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_acl_set_external_ids(const struct nbrec_acl *row, const struct smap *external_ids)
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
                        &nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "log" column from the "ACL" table in 'row' to
 * 'log'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_log(const struct nbrec_acl *row, bool log)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = log;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_LOG], &datum);
}

/* Sets the "match" column from the "ACL" table in 'row' to
 * 'match'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_match(const struct nbrec_acl *row, const char *match)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, match);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_MATCH], &datum);
}

/* Sets the "priority" column from the "ACL" table in 'row' to
 * 'priority'.
 *
 * Argument constraints: in range 0 to 32,767
 *
 * The caller retains ownership of the arguments. */
void
nbrec_acl_set_priority(const struct nbrec_acl *row, int64_t priority)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = priority;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_acl_columns[NBREC_ACL_COL_PRIORITY], &datum);
}

struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

static void
nbrec_acl_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_acl_col_action. */
    c = &nbrec_acl_col_action;
    c->name = "action";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 4;
    c->type.key.enum_->keys = xmalloc(4 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("allow");
    c->type.key.enum_->keys[1].string = xstrdup("allow-related");
    c->type.key.enum_->keys[2].string = xstrdup("drop");
    c->type.key.enum_->keys[3].string = xstrdup("reject");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_action;
    c->unparse = nbrec_acl_unparse_action;

    /* Initialize nbrec_acl_col_direction. */
    c = &nbrec_acl_col_direction;
    c->name = "direction";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("from-lport");
    c->type.key.enum_->keys[1].string = xstrdup("to-lport");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_direction;
    c->unparse = nbrec_acl_unparse_direction;

    /* Initialize nbrec_acl_col_external_ids. */
    c = &nbrec_acl_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_acl_parse_external_ids;
    c->unparse = nbrec_acl_unparse_external_ids;

    /* Initialize nbrec_acl_col_log. */
    c = &nbrec_acl_col_log;
    c->name = "log";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_log;
    c->unparse = nbrec_acl_unparse_log;

    /* Initialize nbrec_acl_col_match. */
    c = &nbrec_acl_col_match;
    c->name = "match";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_match;
    c->unparse = nbrec_acl_unparse_match;

    /* Initialize nbrec_acl_col_priority. */
    c = &nbrec_acl_col_priority;
    c->name = "priority";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(32767);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_acl_parse_priority;
    c->unparse = nbrec_acl_unparse_priority;
}

/* Logical_Port table. */

static void
nbrec_logical_port_parse_addresses(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->addresses = NULL;
    row->n_addresses = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_addresses) {
            row->addresses = xmalloc(datum->n * sizeof *row->addresses);
        }
        row->addresses[row->n_addresses] = datum->keys[i].string;
        row->n_addresses++;
    }
}

static void
nbrec_logical_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof_bool);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
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
nbrec_logical_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_port_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
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
nbrec_logical_port_parse_parent_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->parent_name = datum->keys[0].string;
    } else {
        row->parent_name = NULL;
    }
}

static void
nbrec_logical_port_parse_port_security(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->port_security = NULL;
    row->n_port_security = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_port_security) {
            row->port_security = xmalloc(datum->n * sizeof *row->port_security);
        }
        row->port_security[row->n_port_security] = datum->keys[i].string;
        row->n_port_security++;
    }
}

static void
nbrec_logical_port_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
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
nbrec_logical_port_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
nbrec_logical_port_parse_up(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->up = NULL;
    row->n_up = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_up) {
            row->up = xmalloc(n * sizeof_bool);
        }
        row->up[row->n_up] = datum->keys[i].boolean;
        row->n_up++;
    }
}

static void
nbrec_logical_port_unparse_addresses(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    free(row->addresses);
}

static void
nbrec_logical_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    free(row->enabled);
}

static void
nbrec_logical_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_port_unparse_options(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
nbrec_logical_port_unparse_parent_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_port_unparse_port_security(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    free(row->port_security);
}

static void
nbrec_logical_port_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    free(row->tag);
}

static void
nbrec_logical_port_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_port_unparse_up(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_port *row = nbrec_logical_port_cast(row_);

    ovs_assert(inited);
    free(row->up);
}

static void
nbrec_logical_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_port_init(nbrec_logical_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Port". */
void
nbrec_logical_port_init(struct nbrec_logical_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->options);
}

/* Searches table "Logical_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_port *
nbrec_logical_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT], uuid));
}

/* Returns a row in table "Logical_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_port *
nbrec_logical_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_port *
nbrec_logical_port_next(const struct nbrec_logical_port *row)
{
    return nbrec_logical_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT]);
}

unsigned int nbrec_logical_port_row_get_seqno(const struct nbrec_logical_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_port *
nbrec_logical_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT]));
}

const struct nbrec_logical_port
*nbrec_logical_port_track_get_next(const struct nbrec_logical_port *row)
{
    return nbrec_logical_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_delete(const struct nbrec_logical_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_port *
nbrec_logical_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT], NULL));
}

/* Causes the original contents of column "addresses" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "addresses" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "addresses" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "addresses" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_port_insert()).
 *
 *   - If "addresses" has already been modified (with
 *     nbrec_logical_port_set_addresses()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_addresses() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_addresses(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ADDRESSES]);
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_enabled(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ENABLED]);
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
 *     nbrec_logical_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_external_ids(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_EXTERNAL_IDS]);
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
 *     nbrec_logical_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_name(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_NAME]);
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
 *     nbrec_logical_port_insert()).
 *
 *   - If "options" has already been modified (with
 *     nbrec_logical_port_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_options(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_OPTIONS]);
}

/* Causes the original contents of column "parent_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "parent_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "parent_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "parent_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_port_insert()).
 *
 *   - If "parent_name" has already been modified (with
 *     nbrec_logical_port_set_parent_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_parent_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_parent_name(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PARENT_NAME]);
}

/* Causes the original contents of column "port_security" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "port_security" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "port_security" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "port_security" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_port_insert()).
 *
 *   - If "port_security" has already been modified (with
 *     nbrec_logical_port_set_port_security()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_port_security() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_port_security(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PORT_SECURITY]);
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
 *     nbrec_logical_port_insert()).
 *
 *   - If "tag" has already been modified (with
 *     nbrec_logical_port_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_tag(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TAG]);
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
 *     nbrec_logical_port_insert()).
 *
 *   - If "type" has already been modified (with
 *     nbrec_logical_port_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_type(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TYPE]);
}

/* Causes the original contents of column "up" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "up" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "up" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "up" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_port_insert()).
 *
 *   - If "up" has already been modified (with
 *     nbrec_logical_port_set_up()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_port_set_up() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_port_verify_up(const struct nbrec_logical_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_UP]);
}

/* Returns the "addresses" column's value from the "Logical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes addresses's
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
 * directly through the "addresses" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_addresses(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_addresses);
}

/* Returns the "enabled" column's value from the "Logical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
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
 * directly through the "enabled" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_enabled(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Port" table in 'row'
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
 * directly through the "external_ids" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_external_ids(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_external_ids);
}

/* Returns the "name" column's value from the "Logical_Port" table in 'row'
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
 * directly through the "name" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_name(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_name);
}

/* Returns the "options" column's value from the "Logical_Port" table in 'row'
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
 * directly through the "options" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_options(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_options);
}

/* Returns the "parent_name" column's value from the "Logical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes parent_name's
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
 * directly through the "parent_name" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_parent_name(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_parent_name);
}

/* Returns the "port_security" column's value from the "Logical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes port_security's
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
 * directly through the "port_security" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_port_security(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_port_security);
}

/* Returns the "tag" column's value from the "Logical_Port" table in 'row'
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
 * directly through the "tag" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_tag(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_tag);
}

/* Returns the "type" column's value from the "Logical_Port" table in 'row'
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
 * directly through the "type" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_type(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_type);
}

/* Returns the "up" column's value from the "Logical_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes up's
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
 * directly through the "up" member in nbrec_logical_port. */
const struct ovsdb_datum *
nbrec_logical_port_get_up(const struct nbrec_logical_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_port_col_up);
}

/* Sets the "addresses" column from the "Logical_Port" table in 'row' to
 * the 'addresses' set with 'n_addresses' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_addresses(const struct nbrec_logical_port *row, const char **addresses, size_t n_addresses)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_addresses;
    datum.keys = n_addresses ? xmalloc(n_addresses * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_addresses; i++) {
        datum.keys[i].string = xstrdup(addresses[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ADDRESSES], &datum);
}

/* Sets the "enabled" column from the "Logical_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_enabled(const struct nbrec_logical_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ENABLED], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_port_set_external_ids(const struct nbrec_logical_port *row, const struct smap *external_ids)
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
                        &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Logical_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_name(const struct nbrec_logical_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_NAME], &datum);
}

/* Sets the "options" column's value from the "Logical_Port" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
nbrec_logical_port_set_options(const struct nbrec_logical_port *row, const struct smap *options)
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
                        &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_OPTIONS],
                        &datum);
}


/* Sets the "parent_name" column from the "Logical_Port" table in 'row' to
 * the 'parent_name' set.
 *
 * If "parent_name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_parent_name(const struct nbrec_logical_port *row, const char *parent_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (parent_name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, parent_name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PARENT_NAME], &datum);
}

/* Sets the "port_security" column from the "Logical_Port" table in 'row' to
 * the 'port_security' set with 'n_port_security' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_port_security(const struct nbrec_logical_port *row, const char **port_security, size_t n_port_security)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_port_security;
    datum.keys = n_port_security ? xmalloc(n_port_security * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_port_security; i++) {
        datum.keys[i].string = xstrdup(port_security[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PORT_SECURITY], &datum);
}

/* Sets the "tag" column from the "Logical_Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_tag(const struct nbrec_logical_port *row, const int64_t *tag, size_t n_tag)
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
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TAG], &datum);
}

/* Sets the "type" column from the "Logical_Port" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_type(const struct nbrec_logical_port *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TYPE], &datum);
}

/* Sets the "up" column from the "Logical_Port" table in 'row' to
 * the 'up' set with 'n_up' entries.
 *
 * 'n_up' may be 0 or 1; if it is 0, then 'up'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_port_set_up(const struct nbrec_logical_port *row, const bool *up, size_t n_up)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_up) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *up;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_UP], &datum);
}

struct ovsdb_idl_column nbrec_logical_port_columns[NBREC_LOGICAL_PORT_N_COLUMNS];

static void
nbrec_logical_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_port_col_addresses. */
    c = &nbrec_logical_port_col_addresses;
    c->name = "addresses";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_addresses;
    c->unparse = nbrec_logical_port_unparse_addresses;

    /* Initialize nbrec_logical_port_col_enabled. */
    c = &nbrec_logical_port_col_enabled;
    c->name = "enabled";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_enabled;
    c->unparse = nbrec_logical_port_unparse_enabled;

    /* Initialize nbrec_logical_port_col_external_ids. */
    c = &nbrec_logical_port_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_external_ids;
    c->unparse = nbrec_logical_port_unparse_external_ids;

    /* Initialize nbrec_logical_port_col_name. */
    c = &nbrec_logical_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_name;
    c->unparse = nbrec_logical_port_unparse_name;

    /* Initialize nbrec_logical_port_col_options. */
    c = &nbrec_logical_port_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_options;
    c->unparse = nbrec_logical_port_unparse_options;

    /* Initialize nbrec_logical_port_col_parent_name. */
    c = &nbrec_logical_port_col_parent_name;
    c->name = "parent_name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_parent_name;
    c->unparse = nbrec_logical_port_unparse_parent_name;

    /* Initialize nbrec_logical_port_col_port_security. */
    c = &nbrec_logical_port_col_port_security;
    c->name = "port_security";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_port_security;
    c->unparse = nbrec_logical_port_unparse_port_security;

    /* Initialize nbrec_logical_port_col_tag. */
    c = &nbrec_logical_port_col_tag;
    c->name = "tag";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_tag;
    c->unparse = nbrec_logical_port_unparse_tag;

    /* Initialize nbrec_logical_port_col_type. */
    c = &nbrec_logical_port_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_type;
    c->unparse = nbrec_logical_port_unparse_type;

    /* Initialize nbrec_logical_port_col_up. */
    c = &nbrec_logical_port_col_up;
    c->name = "up";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_port_parse_up;
    c->unparse = nbrec_logical_port_unparse_up;
}

/* Logical_Router table. */

static void
nbrec_logical_router_parse_default_gw(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->default_gw = datum->keys[0].string;
    } else {
        row->default_gw = NULL;
    }
}

static void
nbrec_logical_router_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
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
nbrec_logical_router_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_logical_router_port *keyRow = nbrec_logical_router_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], &datum->keys[i].uuid));
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
nbrec_logical_router_unparse_default_gw(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router *row = nbrec_logical_router_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
nbrec_logical_router_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_init(nbrec_logical_router_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router". */
void
nbrec_logical_router_init(struct nbrec_logical_router *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Router" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router *
nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], uuid));
}

/* Returns a row in table "Logical_Router" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router *
nbrec_logical_router_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router *
nbrec_logical_router_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]);
}

unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router *
nbrec_logical_router_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER]));
}

const struct nbrec_logical_router
*nbrec_logical_router_track_get_next(const struct nbrec_logical_router *row)
{
    return nbrec_logical_router_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_delete(const struct nbrec_logical_router *row)
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
struct nbrec_logical_router *
nbrec_logical_router_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER], NULL));
}

/* Causes the original contents of column "default_gw" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "default_gw" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "default_gw" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "default_gw" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_insert()).
 *
 *   - If "default_gw" has already been modified (with
 *     nbrec_logical_router_set_default_gw()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_default_gw() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_default_gw(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_DEFAULT_GW]);
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
 *     nbrec_logical_router_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS]);
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
 *     nbrec_logical_router_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_name(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME]);
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
 *     nbrec_logical_router_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_router_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_verify_ports(const struct nbrec_logical_router *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS]);
}

/* Returns the "default_gw" column's value from the "Logical_Router" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes default_gw's
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
 * directly through the "default_gw" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_default_gw(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_default_gw);
}

/* Returns the "external_ids" column's value from the "Logical_Router" table in 'row'
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
 * directly through the "external_ids" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_external_ids);
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
 * directly through the "name" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_name(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_name);
}

/* Returns the "ports" column's value from the "Logical_Router" table in 'row'
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
 * directly through the "ports" member in nbrec_logical_router. */
const struct ovsdb_datum *
nbrec_logical_router_get_ports(const struct nbrec_logical_router *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_col_ports);
}

/* Sets the "default_gw" column from the "Logical_Router" table in 'row' to
 * the 'default_gw' set.
 *
 * If "default_gw" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_default_gw(const struct nbrec_logical_router *row, const char *default_gw)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (default_gw) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, default_gw);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_DEFAULT_GW], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *row, const struct smap *external_ids)
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
                        &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Logical_Router" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_name(const struct nbrec_logical_router *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME], &datum);
}

/* Sets the "ports" column from the "Logical_Router" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_set_ports(const struct nbrec_logical_router *row, struct nbrec_logical_router_port **ports, size_t n_ports)
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
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS], &datum);
}

struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

static void
nbrec_logical_router_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_router_col_default_gw. */
    c = &nbrec_logical_router_col_default_gw;
    c->name = "default_gw";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_default_gw;
    c->unparse = nbrec_logical_router_unparse_default_gw;

    /* Initialize nbrec_logical_router_col_external_ids. */
    c = &nbrec_logical_router_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_external_ids;
    c->unparse = nbrec_logical_router_unparse_external_ids;

    /* Initialize nbrec_logical_router_col_name. */
    c = &nbrec_logical_router_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_name;
    c->unparse = nbrec_logical_router_unparse_name;

    /* Initialize nbrec_logical_router_col_ports. */
    c = &nbrec_logical_router_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Router_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_parse_ports;
    c->unparse = nbrec_logical_router_unparse_ports;
}

/* Logical_Router_Port table. */

static void
nbrec_logical_router_port_parse_enabled(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enabled = NULL;
    row->n_enabled = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enabled) {
            row->enabled = xmalloc(n * sizeof_bool);
        }
        row->enabled[row->n_enabled] = datum->keys[i].boolean;
        row->n_enabled++;
    }
}

static void
nbrec_logical_router_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);
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
nbrec_logical_router_port_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = "";
    }
}

static void
nbrec_logical_router_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_router_port_parse_network(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->network = datum->keys[0].string;
    } else {
        row->network = "";
    }
}

static void
nbrec_logical_router_port_parse_peer(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->peer = nbrec_logical_router_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], &datum->keys[0].uuid));
    } else {
        row->peer = NULL;
    }
}

static void
nbrec_logical_router_port_unparse_enabled(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    free(row->enabled);
}

static void
nbrec_logical_router_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_router_port *row = nbrec_logical_router_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_router_port_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_network(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_unparse_peer(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_router_port_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_router_port_init(nbrec_logical_router_port_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Router_Port". */
void
nbrec_logical_router_port_init(struct nbrec_logical_router_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Router_Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], uuid));
}

/* Returns a row in table "Logical_Router_Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_router_port *
nbrec_logical_router_port_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]);
}

unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_router_port *
nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT]));
}

const struct nbrec_logical_router_port
*nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *row)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Router_Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Logical_Router_Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct nbrec_logical_router_port *
nbrec_logical_router_port_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_router_port_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT], NULL));
}

/* Causes the original contents of column "enabled" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enabled" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enabled" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enabled" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "enabled" has already been modified (with
 *     nbrec_logical_router_port_set_enabled()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_enabled() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED]);
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
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_router_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS]);
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
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "mac" has already been modified (with
 *     nbrec_logical_router_port_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC]);
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
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_router_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME]);
}

/* Causes the original contents of column "network" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "network" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "network" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "network" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "network" has already been modified (with
 *     nbrec_logical_router_port_set_network()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_network() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_network(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORK]);
}

/* Causes the original contents of column "peer" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "peer" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "peer" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "peer" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_router_port_insert()).
 *
 *   - If "peer" has already been modified (with
 *     nbrec_logical_router_port_set_peer()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_router_port_set_peer() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER]);
}

/* Returns the "enabled" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enabled's
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
 * directly through the "enabled" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_enabled);
}

/* Returns the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
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
 * directly through the "external_ids" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_external_ids);
}

/* Returns the "mac" column's value from the "Logical_Router_Port" table in 'row'
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
 * directly through the "mac" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_mac);
}

/* Returns the "name" column's value from the "Logical_Router_Port" table in 'row'
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
 * directly through the "name" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_name);
}

/* Returns the "network" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes network's
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
 * directly through the "network" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_network(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_network);
}

/* Returns the "peer" column's value from the "Logical_Router_Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes peer's
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
 * directly through the "peer" member in nbrec_logical_router_port. */
const struct ovsdb_datum *
nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_router_port_col_peer);
}

/* Sets the "enabled" column from the "Logical_Router_Port" table in 'row' to
 * the 'enabled' set with 'n_enabled' entries.
 *
 * 'n_enabled' may be 0 or 1; if it is 0, then 'enabled'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *row, const bool *enabled, size_t n_enabled)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enabled) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enabled;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Router_Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *row, const struct smap *external_ids)
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
                        &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "mac" column from the "Logical_Router_Port" table in 'row' to
 * 'mac'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, mac);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC], &datum);
}

/* Sets the "name" column from the "Logical_Router_Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME], &datum);
}

/* Sets the "network" column from the "Logical_Router_Port" table in 'row' to
 * 'network'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_network(const struct nbrec_logical_router_port *row, const char *network)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, network);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORK], &datum);
}

/* Sets the "peer" column from the "Logical_Router_Port" table in 'row' to
 * the 'peer' set.
 *
 * If "peer" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *row, const struct nbrec_logical_router_port *peer)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (peer) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = peer->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER], &datum);
}

struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

static void
nbrec_logical_router_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_router_port_col_enabled. */
    c = &nbrec_logical_router_port_col_enabled;
    c->name = "enabled";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_enabled;
    c->unparse = nbrec_logical_router_port_unparse_enabled;

    /* Initialize nbrec_logical_router_port_col_external_ids. */
    c = &nbrec_logical_router_port_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_external_ids;
    c->unparse = nbrec_logical_router_port_unparse_external_ids;

    /* Initialize nbrec_logical_router_port_col_mac. */
    c = &nbrec_logical_router_port_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_mac;
    c->unparse = nbrec_logical_router_port_unparse_mac;

    /* Initialize nbrec_logical_router_port_col_name. */
    c = &nbrec_logical_router_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_name;
    c->unparse = nbrec_logical_router_port_unparse_name;

    /* Initialize nbrec_logical_router_port_col_network. */
    c = &nbrec_logical_router_port_col_network;
    c->name = "network";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_network;
    c->unparse = nbrec_logical_router_port_unparse_network;

    /* Initialize nbrec_logical_router_port_col_peer. */
    c = &nbrec_logical_router_port_col_peer;
    c->name = "peer";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Router_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_router_port_parse_peer;
    c->unparse = nbrec_logical_router_port_unparse_peer;
}

/* Logical_Switch table. */

static void
nbrec_logical_switch_parse_acls(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->acls = NULL;
    row->n_acls = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_acl *keyRow = nbrec_acl_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_ACL], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_acls) {
                row->acls = xmalloc(datum->n * sizeof *row->acls);
            }
            row->acls[row->n_acls] = keyRow;
            row->n_acls++;
        }
    }
}

static void
nbrec_logical_switch_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
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
nbrec_logical_switch_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
nbrec_logical_switch_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct nbrec_logical_port *keyRow = nbrec_logical_port_cast(ovsdb_idl_get_row_arc(row_, &nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT], &datum->keys[i].uuid));
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
nbrec_logical_switch_unparse_acls(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->acls);
}

static void
nbrec_logical_switch_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
nbrec_logical_switch_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
nbrec_logical_switch_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct nbrec_logical_switch *row = nbrec_logical_switch_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
nbrec_logical_switch_init__(struct ovsdb_idl_row *row)
{
    nbrec_logical_switch_init(nbrec_logical_switch_cast(row));
}

/* Clears the contents of 'row' in table "Logical_Switch". */
void
nbrec_logical_switch_init(struct nbrec_logical_switch *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Logical_Switch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct nbrec_logical_switch *
nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return nbrec_logical_switch_cast(ovsdb_idl_get_row_for_uuid(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], uuid));
}

/* Returns a row in table "Logical_Switch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct nbrec_logical_switch *
nbrec_logical_switch_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_first_row(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct nbrec_logical_switch *
nbrec_logical_switch_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]);
}

unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct nbrec_logical_switch *
nbrec_logical_switch_track_get_first(const struct ovsdb_idl *idl)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_first(idl, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH]));
}

const struct nbrec_logical_switch
*nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *row)
{
    return nbrec_logical_switch_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "Logical_Switch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_delete(const struct nbrec_logical_switch *row)
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
struct nbrec_logical_switch *
nbrec_logical_switch_insert(struct ovsdb_idl_txn *txn)
{
    return nbrec_logical_switch_cast(ovsdb_idl_txn_insert(txn, &nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH], NULL));
}

/* Causes the original contents of column "acls" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "acls" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "acls" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "acls" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     nbrec_logical_switch_insert()).
 *
 *   - If "acls" has already been modified (with
 *     nbrec_logical_switch_set_acls()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_acls() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS]);
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
 *     nbrec_logical_switch_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     nbrec_logical_switch_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS]);
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
 *     nbrec_logical_switch_insert()).
 *
 *   - If "name" has already been modified (with
 *     nbrec_logical_switch_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME]);
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
 *     nbrec_logical_switch_insert()).
 *
 *   - If "ports" has already been modified (with
 *     nbrec_logical_switch_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * nbrec_logical_switch_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS]);
}

/* Returns the "acls" column's value from the "Logical_Switch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes acls's
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
 * directly through the "acls" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_acls);
}

/* Returns the "external_ids" column's value from the "Logical_Switch" table in 'row'
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
 * directly through the "external_ids" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_external_ids);
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
 * directly through the "name" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_name(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_name);
}

/* Returns the "ports" column's value from the "Logical_Switch" table in 'row'
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
 * directly through the "ports" member in nbrec_logical_switch. */
const struct ovsdb_datum *
nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &nbrec_logical_switch_col_ports);
}

/* Sets the "acls" column from the "Logical_Switch" table in 'row' to
 * the 'acls' set with 'n_acls' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *row, struct nbrec_acl **acls, size_t n_acls)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_acls;
    datum.keys = n_acls ? xmalloc(n_acls * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_acls; i++) {
        datum.keys[i].uuid = acls[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS], &datum);
}

/* Sets the "external_ids" column's value from the "Logical_Switch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *row, const struct smap *external_ids)
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
                        &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Logical_Switch" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_name(const struct nbrec_logical_switch *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME], &datum);
}

/* Sets the "ports" column from the "Logical_Switch" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *row, struct nbrec_logical_port **ports, size_t n_ports)
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
    ovsdb_idl_txn_write(&row->header_, &nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS], &datum);
}

struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

static void
nbrec_logical_switch_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize nbrec_logical_switch_col_acls. */
    c = &nbrec_logical_switch_col_acls;
    c->name = "acls";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "ACL";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_acls;
    c->unparse = nbrec_logical_switch_unparse_acls;

    /* Initialize nbrec_logical_switch_col_external_ids. */
    c = &nbrec_logical_switch_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_external_ids;
    c->unparse = nbrec_logical_switch_unparse_external_ids;

    /* Initialize nbrec_logical_switch_col_name. */
    c = &nbrec_logical_switch_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_name;
    c->unparse = nbrec_logical_switch_unparse_name;

    /* Initialize nbrec_logical_switch_col_ports. */
    c = &nbrec_logical_switch_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Logical_Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = nbrec_logical_switch_parse_ports;
    c->unparse = nbrec_logical_switch_unparse_ports;
}

struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES] = {
    {"ACL", false,
     nbrec_acl_columns, ARRAY_SIZE(nbrec_acl_columns),
     sizeof(struct nbrec_acl), nbrec_acl_init__},
    {"Logical_Port", false,
     nbrec_logical_port_columns, ARRAY_SIZE(nbrec_logical_port_columns),
     sizeof(struct nbrec_logical_port), nbrec_logical_port_init__},
    {"Logical_Router", true,
     nbrec_logical_router_columns, ARRAY_SIZE(nbrec_logical_router_columns),
     sizeof(struct nbrec_logical_router), nbrec_logical_router_init__},
    {"Logical_Router_Port", false,
     nbrec_logical_router_port_columns, ARRAY_SIZE(nbrec_logical_router_port_columns),
     sizeof(struct nbrec_logical_router_port), nbrec_logical_router_port_init__},
    {"Logical_Switch", true,
     nbrec_logical_switch_columns, ARRAY_SIZE(nbrec_logical_switch_columns),
     sizeof(struct nbrec_logical_switch), nbrec_logical_switch_init__},
};

struct ovsdb_idl_class nbrec_idl_class = {
    "OVN_Northbound", nbrec_table_classes, ARRAY_SIZE(nbrec_table_classes)
};

void
nbrec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    nbrec_acl_columns_init();
    nbrec_logical_port_columns_init();
    nbrec_logical_router_columns_init();
    nbrec_logical_router_port_columns_init();
    nbrec_logical_switch_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
nbrec_get_db_version(void)
{
    return "2.0.1";
}

