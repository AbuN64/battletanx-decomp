#include "shared/bt_types.h"
int func_800F3D0C(s32 arg0, s32 arg1) {
    s32 var_a0;

    if ((u32) (arg1 & 0xFFFF) >= (u32) (arg0 & 0xFFFF)) {
        var_a0 = arg1 - arg0;
    } else {
        var_a0 = arg0 - arg1;
    }
    if ((u32) (var_a0 & 0xFFFF) > 0x8000U) {
        var_a0 = ~var_a0;
    }
    return var_a0 & 0xFFFF;
}
