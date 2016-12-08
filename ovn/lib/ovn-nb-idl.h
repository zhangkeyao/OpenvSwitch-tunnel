/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef NBREC_IDL_HEADER
#define NBREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* ACL table. */
struct nbrec_acl {
	struct ovsdb_idl_row header_;

	/* action column. */
	char *action;	/* Always nonnull. */

	/* direction column. */
	char *direction;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* log column. */
	bool log;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* priority column. */
	int64_t priority;
};

enum {
    NBREC_ACL_COL_ACTION,
    NBREC_ACL_COL_DIRECTION,
    NBREC_ACL_COL_EXTERNAL_IDS,
    NBREC_ACL_COL_LOG,
    NBREC_ACL_COL_MATCH,
    NBREC_ACL_COL_PRIORITY,
    NBREC_ACL_N_COLUMNS
};

#define nbrec_acl_col_direction (nbrec_acl_columns[NBREC_ACL_COL_DIRECTION])
#define nbrec_acl_col_log (nbrec_acl_columns[NBREC_ACL_COL_LOG])
#define nbrec_acl_col_priority (nbrec_acl_columns[NBREC_ACL_COL_PRIORITY])
#define nbrec_acl_col_action (nbrec_acl_columns[NBREC_ACL_COL_ACTION])
#define nbrec_acl_col_external_ids (nbrec_acl_columns[NBREC_ACL_COL_EXTERNAL_IDS])
#define nbrec_acl_col_match (nbrec_acl_columns[NBREC_ACL_COL_MATCH])

extern struct ovsdb_idl_column nbrec_acl_columns[NBREC_ACL_N_COLUMNS];

const struct nbrec_acl *nbrec_acl_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_acl *nbrec_acl_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_next(ROW))
#define NBREC_ACL_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_acl_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_acl_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_acl_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_acl_row_get_seqno(const struct nbrec_acl *row, enum ovsdb_idl_change change);
const struct nbrec_acl *nbrec_acl_track_get_first(const struct ovsdb_idl *);
const struct nbrec_acl *nbrec_acl_track_get_next(const struct nbrec_acl *);
#define NBREC_ACL_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_acl_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_acl_track_get_next(ROW))

void nbrec_acl_init(struct nbrec_acl *);
void nbrec_acl_delete(const struct nbrec_acl *);
struct nbrec_acl *nbrec_acl_insert(struct ovsdb_idl_txn *);

void nbrec_acl_verify_action(const struct nbrec_acl *);
void nbrec_acl_verify_direction(const struct nbrec_acl *);
void nbrec_acl_verify_external_ids(const struct nbrec_acl *);
void nbrec_acl_verify_log(const struct nbrec_acl *);
void nbrec_acl_verify_match(const struct nbrec_acl *);
void nbrec_acl_verify_priority(const struct nbrec_acl *);

