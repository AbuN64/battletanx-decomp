#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_80142B50;
extern s32 D_auto_80142B60;
extern s32 D_auto_803B75B0;
extern u16 D_auto_803B8230;
extern s32 D_auto_803B8234;
extern s32 D_auto_803B8238;
extern s32 D_auto_803B823C;
extern s32 D_auto_803B8240;
extern s32 D_auto_803B824A;
extern s32 D_auto_803B824C;
extern s32 D_auto_803B8256;
extern s32 D_auto_803B8258;
extern s32 D_auto_803B8266;

s32 func_80107170(s32 arg0) {
    s32 *var_t4;
    s16 *var_a0;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_v1_3;
    s32 *var_t2;
    s32 *var_t3;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0_3;
    s32 var_t5;
    s32 var_t8;
    s32 var_v0;
    u16 *var_t0;
    u16 var_a0_2;
    u16 var_a2;
    u16 var_v0_2;
    u16 var_v1;
    u16 var_v1_2;
    u32 var_t6;

    if (arg0 != -1) {
        temp_a1 = arg0 * 0x28;
        temp_a0 = *(&D_auto_803B824C + temp_a1);
        var_t8 = 0;
        if (temp_a0 != -1) {
            *(&D_auto_803B824A + (temp_a0 * 0x28)) = *(&D_auto_803B824A + temp_a1);
            temp_a0_2 = *(&D_auto_803B824A + temp_a1);
            if (temp_a0_2 != -1) {
                var_v1 = *(&D_auto_803B824C + temp_a1);
                var_v0 = temp_a0_2 * 0x28;
                goto block_7;
            }
        } else {
            temp_v1 = *(&D_auto_803B824A + temp_a1);
            D_auto_803B8240 = (s32) temp_v1;
            if (temp_v1 != temp_a0) {
                var_v0 = temp_v1 * 0x28;
                var_v1 = -1U;
block_7:
                *(&D_auto_803B824C + var_v0) = var_v1;
            }
        }
        temp_a0_3 = arg0 * 0x28;
        *(&D_auto_803B824C + temp_a0_3) = -1;
        *(&D_auto_803B824A + temp_a0_3) = (s16) D_auto_803B8234;
        if (D_auto_803B8234 != -1) {
            *(&D_auto_803B824C + (D_auto_803B8234 * 0x28)) = (s16) arg0;
        }
        var_t6 = 0;
        var_t0 = temp_a0_3 + &D_auto_803B8266;
        var_t5 = 0;
        var_t4 = &D_auto_803B75B0;
        var_t3 = &D_auto_80142B60;
        var_t2 = &D_auto_80142B50;
        D_auto_803B8234 = arg0;
        do {
            var_a0 = (((s32) (*(&D_auto_803B8258 + temp_a0_3) + D_auto_803B823C + *var_t3) >> 0xB) * 2) + ((((s32) (*(&D_auto_803B8256 + temp_a0_3) + D_auto_803B8238 + *var_t2) >> 0xB) * 0x28) + var_t4);
            temp_v0 = *var_a0;
            var_v1_2 = (u16) *var_a0;
            if (temp_v0 == arg0) {
                var_v0_2 = *var_t0;
                var_t8 = 1;
                goto block_14;
            }
            if (temp_v0 != -1) {
loop_17:
                var_a0 = var_t5 + (((s16) var_v1_2 * 0x28) + &D_auto_803B8266);
                temp_v0_2 = *var_a0;
                var_v1_2 = (u16) temp_v0_2;
                if (temp_v0_2 != arg0) {
                    if (temp_v0_2 != -1) {
                        goto loop_17;
                    }
                } else {
                    var_v0_2 = *(var_t5 + (temp_a0_3 + &D_auto_803B8266));
                    var_t8 = 1;
block_14:
                    *var_a0 = var_v0_2;
                }
            }
            if (var_t8 != 0) {
                *var_t0 = -1U;
            }
            var_t0 += 2;
            var_t5 += 2;
            var_t4 += 0x320;
            var_t3 += 4;
            var_t6 += 1;
            var_t2 += 4;
        } while (var_t6 < 4U);
        var_a0_2 = D_auto_803B8230;
        var_a2 = -1U;
        if ((s16) var_a0_2 != -1) {
            temp_t1 = (s16) var_a0_2;
            temp_a1_2 = arg0 * 0x28;
            var_v1_3 = (s16) var_a0_2;
loop_24:
            if (arg0 != var_v1_3) {
                var_a2 = var_a0_2;
                var_a0_2 = *(&D_auto_803B8266 + (var_v1_3 * 0x28));
                var_v1_3 = (s16) var_a0_2;
                if ((s16) var_a0_2 == -1) {

                } else {
                    goto loop_24;
                }
            } else {
                if (var_v1_3 != temp_t1) {
                    if ((s16) var_a2 != -1) {
                        *(&D_auto_803B8266 + ((s16) var_a2 * 0x28)) = *(&D_auto_803B8266 + temp_a1_2);
                    }
                    *(&D_auto_803B8266 + temp_a1_2) = -1;
                    return;
                }
                temp_v0_3 = var_v1_3 * 0x28;
                *(&D_auto_803B8266 + temp_v0_3) = -1;
                D_auto_803B8230 = *(&D_auto_803B8266 + temp_v0_3);
            }
        }
    }
}
