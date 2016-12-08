/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#ifndef SBREC_IDL_HEADER
#define SBREC_IDL_HEADER 1

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "ovsdb-data.h"
#include "ovsdb-idl-provider.h"
#include "smap.h"
#include "uuid.h"

/* Chassis table. */
struct sbrec_chassis {
	struct ovsdb_idl_row header_;

	/* encaps column. */
	struct sbrec_encap **encaps;
	size_t n_encaps;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* vtep_logical_switches column. */
	char **vtep_logical_switches;
	size_t n_vtep_logical_switches;
};

enum {
    SBREC_CHASSIS_COL_ENCAPS,
    SBREC_CHASSIS_COL_NAME,
    SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES,
    SBREC_CHASSIS_N_COLUMNS
};

#define sbrec_chassis_col_vtep_logical_switches (sbrec_chassis_columns[SBREC_CHASSIS_COL_VTEP_LOGICAL_SWITCHES])
#define sbrec_chassis_col_encaps (sbrec_chassis_columns[SBREC_CHASSIS_COL_ENCAPS])
#define sbrec_chassis_col_name (sbrec_chassis_columns[SBREC_CHASSIS_COL_NAME])

extern struct ovsdb_idl_column sbrec_chassis_columns[SBREC_CHASSIS_N_COLUMNS];

const struct sbrec_chassis *sbrec_chassis_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_chassis *sbrec_chassis_first(const struct ovsdb_idl *);
const struct sbrec_chassis *sbrec_chassis_next(const struct sbrec_chassis *);
#define SBREC_CHASSIS_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_chassis_first(IDL); \
             (ROW); \
             (ROW) = sbrec_chassis_next(ROW))
#define SBREC_CHASSIS_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_chassis_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_chassis_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_chassis_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_chassis_row_get_seqno(const struct sbrec_chassis *row, enum ovsdb_idl_change change);
const struct sbrec_chassis *sbrec_chassis_track_get_first(const struct ovsdb_idl *);
const struct sbrec_chassis *sbrec_chassis_track_get_next(const struct sbrec_chassis *);
#define SBREC_CHASSIS_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_chassis_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_chassis_track_get_next(ROW))

void sbrec_chassis_init(struct sbrec_chassis *);
void sbrec_chassis_delete(const struct sbrec_chassis *);
struct sbrec_chassis *sbrec_chassis_insert(struct ovsdb_idl_txn *);

void sbrec_chassis_verify_encaps(const struct sbrec_chassis *);
void sbrec_chassis_verify_name(const struct sbrec_chassis *);
void sbrec_chassis_verify_vtep_logical_switches(const struct sbrec_chassis *);

