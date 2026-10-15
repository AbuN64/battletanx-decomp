#include "shared/bt_types.h"
s32 func_800E289C(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 - arg0;
    if (temp_a1 > 0) {
        if (temp_a1 > 0x8000) {
            var_v0 = 0xFFFF0001;
            goto block_5;
        }
        goto block_4;
    }
    var_v0 = 0xFFFF;
    if (temp_a1 >= -0x8000) {
block_4:
        return temp_a1;
    }
block_5:
    return temp_a1 + var_v0;
}
