/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "tests/idltest.h"
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


static struct idltest_link1 *
idltest_link1_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_link1, header_) : NULL;
}

static struct idltest_link2 *
idltest_link2_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_link2, header_) : NULL;
}

static struct idltest_simple *
idltest_simple_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct idltest_simple, header_) : NULL;
}

/* link1 table. */

static void
idltest_link1_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_link1_parse_k(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->k = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_classes[IDLTEST_TABLE_LINK1], &datum->keys[0].uuid));
    } else {
        row->k = NULL;
    }
}

static void
idltest_link1_parse_ka(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ka = NULL;
    row->n_ka = 0;
    for (i = 0; i < datum->n; i++) {
        struct idltest_link1 *keyRow = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_classes[IDLTEST_TABLE_LINK1], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_ka) {
                row->ka = xmalloc(datum->n * sizeof *row->ka);
            }
            row->ka[row->n_ka] = keyRow;
            row->n_ka++;
        }
    }
}

static void
idltest_link1_parse_l2(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->l2 = idltest_link2_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_classes[IDLTEST_TABLE_LINK2], &datum->keys[0].uuid));
    } else {
        row->l2 = NULL;
    }
}

static void
idltest_link1_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_unparse_k(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_unparse_ka(struct ovsdb_idl_row *row_)
{
    struct idltest_link1 *row = idltest_link1_cast(row_);

    ovs_assert(inited);
    free(row->ka);
}

static void
idltest_link1_unparse_l2(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link1_init__(struct ovsdb_idl_row *row)
{
    idltest_link1_init(idltest_link1_cast(row));
}

/* Clears the contents of 'row' in table "link1". */
void
idltest_link1_init(struct idltest_link1 *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "link1" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_link1 *
idltest_link1_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_link1_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_classes[IDLTEST_TABLE_LINK1], uuid));
}

/* Returns a row in table "link1" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_link1 *
idltest_link1_first(const struct ovsdb_idl *idl)
{
    return idltest_link1_cast(ovsdb_idl_first_row(idl, &idltest_table_classes[IDLTEST_TABLE_LINK1]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_link1 *
idltest_link1_next(const struct idltest_link1 *row)
{
    return idltest_link1_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_link1_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_classes[IDLTEST_TABLE_LINK1]);
}

unsigned int idltest_link1_row_get_seqno(const struct idltest_link1 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_link1 *
idltest_link1_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_link1_cast(ovsdb_idl_track_get_first(idl, &idltest_table_classes[IDLTEST_TABLE_LINK1]));
}

const struct idltest_link1
*idltest_link1_track_get_next(const struct idltest_link1 *row)
{
    return idltest_link1_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "link1".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_delete(const struct idltest_link1 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "link1" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_link1 *
idltest_link1_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_link1_cast(ovsdb_idl_txn_insert(txn, &idltest_table_classes[IDLTEST_TABLE_LINK1], NULL));
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_link1_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_i(const struct idltest_link1 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_I]);
}

/* Causes the original contents of column "k" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "k" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "k" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "k" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "k" has already been modified (with
 *     idltest_link1_set_k()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_k() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_k(const struct idltest_link1 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_K]);
}

/* Causes the original contents of column "ka" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ka" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ka" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ka" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "ka" has already been modified (with
 *     idltest_link1_set_ka()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_ka() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_ka(const struct idltest_link1 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_KA]);
}

/* Causes the original contents of column "l2" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "l2" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "l2" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "l2" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link1_insert()).
 *
 *   - If "l2" has already been modified (with
 *     idltest_link1_set_l2()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link1_set_l2() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link1_verify_l2(const struct idltest_link1 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_L2]);
}

/* Returns the "i" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
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
 * directly through the "i" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_i(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_i);
}

/* Returns the "k" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes k's
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
 * directly through the "k" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_k(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_k);
}

/* Returns the "ka" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ka's
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
 * directly through the "ka" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_ka(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_ka);
}

/* Returns the "l2" column's value from the "link1" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes l2's
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
 * directly through the "l2" member in idltest_link1. */
