#include "shared/bt_types.h"
#include "span_1000/code_800F45C8.h"
extern u32 D_auto_8035DBF8;

void func_800F5264(s32 arg0) {
    s32 *temp_a0;
    s32 *temp_a3;
    s32 *temp_v0_2;
    s32 *temp_v1;
    s32 *temp_v1_2;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_v1_2;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v0;
    u32 *var_v1;
    u32 temp_v0;

    if ((u32) *D_auto_8035DC00 >= 0x7FFFU) {
        var_a0 = 0;
        var_a2 = 0x13A;
        var_v1 = &D_auto_8035DBF8;
        var_a1 = &D_auto_8035DC00[0x13A];
        do {
            *var_a1 = var_a0;
            var_a1 -= 4;
            var_a2 -= 1;
            temp_v0 = (u32) (*var_v1 + 1) >> 1;
            var_a0 += temp_v0;
            *var_v1 = temp_v0;
            var_v1 -= 4;
        } while (var_a2 > 0);
        *D_auto_8035DC00 = var_a0;
    }
    var_a2_2 = arg0;
    temp_a3 = &D_auto_8035D710[var_a2_2];
    temp_a0 = &(D_auto_8035D710 - 4)[var_a2_2];
    var_v0 = var_a2_2 < arg0;
    if (*temp_a3 == *temp_a0) {
        var_a1_2 = temp_a0;
        var_a0_2 = temp_a3;
        do {
            var_a1_2 -= 4;
            var_a0_2 -= 4;
            var_a2_2 -= 1;
        } while (*var_a0_2 == *var_a1_2);
        var_v0 = var_a2_2 < arg0;
    }
    if (var_v0 != 0) {
        temp_v1 = &D_auto_8035D220[var_a2_2];
        temp_a1 = *temp_v1;
        temp_v0_2 = &D_auto_8035D220[arg0];
        temp_a0_2 = *temp_v0_2;
        *temp_v1 = temp_a0_2;
        *temp_v0_2 = temp_a1;
        D_auto_8035CD30[temp_a1] = arg0;
        D_auto_8035CD30[temp_a0_2] = var_a2_2;
    }
    temp_v1_2 = &D_auto_8035D710[var_a2_2];
    var_a2_3 = var_a2_2 - 1;
    *temp_v1_2 += 1;
    if (var_a2_3 >= 0) {
        var_v1_2 = &D_auto_8035DC00[var_a2_3];
        do {
            var_a2_3 -= 1;
            *var_v1_2 += 1;
            var_v1_2 -= 4;
        } while (var_a2_3 >= 0);
    }
}
