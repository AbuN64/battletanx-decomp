#include "shared/bt_types.h"
void func_800A7ECC(f32 *arg0, s32 arg1, f32 arg2) {
    f32 *var_a0;
    f32 *var_a2;
    f32 var_fv0;
    s32 var_a1;
    s32 var_a3;
    s32 *var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = 0;
    do {
        var_v1 = var_a1;
        var_a2 = var_a0;
loop_2:
        if ((var_a3 < 3) & (var_v1 < (var_a1 + 0xC))) {
            var_fv0 = *var_a2 * arg2;
        } else {
            var_fv0 = *var_a2;
        }
        *var_v1 = var_fv0;
        var_v1 += 4;
        var_a2 += 4;
        if (var_v1 < (var_a1 + 0x10)) {
            goto loop_2;
        }
        var_a0 += 0x10;
        var_a3 += 1;
        var_a1 += 0x10;
    } while (var_a3 < 4);
}
