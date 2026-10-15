#include "shared/bt_types.h"
extern s32 D_auto_802D5BC0;
extern s32 D_auto_802D5BC4;

s32 func_80095C1C(s32 *arg0, s32 arg1) {
    s32 *var_a1;
    s32 *var_t0;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v1;

    var_a3 = 0;
    var_t4 = 0;
    var_t3 = 0;
    do {
        var_t2 = 0;
        var_t1 = var_t3;
        var_t0 = (var_a3 * 4) + arg0;
loop_2:
        temp_a1 = var_t1 + (arg1 * 0x960);
        if (*(&D_auto_802D5BC0 + temp_a1) != 0x8FFF) {
            temp_a2 = *(&D_auto_802D5BC4 + temp_a1);
            var_v1 = 0;
            if (var_a3 > 0) {
                var_a1 = arg0;
loop_5:
                if (*var_a1 != temp_a2) {
                    var_v1 += 1;
                    var_a1 += 4;
                    if (var_v1 >= var_a3) {
                        goto block_7;
                    }
                    goto loop_5;
                }
            } else {
block_7:
                *var_t0 = temp_a2;
                var_t0 += 4;
                var_a3 += 1;
            }
        }
        var_t2 += 1;
        var_t1 += 8;
        if (var_t2 < 0x64) {
            goto loop_2;
        }
        var_t4 += 1;
        var_t3 += 0x320;
    } while (var_t4 < 3);
    return var_a3;
}
