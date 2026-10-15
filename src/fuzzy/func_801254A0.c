#include "shared/bt_types.h"
s32 func_801254A0(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;

    var_a2 = arg0;
    var_a3 = arg1;
    var_a1 = 0;
    if (var_a2 < 0) {
        var_a3 = -var_a3;
        var_a2 = -var_a2 - (var_a3 != 0);
        var_a1 = 1;
    }
    if ((u32) var_a2 > 0x1FFFFFU) {
        var_v1 = var_a2 >> 0;
        if (var_a3 & 0x7FF) {
            var_a2 |= 0;
            var_a3 |= 0x800;
            goto block_5;
        }
    } else {
block_5:
        var_v1 = var_a2 >> 0;
    }
    if (var_v1 < 0) {

    }
    if (var_a3 < 0) {

    }
    if (var_a1 != 0) {

    }
    return var_a2 >> 0x1F;
}