const struct ovsdb_datum *
idltest_link1_get_l2(const struct idltest_link1 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link1_col_l2);
}

/* Sets the "i" column from the "link1" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_i(const struct idltest_link1 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_I], &datum);
}

/* Sets the "k" column from the "link1" table in 'row' to
 * 'k'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_k(const struct idltest_link1 *row, const struct idltest_link1 *k)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = k->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_K], &datum);
}

/* Sets the "ka" column from the "link1" table in 'row' to
 * the 'ka' set with 'n_ka' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_ka(const struct idltest_link1 *row, struct idltest_link1 **ka, size_t n_ka)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ka;
    datum.keys = n_ka ? xmalloc(n_ka * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ka; i++) {
        datum.keys[i].uuid = ka[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_KA], &datum);
}

/* Sets the "l2" column from the "link1" table in 'row' to
 * the 'l2' set.
 *
 * If "l2" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link1_set_l2(const struct idltest_link1 *row, const struct idltest_link2 *l2)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (l2) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = l2->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link1_columns[IDLTEST_LINK1_COL_L2], &datum);
}

struct ovsdb_idl_column idltest_link1_columns[IDLTEST_LINK1_N_COLUMNS];

static void
idltest_link1_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize idltest_link1_col_i. */
    c = &idltest_link1_col_i;
    c->name = "i";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_link1_parse_i;
    c->unparse = idltest_link1_unparse_i;

    /* Initialize idltest_link1_col_k. */
    c = &idltest_link1_col_k;
    c->name = "k";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "link1";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_link1_parse_k;
    c->unparse = idltest_link1_unparse_k;

    /* Initialize idltest_link1_col_ka. */
    c = &idltest_link1_col_ka;
    c->name = "ka";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "link1";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = idltest_link1_parse_ka;
    c->unparse = idltest_link1_unparse_ka;

    /* Initialize idltest_link1_col_l2. */
    c = &idltest_link1_col_l2;
    c->name = "l2";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "link2";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_link1_parse_l2;
    c->unparse = idltest_link1_unparse_l2;
}

/* link2 table. */

static void
idltest_link2_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link2 *row = idltest_link2_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_link2_parse_l1(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_link2 *row = idltest_link2_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->l1 = idltest_link1_cast(ovsdb_idl_get_row_arc(row_, &idltest_table_classes[IDLTEST_TABLE_LINK1], &datum->keys[0].uuid));
    } else {
        row->l1 = NULL;
    }
}

static void
idltest_link2_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link2_unparse_l1(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_link2_init__(struct ovsdb_idl_row *row)
{
    idltest_link2_init(idltest_link2_cast(row));
}

/* Clears the contents of 'row' in table "link2". */
void
idltest_link2_init(struct idltest_link2 *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "link2" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_link2 *
idltest_link2_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_link2_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_classes[IDLTEST_TABLE_LINK2], uuid));
}

/* Returns a row in table "link2" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_link2 *
idltest_link2_first(const struct ovsdb_idl *idl)
{
    return idltest_link2_cast(ovsdb_idl_first_row(idl, &idltest_table_classes[IDLTEST_TABLE_LINK2]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_link2 *
idltest_link2_next(const struct idltest_link2 *row)
{
    return idltest_link2_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_link2_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_classes[IDLTEST_TABLE_LINK2]);
}

unsigned int idltest_link2_row_get_seqno(const struct idltest_link2 *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_link2 *
idltest_link2_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_link2_cast(ovsdb_idl_track_get_first(idl, &idltest_table_classes[IDLTEST_TABLE_LINK2]));
}

const struct idltest_link2
*idltest_link2_track_get_next(const struct idltest_link2 *row)
{
    return idltest_link2_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "link2".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_delete(const struct idltest_link2 *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "link2" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_link2 *
idltest_link2_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_link2_cast(ovsdb_idl_txn_insert(txn, &idltest_table_classes[IDLTEST_TABLE_LINK2], NULL));
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link2_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_link2_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link2_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_verify_i(const struct idltest_link2 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link2_columns[IDLTEST_LINK2_COL_I]);
}

/* Causes the original contents of column "l1" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "l1" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "l1" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "l1" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_link2_insert()).
 *
 *   - If "l1" has already been modified (with
 *     idltest_link2_set_l1()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_link2_set_l1() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_link2_verify_l1(const struct idltest_link2 *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_link2_columns[IDLTEST_LINK2_COL_L1]);
}

/* Returns the "i" column's value from the "link2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
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
 * directly through the "i" member in idltest_link2. */
