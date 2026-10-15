#include "shared/bt_types.h"


u32 func_800DD200(u32 arg0, s32 arg1, s32 arg2) {
    u32 var_a0;
    u32 var_a1;

    var_a0 = arg0;
    if ((var_a0 >> arg1) & 1) {
        var_a1 = arg1 + arg2;
        if (var_a1 < 0x20U) {
            do {
                var_a0 ^= 1 << var_a1;
                var_a1 += arg2;
            } while (var_a1 < 0x20U);
        }
    }
    return var_a0;
}