const struct ovsdb_datum *sbrec_chassis_get_encaps(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_name(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_chassis_get_vtep_logical_switches(const struct sbrec_chassis *, enum ovsdb_atomic_type key_type);

void sbrec_chassis_set_encaps(const struct sbrec_chassis *, struct sbrec_encap **encaps, size_t n_encaps);
void sbrec_chassis_set_name(const struct sbrec_chassis *, const char *name);
void sbrec_chassis_set_vtep_logical_switches(const struct sbrec_chassis *, const char **vtep_logical_switches, size_t n_vtep_logical_switches);


/* Datapath_Binding table. */
struct sbrec_datapath_binding {
	struct ovsdb_idl_row header_;

	/* external_ids column. */
	struct smap external_ids;

	/* tunnel_key column. */
	int64_t tunnel_key;
};

enum {
    SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS,
    SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY,
    SBREC_DATAPATH_BINDING_N_COLUMNS
};

#define sbrec_datapath_binding_col_tunnel_key (sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_TUNNEL_KEY])
#define sbrec_datapath_binding_col_external_ids (sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_COL_EXTERNAL_IDS])

extern struct ovsdb_idl_column sbrec_datapath_binding_columns[SBREC_DATAPATH_BINDING_N_COLUMNS];

const struct sbrec_datapath_binding *sbrec_datapath_binding_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_first(const struct ovsdb_idl *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_next(const struct sbrec_datapath_binding *);
#define SBREC_DATAPATH_BINDING_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_datapath_binding_first(IDL); \
             (ROW); \
             (ROW) = sbrec_datapath_binding_next(ROW))
#define SBREC_DATAPATH_BINDING_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_datapath_binding_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_datapath_binding_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_datapath_binding_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_datapath_binding_row_get_seqno(const struct sbrec_datapath_binding *row, enum ovsdb_idl_change change);
const struct sbrec_datapath_binding *sbrec_datapath_binding_track_get_first(const struct ovsdb_idl *);
const struct sbrec_datapath_binding *sbrec_datapath_binding_track_get_next(const struct sbrec_datapath_binding *);
#define SBREC_DATAPATH_BINDING_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_datapath_binding_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_datapath_binding_track_get_next(ROW))

void sbrec_datapath_binding_init(struct sbrec_datapath_binding *);
void sbrec_datapath_binding_delete(const struct sbrec_datapath_binding *);
struct sbrec_datapath_binding *sbrec_datapath_binding_insert(struct ovsdb_idl_txn *);

void sbrec_datapath_binding_verify_external_ids(const struct sbrec_datapath_binding *);
void sbrec_datapath_binding_verify_tunnel_key(const struct sbrec_datapath_binding *);

const struct ovsdb_datum *sbrec_datapath_binding_get_external_ids(const struct sbrec_datapath_binding *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_datapath_binding_get_tunnel_key(const struct sbrec_datapath_binding *, enum ovsdb_atomic_type key_type);

void sbrec_datapath_binding_set_external_ids(const struct sbrec_datapath_binding *, const struct smap *);
void sbrec_datapath_binding_set_tunnel_key(const struct sbrec_datapath_binding *, int64_t tunnel_key);


/* Encap table. */
struct sbrec_encap {
	struct ovsdb_idl_row header_;

	/* ip column. */
	char *ip;	/* Always nonnull. */

	/* options column. */
	struct smap options;

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum {
    SBREC_ENCAP_COL_IP,
    SBREC_ENCAP_COL_OPTIONS,
    SBREC_ENCAP_COL_TYPE,
    SBREC_ENCAP_N_COLUMNS
};

#define sbrec_encap_col_ip (sbrec_encap_columns[SBREC_ENCAP_COL_IP])
#define sbrec_encap_col_type (sbrec_encap_columns[SBREC_ENCAP_COL_TYPE])
#define sbrec_encap_col_options (sbrec_encap_columns[SBREC_ENCAP_COL_OPTIONS])

extern struct ovsdb_idl_column sbrec_encap_columns[SBREC_ENCAP_N_COLUMNS];

const struct sbrec_encap *sbrec_encap_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_encap *sbrec_encap_first(const struct ovsdb_idl *);
const struct sbrec_encap *sbrec_encap_next(const struct sbrec_encap *);
#define SBREC_ENCAP_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_encap_first(IDL); \
             (ROW); \
             (ROW) = sbrec_encap_next(ROW))
#define SBREC_ENCAP_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_encap_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_encap_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_encap_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_encap_row_get_seqno(const struct sbrec_encap *row, enum ovsdb_idl_change change);
const struct sbrec_encap *sbrec_encap_track_get_first(const struct ovsdb_idl *);
const struct sbrec_encap *sbrec_encap_track_get_next(const struct sbrec_encap *);
#define SBREC_ENCAP_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_encap_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_encap_track_get_next(ROW))

void sbrec_encap_init(struct sbrec_encap *);
void sbrec_encap_delete(const struct sbrec_encap *);
struct sbrec_encap *sbrec_encap_insert(struct ovsdb_idl_txn *);

void sbrec_encap_verify_ip(const struct sbrec_encap *);
void sbrec_encap_verify_options(const struct sbrec_encap *);
void sbrec_encap_verify_type(const struct sbrec_encap *);

const struct ovsdb_datum *sbrec_encap_get_ip(const struct sbrec_encap *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_encap_get_options(const struct sbrec_encap *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_encap_get_type(const struct sbrec_encap *, enum ovsdb_atomic_type key_type);

void sbrec_encap_set_ip(const struct sbrec_encap *, const char *ip);
void sbrec_encap_set_options(const struct sbrec_encap *, const struct smap *);
void sbrec_encap_set_type(const struct sbrec_encap *, const char *type);


/* Logical_Flow table. */
struct sbrec_logical_flow {
	struct ovsdb_idl_row header_;

	/* actions column. */
	char *actions;	/* Always nonnull. */

	/* external_ids column. */
	struct smap external_ids;

	/* logical_datapath column. */
	struct sbrec_datapath_binding *logical_datapath;

	/* match column. */
	char *match;	/* Always nonnull. */

	/* pipeline column. */
	char *pipeline;	/* Always nonnull. */

	/* priority column. */
	int64_t priority;

	/* table_id column. */
	int64_t table_id;
};

enum {
    SBREC_LOGICAL_FLOW_COL_ACTIONS,
    SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS,
    SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH,
    SBREC_LOGICAL_FLOW_COL_MATCH,
    SBREC_LOGICAL_FLOW_COL_PIPELINE,
    SBREC_LOGICAL_FLOW_COL_PRIORITY,
    SBREC_LOGICAL_FLOW_COL_TABLE_ID,
    SBREC_LOGICAL_FLOW_N_COLUMNS
};

#define sbrec_logical_flow_col_logical_datapath (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_LOGICAL_DATAPATH])
#define sbrec_logical_flow_col_pipeline (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PIPELINE])
#define sbrec_logical_flow_col_actions (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_ACTIONS])
#define sbrec_logical_flow_col_priority (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_PRIORITY])
#define sbrec_logical_flow_col_table_id (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_TABLE_ID])
#define sbrec_logical_flow_col_external_ids (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_EXTERNAL_IDS])
#define sbrec_logical_flow_col_match (sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_COL_MATCH])

extern struct ovsdb_idl_column sbrec_logical_flow_columns[SBREC_LOGICAL_FLOW_N_COLUMNS];

const struct sbrec_logical_flow *sbrec_logical_flow_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_logical_flow *sbrec_logical_flow_first(const struct ovsdb_idl *);
const struct sbrec_logical_flow *sbrec_logical_flow_next(const struct sbrec_logical_flow *);
#define SBREC_LOGICAL_FLOW_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_logical_flow_first(IDL); \
             (ROW); \
             (ROW) = sbrec_logical_flow_next(ROW))
#define SBREC_LOGICAL_FLOW_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_logical_flow_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_logical_flow_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_logical_flow_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_logical_flow_row_get_seqno(const struct sbrec_logical_flow *row, enum ovsdb_idl_change change);
const struct sbrec_logical_flow *sbrec_logical_flow_track_get_first(const struct ovsdb_idl *);
const struct sbrec_logical_flow *sbrec_logical_flow_track_get_next(const struct sbrec_logical_flow *);
#define SBREC_LOGICAL_FLOW_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_logical_flow_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_logical_flow_track_get_next(ROW))

void sbrec_logical_flow_init(struct sbrec_logical_flow *);
void sbrec_logical_flow_delete(const struct sbrec_logical_flow *);
struct sbrec_logical_flow *sbrec_logical_flow_insert(struct ovsdb_idl_txn *);

void sbrec_logical_flow_verify_actions(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_external_ids(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_logical_datapath(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_match(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_pipeline(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_priority(const struct sbrec_logical_flow *);
void sbrec_logical_flow_verify_table_id(const struct sbrec_logical_flow *);

const struct ovsdb_datum *sbrec_logical_flow_get_actions(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_external_ids(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_logical_flow_get_logical_datapath(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_match(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_pipeline(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_priority(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_logical_flow_get_table_id(const struct sbrec_logical_flow *, enum ovsdb_atomic_type key_type);

void sbrec_logical_flow_set_actions(const struct sbrec_logical_flow *, const char *actions);
void sbrec_logical_flow_set_external_ids(const struct sbrec_logical_flow *, const struct smap *);
void sbrec_logical_flow_set_logical_datapath(const struct sbrec_logical_flow *, const struct sbrec_datapath_binding *logical_datapath);
void sbrec_logical_flow_set_match(const struct sbrec_logical_flow *, const char *match);
void sbrec_logical_flow_set_pipeline(const struct sbrec_logical_flow *, const char *pipeline);
void sbrec_logical_flow_set_priority(const struct sbrec_logical_flow *, int64_t priority);
void sbrec_logical_flow_set_table_id(const struct sbrec_logical_flow *, int64_t table_id);


/* Multicast_Group table. */
struct sbrec_multicast_group {
	struct ovsdb_idl_row header_;

	/* datapath column. */
	struct sbrec_datapath_binding *datapath;

	/* name column. */
	char *name;	/* Always nonnull. */

	/* ports column. */
	struct sbrec_port_binding **ports;
	size_t n_ports;

	/* tunnel_key column. */
	int64_t tunnel_key;
};

enum {
    SBREC_MULTICAST_GROUP_COL_DATAPATH,
    SBREC_MULTICAST_GROUP_COL_NAME,
    SBREC_MULTICAST_GROUP_COL_PORTS,
    SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY,
    SBREC_MULTICAST_GROUP_N_COLUMNS
};

#define sbrec_multicast_group_col_tunnel_key (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_TUNNEL_KEY])
#define sbrec_multicast_group_col_ports (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_PORTS])
#define sbrec_multicast_group_col_name (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_NAME])
#define sbrec_multicast_group_col_datapath (sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_COL_DATAPATH])

extern struct ovsdb_idl_column sbrec_multicast_group_columns[SBREC_MULTICAST_GROUP_N_COLUMNS];

const struct sbrec_multicast_group *sbrec_multicast_group_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_multicast_group *sbrec_multicast_group_first(const struct ovsdb_idl *);
const struct sbrec_multicast_group *sbrec_multicast_group_next(const struct sbrec_multicast_group *);
#define SBREC_MULTICAST_GROUP_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_multicast_group_first(IDL); \
             (ROW); \
             (ROW) = sbrec_multicast_group_next(ROW))
#define SBREC_MULTICAST_GROUP_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_multicast_group_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_multicast_group_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_multicast_group_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_multicast_group_row_get_seqno(const struct sbrec_multicast_group *row, enum ovsdb_idl_change change);
const struct sbrec_multicast_group *sbrec_multicast_group_track_get_first(const struct ovsdb_idl *);
const struct sbrec_multicast_group *sbrec_multicast_group_track_get_next(const struct sbrec_multicast_group *);
#define SBREC_MULTICAST_GROUP_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_multicast_group_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_multicast_group_track_get_next(ROW))

void sbrec_multicast_group_init(struct sbrec_multicast_group *);
void sbrec_multicast_group_delete(const struct sbrec_multicast_group *);
struct sbrec_multicast_group *sbrec_multicast_group_insert(struct ovsdb_idl_txn *);

void sbrec_multicast_group_verify_datapath(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_name(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_ports(const struct sbrec_multicast_group *);
void sbrec_multicast_group_verify_tunnel_key(const struct sbrec_multicast_group *);

const struct ovsdb_datum *sbrec_multicast_group_get_datapath(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_name(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_ports(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_multicast_group_get_tunnel_key(const struct sbrec_multicast_group *, enum ovsdb_atomic_type key_type);

void sbrec_multicast_group_set_datapath(const struct sbrec_multicast_group *, const struct sbrec_datapath_binding *datapath);
void sbrec_multicast_group_set_name(const struct sbrec_multicast_group *, const char *name);
void sbrec_multicast_group_set_ports(const struct sbrec_multicast_group *, struct sbrec_port_binding **ports, size_t n_ports);
void sbrec_multicast_group_set_tunnel_key(const struct sbrec_multicast_group *, int64_t tunnel_key);


/* Port_Binding table. */
struct sbrec_port_binding {
	struct ovsdb_idl_row header_;

	/* chassis column. */
	struct sbrec_chassis *chassis;

	/* datapath column. */
	struct sbrec_datapath_binding *datapath;

	/* logical_port column. */
	char *logical_port;	/* Always nonnull. */

	/* mac column. */
	char **mac;
	size_t n_mac;

	/* options column. */
	struct smap options;

	/* parent_port column. */
	char *parent_port;

	/* tag column. */
	int64_t *tag;
	size_t n_tag;

	/* tunnel_key column. */
	int64_t tunnel_key;

	/* type column. */
	char *type;	/* Always nonnull. */
};

enum {
    SBREC_PORT_BINDING_COL_CHASSIS,
    SBREC_PORT_BINDING_COL_DATAPATH,
    SBREC_PORT_BINDING_COL_LOGICAL_PORT,
    SBREC_PORT_BINDING_COL_MAC,
    SBREC_PORT_BINDING_COL_OPTIONS,
    SBREC_PORT_BINDING_COL_PARENT_PORT,
    SBREC_PORT_BINDING_COL_TAG,
    SBREC_PORT_BINDING_COL_TUNNEL_KEY,
    SBREC_PORT_BINDING_COL_TYPE,
    SBREC_PORT_BINDING_N_COLUMNS
};

#define sbrec_port_binding_col_parent_port (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_PARENT_PORT])
#define sbrec_port_binding_col_chassis (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_CHASSIS])
#define sbrec_port_binding_col_datapath (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_DATAPATH])
#define sbrec_port_binding_col_logical_port (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_LOGICAL_PORT])
#define sbrec_port_binding_col_mac (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_MAC])
#define sbrec_port_binding_col_tag (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TAG])
#define sbrec_port_binding_col_tunnel_key (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TUNNEL_KEY])
#define sbrec_port_binding_col_type (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_TYPE])
#define sbrec_port_binding_col_options (sbrec_port_binding_columns[SBREC_PORT_BINDING_COL_OPTIONS])

extern struct ovsdb_idl_column sbrec_port_binding_columns[SBREC_PORT_BINDING_N_COLUMNS];

const struct sbrec_port_binding *sbrec_port_binding_get_for_uuid(const struct ovsdb_idl *, const struct uuid *);
const struct sbrec_port_binding *sbrec_port_binding_first(const struct ovsdb_idl *);
const struct sbrec_port_binding *sbrec_port_binding_next(const struct sbrec_port_binding *);
#define SBREC_PORT_BINDING_FOR_EACH(ROW, IDL) \
        for ((ROW) = sbrec_port_binding_first(IDL); \
             (ROW); \
             (ROW) = sbrec_port_binding_next(ROW))
#define SBREC_PORT_BINDING_FOR_EACH_SAFE(ROW, NEXT, IDL) \
        for ((ROW) = sbrec_port_binding_first(IDL); \
             (ROW) ? ((NEXT) = sbrec_port_binding_next(ROW), 1) : 0; \
             (ROW) = (NEXT))

unsigned int sbrec_port_binding_get_seqno(const struct ovsdb_idl *);
unsigned int sbrec_port_binding_row_get_seqno(const struct sbrec_port_binding *row, enum ovsdb_idl_change change);
const struct sbrec_port_binding *sbrec_port_binding_track_get_first(const struct ovsdb_idl *);
const struct sbrec_port_binding *sbrec_port_binding_track_get_next(const struct sbrec_port_binding *);
#define SBREC_PORT_BINDING_FOR_EACH_TRACKED(ROW, IDL) \
        for ((ROW) = sbrec_port_binding_track_get_first(IDL); \
             (ROW); \
             (ROW) = sbrec_port_binding_track_get_next(ROW))

void sbrec_port_binding_init(struct sbrec_port_binding *);
void sbrec_port_binding_delete(const struct sbrec_port_binding *);
struct sbrec_port_binding *sbrec_port_binding_insert(struct ovsdb_idl_txn *);

void sbrec_port_binding_verify_chassis(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_datapath(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_logical_port(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_mac(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_options(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_parent_port(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_tag(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_tunnel_key(const struct sbrec_port_binding *);
void sbrec_port_binding_verify_type(const struct sbrec_port_binding *);

const struct ovsdb_datum *sbrec_port_binding_get_chassis(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_datapath(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_logical_port(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_mac(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_options(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type, enum ovsdb_atomic_type value_type);
const struct ovsdb_datum *sbrec_port_binding_get_parent_port(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_tag(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_tunnel_key(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);
const struct ovsdb_datum *sbrec_port_binding_get_type(const struct sbrec_port_binding *, enum ovsdb_atomic_type key_type);

void sbrec_port_binding_set_chassis(const struct sbrec_port_binding *, const struct sbrec_chassis *chassis);
void sbrec_port_binding_set_datapath(const struct sbrec_port_binding *, const struct sbrec_datapath_binding *datapath);
void sbrec_port_binding_set_logical_port(const struct sbrec_port_binding *, const char *logical_port);
void sbrec_port_binding_set_mac(const struct sbrec_port_binding *, const char **mac, size_t n_mac);
void sbrec_port_binding_set_options(const struct sbrec_port_binding *, const struct smap *);
void sbrec_port_binding_set_parent_port(const struct sbrec_port_binding *, const char *parent_port);
void sbrec_port_binding_set_tag(const struct sbrec_port_binding *, const int64_t *tag, size_t n_tag);
void sbrec_port_binding_set_tunnel_key(const struct sbrec_port_binding *, int64_t tunnel_key);
void sbrec_port_binding_set_type(const struct sbrec_port_binding *, const char *type);


enum {
    SBREC_TABLE_CHASSIS,
    SBREC_TABLE_DATAPATH_BINDING,
    SBREC_TABLE_ENCAP,
    SBREC_TABLE_LOGICAL_FLOW,
    SBREC_TABLE_MULTICAST_GROUP,
    SBREC_TABLE_PORT_BINDING,
    SBREC_N_TABLES
};

#define sbrec_table_datapath_binding (sbrec_table_classes[SBREC_TABLE_DATAPATH_BINDING])
#define sbrec_table_logical_flow (sbrec_table_classes[SBREC_TABLE_LOGICAL_FLOW])
#define sbrec_table_multicast_group (sbrec_table_classes[SBREC_TABLE_MULTICAST_GROUP])
#define sbrec_table_chassis (sbrec_table_classes[SBREC_TABLE_CHASSIS])
#define sbrec_table_encap (sbrec_table_classes[SBREC_TABLE_ENCAP])
#define sbrec_table_port_binding (sbrec_table_classes[SBREC_TABLE_PORT_BINDING])

extern struct ovsdb_idl_table_class sbrec_table_classes[SBREC_N_TABLES];

extern struct ovsdb_idl_class sbrec_idl_class;

void sbrec_init(void);

const char * sbrec_get_db_version(void);

#endif /* SBREC_IDL_HEADER */
