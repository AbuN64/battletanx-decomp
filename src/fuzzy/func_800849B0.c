#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_types.h"
s32 func_800824E4(s32, s32, s32, s32, s32, s32, s32);

void func_800849B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    temp_v0 = func_8007AAA0();
    temp_s2 = arg5 & 0xFF;
    if (temp_v0 > 0) {
        var_v0 = temp_s2 >> 0;
        do {
            if (var_v0 & 1) {
                func_800824E4(arg0, arg1, arg2, 0, arg3, arg4, var_s0);
            }
            var_s0 += 1;
            var_v0 = temp_s2 >> var_s0;
        } while (var_s0 < temp_v0);
    }
}
