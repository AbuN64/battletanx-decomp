#include "shared/bt_types.h"
extern s32 D_auto_800730B0;

float func_800A7650(s32 *arg0) {
    s32 *var_a0;
    s32 *var_a1;
    s32 *var_a3;
    s32 var_a2;
    s32 var_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = var_a0;
    do {
        var_v1 = 0;
        var_a1 = var_a0;
loop_2:
        if (var_a2 == var_v1) {
            *var_a3 = D_auto_800730B0;
        } else {
            *var_a1 = 0;
        }
        var_v1 += 1;
        var_a1 += 4;
        if (var_v1 < 4) {
            goto loop_2;
        }
        var_a3 += 0x14;
        var_a2 += 1;
        var_a0 += 0x10;
    } while (var_a2 < 4);
}
