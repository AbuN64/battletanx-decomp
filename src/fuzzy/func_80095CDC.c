#include "shared/bt_types.h"
extern s32 D_auto_802D5BC0;
extern s32 D_auto_802D5BC4;

int func_80095CDC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_v0;
    u32 temp_v0;

    temp_t0 = arg2 - arg0;
    temp_v1 = arg4 - 1;
    if (temp_t0 == 0) {
        return arg1 < *(&D_auto_802D5BC0 + ((arg0 * 8) + (temp_v1 * 0x320) + (arg5 * 0x960)));
    }
    temp_t3 = temp_v1 * 0x320;
    temp_t2 = arg5 * 0x960;
    temp_a0 = (arg0 * 8) + temp_t3 + temp_t2;
    if (arg1 >= *(&D_auto_802D5BC0 + temp_a0)) {
        temp_v1_2 = (arg2 * 8) + temp_t3 + temp_t2;
        var_v0 = 1;
        if (arg3 >= *(&D_auto_802D5BC0 + temp_v1_2)) {
            if (*(&D_auto_802D5BC4 + temp_a0) != *(&D_auto_802D5BC4 + temp_v1_2)) {
                if (temp_t0 < 0xA) {
                    temp_v0 = arg1 + arg3;
                    return ((s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1) < *(&D_auto_802D5BC0 + (((arg0 + (temp_t0 / 2)) * 8) + temp_t3 + temp_t2));
                }
                var_a0 = arg0 + 1;
                temp_a2 = arg2 - 1;
                var_v0 = 0;
                if (temp_a2 >= var_a0) {
                    var_a3 = (var_a0 * 8) + temp_t3;
loop_10:
                    var_a0 += 1;
                    if ((arg1 + ((s32) ((var_a0 - arg0) * (arg3 - arg1)) / temp_t0)) >= *(&D_auto_802D5BC0 + (var_a3 + temp_t2))) {
                        var_a3 += 8;
                        if (temp_a2 < var_a0) {
                            goto block_12;
                        }
                        goto loop_10;
                    }
                    goto block_7;
                }
                /* Duplicate return node #13. Try simplifying control flow for better match */
                return var_v0;
            }
block_12:
            var_v0 = 0;
            /* Duplicate return node #13. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
block_7:
    return 1;
}
