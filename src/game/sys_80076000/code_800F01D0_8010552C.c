#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8010552C(s32 arg0, s32 arg1) {
    D_803AAD88 = arg0;
    D_803AAD8C = arg1;
}

void func_80105544(f32 arg0, f32 arg1) {
    D_803AAD90 = arg0;
    D_803AAD94 = arg1;
}

void func_8010555C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_803B75A4 = arg0;
    D_803B75A5 = arg1;
    D_803B75A6 = arg2;
    D_803B75A7 = arg3;
}

void func_80105584(int *context, void *text)
{
    u8 *cursor = text;
    u8 ch;
    while ((ch = *cursor++) != 0) {
        func_80106010(context, ch);
    }
}

#ifdef NON_MATCHING
#include "shared/bt_types.h"
s32 func_80106010(s32, s32);
u64 func_80124350(u64, u32, s32, s32);
u64 func_80124940(u64, u32, s32, s32);
extern s32 D_803B75A0;

void func_801055D4(s32 arg0, s32 arg2, s32 arg3) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u32 temp_v1;
    u64 temp_ret;

    var_s0 = arg2;
    var_s1 = arg3;
    if (var_s0 < 0) {
        var_s1 = -var_s1;
        var_s0 = -var_s0 - (var_s1 != 0);
    }
    D_803B75A0 = -1;
    var_a0 = var_s0;
    do {
loop_3:
        func_80106010(arg0, ((u32) func_80124940((u64) var_a0, (u32) var_s1, 0, 0xA) + 0x30) & 0xFF);
        temp_ret = func_80124350((u64) var_s0, (u32) var_s1, 0, 0xA);
        temp_v1 = (u32) temp_ret;
        var_s0 = temp_ret;
        var_s1 = (s32) temp_v1;
        var_a0 = var_s0;
        if (var_s0 != 0) {
            goto loop_3;
        }
    } while (var_s1 != 0);
    D_803B75A0 = 1;
}
#else
INCLUDE_ASM("span_1000", func_801055D4);
#endif
#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_8010647C(s32, s32);
u64 func_80124350(u64, u32, s32, s32);
u64 func_80124940(u64, u32, s32, s32);
extern s32 D_803B75A0;

void func_80105688(s32 arg0, s32 arg2, s32 arg3) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u32 temp_v1;
    u64 temp_ret;

    var_s0 = arg2;
    var_s1 = arg3;
    if (var_s0 < 0) {
        var_s1 = -var_s1;
        var_s0 = -var_s0 - (var_s1 != 0);
    }
    D_803B75A0 = -1;
    D_auto_803B75A9 = 1;
    var_a0 = var_s0;
    do {
loop_3:
        func_8010647C(arg0, ((u32) func_80124940((u64) var_a0, (u32) var_s1, 0, 0xA) + 0x30) & 0xFF);
        temp_ret = func_80124350((u64) var_s0, (u32) var_s1, 0, 0xA);
        temp_v1 = (u32) temp_ret;
        var_s0 = temp_ret;
        var_s1 = (s32) temp_v1;
        var_a0 = var_s0;
        if (var_s0 != 0) {
            goto loop_3;
        }
    } while (var_s1 != 0);
    D_803B75A0 = 1;
    D_auto_803B75A9 = 0;
}
#else
INCLUDE_ASM("span_1000", func_80105688);
#endif