const struct ovsdb_datum *nbrec_acl_get_action(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_direction(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_external_ids(const struct nbrec_acl *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_acl_get_log(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_match(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_acl_get_priority(const struct nbrec_acl *, enum ovsdb_atomic_type key_type);

void nbrec_acl_set_action(const struct nbrec_acl *, const char *action);
void nbrec_acl_set_direction(const struct nbrec_acl *, const char *direction);
void nbrec_acl_set_external_ids(const struct nbrec_acl *, const struct smap *);
void nbrec_acl_set_log(const struct nbrec_acl *, bool log);
void nbrec_acl_set_match(const struct nbrec_acl *, const char *match);
void nbrec_acl_set_priority(const struct nbrec_acl *, int64_t priority);


/* Logical_Port table. */
struct nbrec_logical_port {
	struct ovsdb_idl_row header_;

	/* addresses column. */
	char **addresses;
	size_t n_addresses;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* parent_name column. */
	char *parent_name;

	/* port_security column. */
	char **port_security;
	size_t n_port_security;

	/* tag column. */
	int64_t *tag;
	size_t n_tag;

	/* type column. */
	char *type;	/* Always nonnull. */

	/* up column. */
	bool *up;
	size_t n_up;
};

enum {
    NBREC_LOGICAL_PORT_COL_ADDRESSES,
    NBREC_LOGICAL_PORT_COL_ENABLED,
    NBREC_LOGICAL_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_PORT_COL_NAME,
    NBREC_LOGICAL_PORT_COL_OPTIONS,
    NBREC_LOGICAL_PORT_COL_PARENT_NAME,
    NBREC_LOGICAL_PORT_COL_PORT_SECURITY,
    NBREC_LOGICAL_PORT_COL_TAG,
    NBREC_LOGICAL_PORT_COL_TYPE,
    NBREC_LOGICAL_PORT_COL_UP,
    NBREC_LOGICAL_PORT_N_COLUMNS
};

#define nbrec_logical_port_col_parent_name (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PARENT_NAME])
#define nbrec_logical_port_col_addresses (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ADDRESSES])
#define nbrec_logical_port_col_enabled (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_ENABLED])
#define nbrec_logical_port_col_up (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_UP])
#define nbrec_logical_port_col_port_security (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_PORT_SECURITY])
#define nbrec_logical_port_col_external_ids (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_port_col_tag (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TAG])
#define nbrec_logical_port_col_type (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_TYPE])
#define nbrec_logical_port_col_options (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_OPTIONS])
#define nbrec_logical_port_col_name (nbrec_logical_port_columns[NBREC_LOGICAL_PORT_COL_NAME])

extern struct ovsdb_idl_column nbrec_logical_port_columns[NBREC_LOGICAL_PORT_N_COLUMNS];

const struct nbrec_logical_port *nbrec_logical_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_port *nbrec_logical_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_port *nbrec_logical_port_next(const struct nbrec_logical_port *);
#define NBREC_LOGICAL_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_port_next(ROW))
#define NBREC_LOGICAL_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_port_row_get_seqno(const struct nbrec_logical_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_port *nbrec_logical_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_port *nbrec_logical_port_track_get_next(const struct nbrec_logical_port *);
#define NBREC_LOGICAL_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_port_track_get_next(ROW))

void nbrec_logical_port_init(struct nbrec_logical_port *);
void nbrec_logical_port_delete(const struct nbrec_logical_port *);
struct nbrec_logical_port *nbrec_logical_port_insert(struct ovsdb_idl_txn *);

void nbrec_logical_port_verify_addresses(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_enabled(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_external_ids(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_name(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_options(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_parent_name(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_port_security(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_tag(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_type(const struct nbrec_logical_port *);
void nbrec_logical_port_verify_up(const struct nbrec_logical_port *);

const struct ovsdb_datum *nbrec_logical_port_get_addresses(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_enabled(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_external_ids(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_port_get_name(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_options(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_port_get_parent_name(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_port_security(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_tag(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_type(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_port_get_up(const struct nbrec_logical_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_port_set_addresses(const struct nbrec_logical_port *, const char **addresses, size_t n_addresses);
void nbrec_logical_port_set_enabled(const struct nbrec_logical_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_port_set_external_ids(const struct nbrec_logical_port *, const struct smap *);
void nbrec_logical_port_set_name(const struct nbrec_logical_port *, const char *name);
void nbrec_logical_port_set_options(const struct nbrec_logical_port *, const struct smap *);
void nbrec_logical_port_set_parent_name(const struct nbrec_logical_port *, const char *parent_name);
void nbrec_logical_port_set_port_security(const struct nbrec_logical_port *, const char **port_security, size_t n_port_security);
void nbrec_logical_port_set_tag(const struct nbrec_logical_port *, const int64_t *tag, size_t n_tag);
void nbrec_logical_port_set_type(const struct nbrec_logical_port *, const char *type);
void nbrec_logical_port_set_up(const struct nbrec_logical_port *, const bool *up, size_t n_up);


/* Logical_Router table. */
struct nbrec_logical_router {
	struct ovsdb_idl_row header_;

	/* default_gw column. */
	char *default_gw;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* ports column. */
	struct nbrec_logical_router_port **ports;
	size_t n_ports;
};

enum {
    NBREC_LOGICAL_ROUTER_COL_DEFAULT_GW,
    NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_COL_NAME,
    NBREC_LOGICAL_ROUTER_COL_PORTS,
    NBREC_LOGICAL_ROUTER_N_COLUMNS
};

#define nbrec_logical_router_col_external_ids (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_EXTERNAL_IDS])
#define nbrec_logical_router_col_name (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_NAME])
#define nbrec_logical_router_col_default_gw (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_DEFAULT_GW])
#define nbrec_logical_router_col_ports (nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_router_columns[NBREC_LOGICAL_ROUTER_N_COLUMNS];

const struct nbrec_logical_router *nbrec_logical_router_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router *nbrec_logical_router_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_next(ROW))
#define NBREC_LOGICAL_ROUTER_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_row_get_seqno(const struct nbrec_logical_router *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router *nbrec_logical_router_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router *nbrec_logical_router_track_get_next(const struct nbrec_logical_router *);
#define NBREC_LOGICAL_ROUTER_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_track_get_next(ROW))

void nbrec_logical_router_init(struct nbrec_logical_router *);
void nbrec_logical_router_delete(const struct nbrec_logical_router *);
struct nbrec_logical_router *nbrec_logical_router_insert(struct ovsdb_idl_txn *);

void nbrec_logical_router_verify_default_gw(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_external_ids(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_name(const struct nbrec_logical_router *);
void nbrec_logical_router_verify_ports(const struct nbrec_logical_router *);

const struct ovsdb_datum *nbrec_logical_router_get_default_gw(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_external_ids(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_get_name(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_get_ports(const struct nbrec_logical_router *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_set_default_gw(const struct nbrec_logical_router *, const char *default_gw);
void nbrec_logical_router_set_external_ids(const struct nbrec_logical_router *, const struct smap *);
void nbrec_logical_router_set_name(const struct nbrec_logical_router *, const char *name);
void nbrec_logical_router_set_ports(const struct nbrec_logical_router *, struct nbrec_logical_router_port **ports, size_t n_ports);


/* Logical_Router_Port table. */
struct nbrec_logical_router_port {
	struct ovsdb_idl_row header_;

	/* enabled column. */
	bool *enabled;
	size_t n_enabled;

	/* external_ids column. */
	struct smap external_ids;

	/* mac column. */
	char *mac;	/* Always nonnull. */

	/* name column. */
	char *name;	/* Always nonnull. */

	/* network column. */
	char *network;	/* Always nonnull. */

	/* peer column. */
	struct nbrec_logical_router_port *peer;
};

enum {
    NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED,
    NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_ROUTER_PORT_COL_MAC,
    NBREC_LOGICAL_ROUTER_PORT_COL_NAME,
    NBREC_LOGICAL_ROUTER_PORT_COL_NETWORK,
    NBREC_LOGICAL_ROUTER_PORT_COL_PEER,
    NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS
};

#define nbrec_logical_router_port_col_network (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NETWORK])
#define nbrec_logical_router_port_col_enabled (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_ENABLED])
#define nbrec_logical_router_port_col_mac (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_MAC])
#define nbrec_logical_router_port_col_peer (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_PEER])
#define nbrec_logical_router_port_col_external_ids (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_EXTERNAL_IDS])
#define nbrec_logical_router_port_col_name (nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_COL_NAME])

extern struct ovsdb_idl_column nbrec_logical_router_port_columns[NBREC_LOGICAL_ROUTER_PORT_N_COLUMNS];

const struct nbrec_logical_router_port *nbrec_logical_router_port_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_next(ROW))
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_router_port_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_router_port_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_router_port_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_router_port_row_get_seqno(const struct nbrec_logical_router_port *row, enum ovsdb_idl_change change);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_router_port *nbrec_logical_router_port_track_get_next(const struct nbrec_logical_router_port *);
#define NBREC_LOGICAL_ROUTER_PORT_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_router_port_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_router_port_track_get_next(ROW))

void nbrec_logical_router_port_init(struct nbrec_logical_router_port *);
void nbrec_logical_router_port_delete(const struct nbrec_logical_router_port *);
struct nbrec_logical_router_port *nbrec_logical_router_port_insert(struct ovsdb_idl_txn *);

void nbrec_logical_router_port_verify_enabled(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_external_ids(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_mac(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_name(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_network(const struct nbrec_logical_router_port *);
void nbrec_logical_router_port_verify_peer(const struct nbrec_logical_router_port *);

const struct ovsdb_datum *nbrec_logical_router_port_get_enabled(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_external_ids(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_mac(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_name(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_network(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_router_port_get_peer(const struct nbrec_logical_router_port *, enum ovsdb_atomic_type key_type);

void nbrec_logical_router_port_set_enabled(const struct nbrec_logical_router_port *, const bool *enabled, size_t n_enabled);
void nbrec_logical_router_port_set_external_ids(const struct nbrec_logical_router_port *, const struct smap *);
void nbrec_logical_router_port_set_mac(const struct nbrec_logical_router_port *, const char *mac);
void nbrec_logical_router_port_set_name(const struct nbrec_logical_router_port *, const char *name);
void nbrec_logical_router_port_set_network(const struct nbrec_logical_router_port *, const char *network);
void nbrec_logical_router_port_set_peer(const struct nbrec_logical_router_port *, const struct nbrec_logical_router_port *peer);


/* Logical_Switch table. */
struct nbrec_logical_switch {
	struct ovsdb_idl_row header_;

	/* acls column. */
	struct nbrec_acl **acls;
	size_t n_acls;

	/* external_ids column. */
	struct smap external_ids;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* ports column. */
	struct nbrec_logical_port **ports;
	size_t n_ports;
};

enum {
    NBREC_LOGICAL_SWITCH_COL_ACLS,
    NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS,
    NBREC_LOGICAL_SWITCH_COL_NAME,
    NBREC_LOGICAL_SWITCH_COL_PORTS,
    NBREC_LOGICAL_SWITCH_N_COLUMNS
};

#define nbrec_logical_switch_col_external_ids (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_EXTERNAL_IDS])
#define nbrec_logical_switch_col_acls (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_ACLS])
#define nbrec_logical_switch_col_name (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_NAME])
#define nbrec_logical_switch_col_ports (nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_COL_PORTS])

extern struct ovsdb_idl_column nbrec_logical_switch_columns[NBREC_LOGICAL_SWITCH_N_COLUMNS];

const struct nbrec_logical_switch *nbrec_logical_switch_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct nbrec_logical_switch *nbrec_logical_switch_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_next(ROW))
#define NBREC_LOGICAL_SWITCH_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = nbrec_logical_switch_first(IDL); \
             (ROW) ? ((NEXT) = nbrec_logical_switch_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int nbrec_logical_switch_get_seqno(const struct ovsdb_idl *);
unsigned int nbrec_logical_switch_row_get_seqno(const struct nbrec_logical_switch *row, enum ovsdb_idl_change change);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_first(const struct ovsdb_idl *);
const struct nbrec_logical_switch *nbrec_logical_switch_track_get_next(const struct nbrec_logical_switch *);
#define NBREC_LOGICAL_SWITCH_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = nbrec_logical_switch_track_get_first(IDL); \
             (ROW); \
             (ROW) = nbrec_logical_switch_track_get_next(ROW))

void nbrec_logical_switch_init(struct nbrec_logical_switch *);
void nbrec_logical_switch_delete(const struct nbrec_logical_switch *);
struct nbrec_logical_switch *nbrec_logical_switch_insert(struct ovsdb_idl_txn *);

void nbrec_logical_switch_verify_acls(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_external_ids(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_name(const struct nbrec_logical_switch *);
void nbrec_logical_switch_verify_ports(const struct nbrec_logical_switch *);

const struct ovsdb_datum *nbrec_logical_switch_get_acls(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_external_ids(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *nbrec_logical_switch_get_name(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *nbrec_logical_switch_get_ports(const struct nbrec_logical_switch *, enum ovsdb_atomic_type key_type);

void nbrec_logical_switch_set_acls(const struct nbrec_logical_switch *, struct nbrec_acl **acls, size_t n_acls);
void nbrec_logical_switch_set_external_ids(const struct nbrec_logical_switch *, const struct smap *);
void nbrec_logical_switch_set_name(const struct nbrec_logical_switch *, const char *name);
void nbrec_logical_switch_set_ports(const struct nbrec_logical_switch *, struct nbrec_logical_port **ports, size_t n_ports);


enum {
    NBREC_TABLE_ACL,
    NBREC_TABLE_LOGICAL_PORT,
    NBREC_TABLE_LOGICAL_ROUTER,
    NBREC_TABLE_LOGICAL_ROUTER_PORT,
    NBREC_TABLE_LOGICAL_SWITCH,
    NBREC_N_TABLES
};

#define nbrec_table_logical_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_PORT])
#define nbrec_table_logical_router_port (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER_PORT])
#define nbrec_table_logical_router (nbrec_table_classes[NBREC_TABLE_LOGICAL_ROUTER])
#define nbrec_table_logical_switch (nbrec_table_classes[NBREC_TABLE_LOGICAL_SWITCH])
#define nbrec_table_acl (nbrec_table_classes[NBREC_TABLE_ACL])

extern struct ovsdb_idl_table_class nbrec_table_classes[NBREC_N_TABLES];

extern struct ovsdb_idl_class nbrec_idl_class;

void nbrec_init(void);

const char * nbrec_get_db_version(void);

#endif /* NBREC_IDL_HEADER */