const struct ovsdb_datum *
idltest_link2_get_i(const struct idltest_link2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_link2_col_i);
}

/* Returns the "l1" column's value from the "link2" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes l1's
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
 * directly through the "l1" member in idltest_link2. */
const struct ovsdb_datum *
idltest_link2_get_l1(const struct idltest_link2 *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_link2_col_l1);
}

/* Sets the "i" column from the "link2" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_set_i(const struct idltest_link2 *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link2_columns[IDLTEST_LINK2_COL_I], &datum);
}

/* Sets the "l1" column from the "link2" table in 'row' to
 * the 'l1' set.
 *
 * If "l1" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
idltest_link2_set_l1(const struct idltest_link2 *row, const struct idltest_link1 *l1)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (l1) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = l1->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_link2_columns[IDLTEST_LINK2_COL_L1], &datum);
}

struct ovsdb_idl_column idltest_link2_columns[IDLTEST_LINK2_N_COLUMNS];

static void
idltest_link2_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize idltest_link2_col_i. */
    c = &idltest_link2_col_i;
    c->name = "i";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_link2_parse_i;
    c->unparse = idltest_link2_unparse_i;

    /* Initialize idltest_link2_col_l1. */
    c = &idltest_link2_col_l1;
    c->name = "l1";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "link1";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_link2_parse_l1;
    c->unparse = idltest_link2_unparse_l1;
}

/* simple table. */

static void
idltest_simple_parse_b(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->b = datum->keys[0].boolean;
    } else {
        row->b = false;
    }
}

static void
idltest_simple_parse_ba(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->ba = NULL;
    row->n_ba = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_ba) {
            row->ba = xmalloc(n * sizeof_bool);
        }
        row->ba[row->n_ba] = datum->keys[i].boolean;
        row->n_ba++;
    }
}

static void
idltest_simple_parse_i(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->i = datum->keys[0].integer;
    } else {
        row->i = 0;
    }
}

static void
idltest_simple_parse_ia(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ia = NULL;
    row->n_ia = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_ia) {
            row->ia = xmalloc(datum->n * sizeof *row->ia);
        }
        row->ia[row->n_ia] = datum->keys[i].integer;
        row->n_ia++;
    }
}

static void
idltest_simple_parse_r(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->r = datum->keys[0].real;
    } else {
        row->r = 0.0;
    }
}

static void
idltest_simple_parse_ra(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ra = NULL;
    row->n_ra = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_ra) {
            row->ra = xmalloc(datum->n * sizeof *row->ra);
        }
        row->ra[row->n_ra] = datum->keys[i].real;
        row->n_ra++;
    }
}

static void
idltest_simple_parse_s(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->s = datum->keys[0].string;
    } else {
        row->s = "";
    }
}

static void
idltest_simple_parse_sa(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->sa = NULL;
    row->n_sa = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_sa) {
            row->sa = xmalloc(datum->n * sizeof *row->sa);
        }
        row->sa[row->n_sa] = datum->keys[i].string;
        row->n_sa++;
    }
}

static void
idltest_simple_parse_u(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->u = datum->keys[0].uuid;
    } else {
        uuid_zero(&row->u);
    }
}

