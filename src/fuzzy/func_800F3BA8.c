#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
s32 func_800F3BA8(f32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = func_800F3BE4(arg0) + 0x4000;
    var_a0 = temp_v1;
    if ((u32) (temp_v1 & 0xFFFF) <= 0x8000U) {
        var_a0 = 0x8000 - temp_v1;
    }
    return var_a0 & 0xFFFF;
}
