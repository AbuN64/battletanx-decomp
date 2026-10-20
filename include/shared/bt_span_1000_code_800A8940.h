#ifndef SHARED_BT_SPAN_1000_CODE_800A8940_H
#define SHARED_BT_SPAN_1000_CODE_800A8940_H
#include "shared/bt_types.h"




extern void func_800A8EF8(int, int, int, int);




















typedef struct OSMesgQueue OSMesgQueue;
typedef struct OSContStatus {
    u16 type;
    u8 status;
    u8 errnum;
} OSContStatus;
typedef struct OSPfs {
    s32 status;
    OSMesgQueue *queue;
    s32 channel;
    u8 id[32];
    u8 label[32];
    s32 version;
    s32 dir_size;
    s32 inode_table;
    s32 minode_table;
    s32 dir_table;
    s32 inode_start_page;
    u8 banks;
    u8 activebank;
} OSPfs;

#endif