static void
idltest_simple_parse_ua(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct idltest_simple *row = idltest_simple_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ua = NULL;
    row->n_ua = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_ua) {
            row->ua = xmalloc(datum->n * sizeof *row->ua);
        }
        row->ua[row->n_ua] = datum->keys[i].uuid;
        row->n_ua++;
    }
}

static void
idltest_simple_unparse_b(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ba(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    free(row->ba);
}

static void
idltest_simple_unparse_i(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ia(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    free(row->ia);
}

static void
idltest_simple_unparse_r(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ra(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    free(row->ra);
}

static void
idltest_simple_unparse_s(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_sa(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    free(row->sa);
}

static void
idltest_simple_unparse_u(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
idltest_simple_unparse_ua(struct ovsdb_idl_row *row_)
{
    struct idltest_simple *row = idltest_simple_cast(row_);

    ovs_assert(inited);
    free(row->ua);
}

static void
idltest_simple_init__(struct ovsdb_idl_row *row)
{
    idltest_simple_init(idltest_simple_cast(row));
}

/* Clears the contents of 'row' in table "simple". */
void
idltest_simple_init(struct idltest_simple *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "simple" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct idltest_simple *
idltest_simple_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return idltest_simple_cast(ovsdb_idl_get_row_for_uuid(idl, &idltest_table_classes[IDLTEST_TABLE_SIMPLE], uuid));
}

/* Returns a row in table "simple" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct idltest_simple *
idltest_simple_first(const struct ovsdb_idl *idl)
{
    return idltest_simple_cast(ovsdb_idl_first_row(idl, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct idltest_simple *
idltest_simple_next(const struct idltest_simple *row)
{
    return idltest_simple_cast(ovsdb_idl_next_row(&row->header_));
}

unsigned int idltest_simple_get_seqno(const struct ovsdb_idl *idl)
{
    return ovsdb_idl_table_get_seqno(idl, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]);
}

unsigned int idltest_simple_row_get_seqno(const struct idltest_simple *row, enum ovsdb_idl_change change)
{
    return ovsdb_idl_row_get_seqno(&row->header_, change);
}

const struct idltest_simple *
idltest_simple_track_get_first(const struct ovsdb_idl *idl)
{
    return idltest_simple_cast(ovsdb_idl_track_get_first(idl, &idltest_table_classes[IDLTEST_TABLE_SIMPLE]));
}

const struct idltest_simple
*idltest_simple_track_get_next(const struct idltest_simple *row)
{
    return idltest_simple_cast(ovsdb_idl_track_get_next(&row->header_));
}


/* Deletes 'row' from table "simple".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_delete(const struct idltest_simple *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "simple" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct idltest_simple *
idltest_simple_insert(struct ovsdb_idl_txn *txn)
{
    return idltest_simple_cast(ovsdb_idl_txn_insert(txn, &idltest_table_classes[IDLTEST_TABLE_SIMPLE], NULL));
}

/* Causes the original contents of column "b" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "b" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "b" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "b" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "b" has already been modified (with
 *     idltest_simple_set_b()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_b() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_b(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_B]);
}

/* Causes the original contents of column "ba" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ba" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ba" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ba" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ba" has already been modified (with
 *     idltest_simple_set_ba()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ba() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ba(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_BA]);
}

/* Causes the original contents of column "i" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "i" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "i" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "i" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "i" has already been modified (with
 *     idltest_simple_set_i()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_i() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_i(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_I]);
}

/* Causes the original contents of column "ia" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ia" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ia" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ia" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ia" has already been modified (with
 *     idltest_simple_set_ia()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ia() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ia(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_IA]);
}

/* Causes the original contents of column "r" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "r" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "r" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "r" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "r" has already been modified (with
 *     idltest_simple_set_r()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_r() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_r(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_R]);
}

/* Causes the original contents of column "ra" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ra" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ra" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ra" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ra" has already been modified (with
 *     idltest_simple_set_ra()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ra() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ra(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_RA]);
}

/* Causes the original contents of column "s" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "s" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "s" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "s" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "s" has already been modified (with
 *     idltest_simple_set_s()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_s() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_s(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_S]);
}

/* Causes the original contents of column "sa" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sa" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sa" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sa" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "sa" has already been modified (with
 *     idltest_simple_set_sa()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_sa() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_sa(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_SA]);
}

/* Causes the original contents of column "u" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "u" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "u" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "u" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "u" has already been modified (with
 *     idltest_simple_set_u()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_u() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_u(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_U]);
}

/* Causes the original contents of column "ua" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ua" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ua" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ua" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     idltest_simple_insert()).
 *
 *   - If "ua" has already been modified (with
 *     idltest_simple_set_ua()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * idltest_simple_set_ua() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
idltest_simple_verify_ua(const struct idltest_simple *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_UA]);
}

/* Returns the "b" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes b's
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
 * directly through the "b" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_b(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_b);
}

/* Returns the "ba" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes ba's
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
 * directly through the "ba" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ba(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ba);
}

/* Returns the "i" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes i's
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
 * directly through the "i" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_i(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_i);
}

/* Returns the "ia" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ia's
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
 * directly through the "ia" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ia(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ia);
}

/* Returns the "r" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_REAL.
 * (This helps to avoid silent bugs if someone changes r's
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
 * directly through the "r" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_r(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_REAL);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_r);
}

/* Returns the "ra" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_REAL.
 * (This helps to avoid silent bugs if someone changes ra's
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
 * directly through the "ra" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ra(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_REAL);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ra);
}

/* Returns the "s" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes s's
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
 * directly through the "s" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_s(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_s);
}

/* Returns the "sa" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes sa's
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
 * directly through the "sa" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_sa(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_sa);
}

/* Returns the "u" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes u's
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
 * directly through the "u" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_u(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_u);
}

/* Returns the "ua" column's value from the "simple" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ua's
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
 * directly through the "ua" member in idltest_simple. */
const struct ovsdb_datum *
idltest_simple_get_ua(const struct idltest_simple *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &idltest_simple_col_ua);
}

/* Sets the "b" column from the "simple" table in 'row' to
 * 'b'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_b(const struct idltest_simple *row, bool b)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = b;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_B], &datum);
}

/* Sets the "ba" column from the "simple" table in 'row' to
 * the 'ba' set with 'n_ba' entries.
 *
 * 'n_ba' may be 0 or 1; if it is 0, then 'ba'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ba(const struct idltest_simple *row, const bool *ba, size_t n_ba)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_ba) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *ba;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_BA], &datum);
}

/* Sets the "i" column from the "simple" table in 'row' to
 * 'i'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_i(const struct idltest_simple *row, int64_t i)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = i;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_I], &datum);
}

/* Sets the "ia" column from the "simple" table in 'row' to
 * the 'ia' set with 'n_ia' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ia(const struct idltest_simple *row, const int64_t *ia, size_t n_ia)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ia;
    datum.keys = n_ia ? xmalloc(n_ia * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ia; i++) {
        datum.keys[i].integer = ia[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_IA], &datum);
}

/* Sets the "r" column from the "simple" table in 'row' to
 * 'r'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_r(const struct idltest_simple *row, double r)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.real = r;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_R], &datum);
}

/* Sets the "ra" column from the "simple" table in 'row' to
 * the 'ra' set with 'n_ra' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ra(const struct idltest_simple *row, const double *ra, size_t n_ra)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ra;
    datum.keys = n_ra ? xmalloc(n_ra * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ra; i++) {
        datum.keys[i].real = ra[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_REAL, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_RA], &datum);
}

/* Sets the "s" column from the "simple" table in 'row' to
 * 's'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_s(const struct idltest_simple *row, const char *s)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, s);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_S], &datum);
}

/* Sets the "sa" column from the "simple" table in 'row' to
 * the 'sa' set with 'n_sa' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_sa(const struct idltest_simple *row, const char **sa, size_t n_sa)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_sa;
    datum.keys = n_sa ? xmalloc(n_sa * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_sa; i++) {
        datum.keys[i].string = xstrdup(sa[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_SA], &datum);
}

/* Sets the "u" column from the "simple" table in 'row' to
 * 'u'.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_u(const struct idltest_simple *row, struct uuid u)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = u;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_U], &datum);
}

/* Sets the "ua" column from the "simple" table in 'row' to
 * the 'ua' set with 'n_ua' entries.
 *
 * The caller retains ownership of the arguments. */
void
idltest_simple_set_ua(const struct idltest_simple *row, const struct uuid *ua, size_t n_ua)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ua;
    datum.keys = n_ua ? xmalloc(n_ua * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ua; i++) {
        datum.keys[i].uuid = ua[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &idltest_simple_columns[IDLTEST_SIMPLE_COL_UA], &datum);
}

struct ovsdb_idl_column idltest_simple_columns[IDLTEST_SIMPLE_N_COLUMNS];

static void
idltest_simple_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize idltest_simple_col_b. */
    c = &idltest_simple_col_b;
    c->name = "b";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_b;
    c->unparse = idltest_simple_unparse_b;

    /* Initialize idltest_simple_col_ba. */
    c = &idltest_simple_col_ba;
    c->name = "ba";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_ba;
    c->unparse = idltest_simple_unparse_ba;

    /* Initialize idltest_simple_col_i. */
    c = &idltest_simple_col_i;
    c->name = "i";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_i;
    c->unparse = idltest_simple_unparse_i;

    /* Initialize idltest_simple_col_ia. */
    c = &idltest_simple_col_ia;
    c->name = "ia";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = idltest_simple_parse_ia;
    c->unparse = idltest_simple_unparse_ia;

    /* Initialize idltest_simple_col_r. */
    c = &idltest_simple_col_r;
    c->name = "r";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_REAL);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_r;
    c->unparse = idltest_simple_unparse_r;

    /* Initialize idltest_simple_col_ra. */
    c = &idltest_simple_col_ra;
    c->name = "ra";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_REAL);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = idltest_simple_parse_ra;
    c->unparse = idltest_simple_unparse_ra;

    /* Initialize idltest_simple_col_s. */
    c = &idltest_simple_col_s;
    c->name = "s";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_s;
    c->unparse = idltest_simple_unparse_s;

    /* Initialize idltest_simple_col_sa. */
    c = &idltest_simple_col_sa;
    c->name = "sa";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = idltest_simple_parse_sa;
    c->unparse = idltest_simple_unparse_sa;

    /* Initialize idltest_simple_col_u. */
    c = &idltest_simple_col_u;
    c->name = "u";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = idltest_simple_parse_u;
    c->unparse = idltest_simple_unparse_u;

    /* Initialize idltest_simple_col_ua. */
    c = &idltest_simple_col_ua;
    c->name = "ua";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = idltest_simple_parse_ua;
    c->unparse = idltest_simple_unparse_ua;
}

struct ovsdb_idl_table_class idltest_table_classes[IDLTEST_N_TABLES] = {
    {"link1", true,
     idltest_link1_columns, ARRAY_SIZE(idltest_link1_columns),
     sizeof(struct idltest_link1), idltest_link1_init__},
    {"link2", true,
     idltest_link2_columns, ARRAY_SIZE(idltest_link2_columns),
     sizeof(struct idltest_link2), idltest_link2_init__},
    {"simple", true,
     idltest_simple_columns, ARRAY_SIZE(idltest_simple_columns),
     sizeof(struct idltest_simple), idltest_simple_init__},
};

struct ovsdb_idl_class idltest_idl_class = {
    "idltest", idltest_table_classes, ARRAY_SIZE(idltest_table_classes)
};

void
idltest_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    idltest_link1_columns_init();
    idltest_link2_columns_init();
    idltest_simple_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
idltest_get_db_version(void)
{
    return "1.2.3";
}

