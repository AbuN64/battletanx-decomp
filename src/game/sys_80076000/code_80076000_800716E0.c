#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_types.h"

void func_80086B48(u8 *arg0, f32 arg1) {
    f32 t;
    f32 t2;
    f32 t3;
    u32 v;
    u32 w;
    u32 x;

    t = arg0[0xC] * arg1;
    if (t > 255.0f) {
        v = 255;
    } else {
        v = t;
    }
    t2 = arg0[0xD] * arg1;
    arg0[0xC] = v;
    if (t2 > 255.0f) {
        w = 255;
    } else {
        w = t2;
    }
    t3 = arg0[0xE] * arg1;
    arg0[0xD] = w;
    if (t3 > 255.0f) {
        x = 255;
    } else {
        x = t3;
    }
    arg0[0xE] = x;
}

INCLUDE_RODATA("span_1000", R_800716F8);
INCLUDE_RODATA("span_1000", R_80071700);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F29F0.h"
extern f32 D_auto_800716F8;
extern f32 D_auto_800716FC;

void func_80086C84(s32 arg0, void *arg1, f32 arg2) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    struct Func_800F3014_View0_Shared800F3014 *var_a1;

    var_a1 = arg1;
    var_a2 = 0;
    if (arg0 > 0) {
        do {
            temp_fv1 = (f32) var_a1->field_c * arg2;
            var_v1 = 0xFF;
            if (!(D_auto_800716F8 < temp_fv1)) {
                if (D_auto_800716FC <= temp_fv1) {
                    var_v1 = (s32) (temp_fv1 - D_auto_800716FC) | 0x80000000;
                } else {
                    var_v1 = (s32) temp_fv1;
                }
            }
            temp_fv1_2 = (f32) var_a1->field_d * arg2;
            var_a1->field_c = (u8) var_v1;
            if (D_auto_800716F8 < temp_fv1_2) {
                var_v1_2 = 0xFF;
            } else if (D_auto_800716FC <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_auto_800716FC) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            temp_fv1_3 = (f32) var_a1->field_e * arg2;
            var_a1->field_d = (u8) var_v1_2;
            if (D_auto_800716F8 < temp_fv1_3) {
                var_v0 = 0xFF;
            } else if (D_auto_800716FC <= temp_fv1_3) {
                var_v0 = (s32) (temp_fv1_3 - D_auto_800716FC) | 0x80000000;
            } else {
                var_v0 = (s32) temp_fv1_3;
            }
            var_a1->field_e = (u8) var_v0;
            var_a2 += 1;
            var_a1 += 0x10;
        } while (var_a2 < arg0);
    }
}
#else
INCLUDE_ASM("span_1000", func_80086C84);
#endif
INCLUDE_ASM("span_1000", func_80086DC0);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
extern s32 D_auto_0000936C;
extern s32 D_auto_00009370;
extern s32 D_auto_00009374;
extern s32 D_auto_0000937C;

s32 func_80086F3C(struct Slot *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    temp_t0 = arg0->unk28;
    var_a0 = 0;
    if (*(temp_t0 + &D_auto_0000936C) > 0) {
        var_v1 = temp_t0;
loop_2:
        if (*(var_v1 + &D_auto_00009370) != arg1) {
            var_a0 += 1;
            var_v1 += 0x10;
            if (var_a0 >= *(temp_t0 + &D_auto_0000936C)) {
                goto block_10;
            }
            goto loop_2;
        }
        if (arg3 == 0) {
            return 0;
        }
        *(var_v1 + &D_auto_0000937C) = *(var_v1 + &D_auto_0000937C) + 1;
        return 0;
    }
block_10:
    temp_v1 = *(temp_t0 + &D_auto_0000936C);
    if (temp_v1 == 0x100) {
        return -1;
    }
    if (arg3 != 0) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    *(temp_t0 + (temp_v1 * 0x10) + &D_auto_0000937C) = var_v0;
    *(temp_t0 + (*(temp_t0 + &D_auto_0000936C) * 0x10) + &D_auto_00009370) = arg1;
    temp_v1_2 = *(temp_t0 + &D_auto_0000936C);
    *(temp_t0 + &D_auto_0000936C) = temp_v1_2 + 1;
    *(temp_t0 + (temp_v1_2 * 0x10) + &D_auto_00009374) = arg2;
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_80086F3C);
#endif
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
extern s32 D_auto_0000A374;
extern s32 D_auto_0000A378;
extern s32 D_auto_0000A37C;
extern s32 D_auto_0000A384;

s32 func_80087054(struct Slot *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    temp_t0 = arg0->unk28;
    var_a0 = 0;
    if (*(temp_t0 + &D_auto_0000A374) > 0) {
        var_v1 = temp_t0;
loop_2:
        if (*(var_v1 + &D_auto_0000A378) != arg1) {
            var_a0 += 1;
            var_v1 += 0x10;
            if (var_a0 >= *(temp_t0 + &D_auto_0000A374)) {
                goto block_10;
            }
            goto loop_2;
        }
        if (arg3 == 0) {
            return 0;
        }
        *(var_v1 + &D_auto_0000A384) = *(var_v1 + &D_auto_0000A384) + 1;
        return 0;
    }
block_10:
    temp_v1 = *(temp_t0 + &D_auto_0000A374);
    if (temp_v1 == 0x708) {
        return -1;
    }
    if (arg3 != 0) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    *(temp_t0 + (temp_v1 * 0x10) + &D_auto_0000A384) = var_v0;
    *(temp_t0 + (*(temp_t0 + &D_auto_0000A374) * 0x10) + &D_auto_0000A378) = arg1;
    temp_v1_2 = *(temp_t0 + &D_auto_0000A374);
    *(temp_t0 + &D_auto_0000A374) = temp_v1_2 + 1;
    *(temp_t0 + (temp_v1_2 * 0x10) + &D_auto_0000A37C) = arg2;
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_80087054);
#endif
INCLUDE_ASM("span_1000", func_8008716C);
INCLUDE_ASM("span_1000", func_800874F4);
INCLUDE_ASM("span_1000", func_80087634);
INCLUDE_ASM("span_1000", func_80087798);
INCLUDE_ASM("span_1000", func_8008785C);
INCLUDE_ASM("span_1000", func_80087D30);
INCLUDE_ASM("span_1000", func_80088004);
INCLUDE_ASM("span_1000", func_8008805C);
INCLUDE_ASM("span_1000", func_800880B4);
INCLUDE_ASM("span_1000", func_80088280);
INCLUDE_ASM("span_1000", func_80088360);
