#ifndef SHARED_BT_SPAN_1000_CODE_80078E30_H
#define SHARED_BT_SPAN_1000_CODE_80078E30_H
#include "shared/bt_types.h"
extern unsigned char *func_80078F60(void);


/* The task the scheduler is running; the word at 0x40 goes to func_8007F070. */
typedef struct SchedulerTask {
    u32 reserved00[0x10];
    s32 value40;
} SchedulerTask;
/* The scheduler thread's state; messages 0x29A..0x29E drive it (func_80078F70), func_8007902C clears it. */
typedef struct Scheduler {
    u8 reserved000[0x1E8];
    s32 value1E8;
    u16 value1EC;
    u16 value1EE;
    u16 value1F0;
    u16 value1F2;
    u16 flags;
    u16 reserved1F6;
    s32 pending;
    s32 value1FC;
    s32 value200;
    SchedulerTask *task;
} Scheduler;
extern int func_800794C8(Scheduler *scheduler);












#endif
