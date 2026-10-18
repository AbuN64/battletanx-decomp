#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#pragma once

typedef struct InitArgs InitArgs;
struct InitArgs {
    s32 pad[6];
};
extern void func_80110C00(void *, s32);
extern void func_801124C0(s32, s32);
extern void func_801185D0(void *, s32, s32, s32, s32, s32, s32 *);
extern s32 func_80119240(void *queue, void **message, s32 flags);
extern s32 D_8014C0B0;

void func_80111540(u8 *thread, s32 id, void (*entry)(void), void *arg, u8 *stackTop, s32 priority);
s32 func_80118860();
s32 func_8011BB90();
void func_8011D1A0(u8 *thread);
extern s32 D_8014B9F0;
extern s32 D_8014BBA0;
extern s32 D_8014BD50;
extern s32 D_8014C070;

