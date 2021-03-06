/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Tue Dec  3 15:43:00 2019. */

#ifndef PB_LORASENDER_LORASENDER_PB_H_INCLUDED
#define PB_LORASENDER_LORASENDER_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _lorasender_request_command_type {
    lorasender_request_command_type_STATUS = 0,
    lorasender_request_command_type_SEND = 1
} lorasender_request_command_type;
#define _lorasender_request_command_type_MIN lorasender_request_command_type_STATUS
#define _lorasender_request_command_type_MAX lorasender_request_command_type_SEND
#define _lorasender_request_command_type_ARRAYSIZE ((lorasender_request_command_type)(lorasender_request_command_type_SEND+1))

typedef enum _lorasender_reply_reply_type {
    lorasender_reply_reply_type_ACK = 0,
    lorasender_reply_reply_type_SUCCESS = 1,
    lorasender_reply_reply_type_FAILED = 2
} lorasender_reply_reply_type;
#define _lorasender_reply_reply_type_MIN lorasender_reply_reply_type_ACK
#define _lorasender_reply_reply_type_MAX lorasender_reply_reply_type_FAILED
#define _lorasender_reply_reply_type_ARRAYSIZE ((lorasender_reply_reply_type)(lorasender_reply_reply_type_FAILED+1))

/* Struct definitions */
typedef struct _lorasender_reply {
    int32_t msgid;
    lorasender_reply_reply_type type;
    pb_callback_t details;
/* @@protoc_insertion_point(struct:lorasender_reply) */
} lorasender_reply;

typedef struct _lorasender_request {
    lorasender_request_command_type command;
    pb_callback_t data;
/* @@protoc_insertion_point(struct:lorasender_request) */
} lorasender_request;

/* Default values for struct fields */

/* Initializer values for message structs */
#define lorasender_request_init_default          {_lorasender_request_command_type_MIN, {{NULL}, NULL}}
#define lorasender_reply_init_default            {0, _lorasender_reply_reply_type_MIN, {{NULL}, NULL}}
#define lorasender_request_init_zero             {_lorasender_request_command_type_MIN, {{NULL}, NULL}}
#define lorasender_reply_init_zero               {0, _lorasender_reply_reply_type_MIN, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define lorasender_reply_msgid_tag               1
#define lorasender_reply_type_tag                2
#define lorasender_reply_details_tag             3
#define lorasender_request_command_tag           1
#define lorasender_request_data_tag              2

/* Struct field encoding specification for nanopb */
extern const pb_field_t lorasender_request_fields[3];
extern const pb_field_t lorasender_reply_fields[4];

/* Maximum encoded size of messages (where known) */
/* lorasender_request_size depends on runtime parameters */
/* lorasender_reply_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define LORASENDER_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
