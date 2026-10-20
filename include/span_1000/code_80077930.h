#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#pragma once

typedef struct InitArgs InitArgs;
struct InitArgs {
    s32 pad[6];
};
extern void bzero(void *, s32);
extern void osInvalDCache(s32, s32);
extern void osPiStartDma(void *, s32, s32, s32, s32, s32, s32 *);
extern s32 osRecvMesg(void *queue, void **message, s32 flags);
extern s32 D_8014C0B0;

void osCreateThread(u8 *thread, s32 id, void (*entry)(void), void *arg, u8 *stackTop, s32 priority);
s32 osCreatePiManager();
s32 osSetThreadPri();
void osStartThread(u8 *thread);
extern s32 D_8014B9F0;
extern s32 D_8014BBA0;
extern s32 D_8014BD50;
extern s32 D_8014C070;

