#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
s32 func_8008F6F4(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32, s32);
extern f32 D_auto_80071CE8;

void func_800902BC(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;

    var_s3 = 0;
    if (arg1 > 0) {
        do {
            var_s3 += 1;
            temp_s2 = (func_800F38F4() % 1280) & 0xFFFF;
            temp_s1 = (func_800F38F4() % 1280) & 0xFFFF;
            temp_s0 = (func_800F38F4() % 1280) & 0xFFFF;
            func_8008F6F4(arg0, 0, 0, 0, temp_s2, temp_s1, temp_s0, (func_800F38F4() % 65535) & 0xFFFF, 0x2000, 0, D_auto_80071CE8, 0, 0, 0x12);
        } while (var_s3 < arg1);
    }
}
