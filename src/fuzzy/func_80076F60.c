#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076000.h"
#include "shared/bt_types.h"
s32 func_80076F60(s32 arg0, u32 arg1, u32 arg2) {
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    u32 var_s0;
    u32 var_s1;
    u32 var_s3;

    var_s3 = arg1;
    var_s1 = arg2;
    var_s2 = 0;
    temp_s4 = func_80076000();
    if (var_s1 != 0) {
loop_2:
        var_s0 = var_s1;
        if (var_s1 > 0x8000U) {
            var_s0 = 0x8000;
        }
        func_80076408(0xB1FF0000U, var_s3, var_s0);
        temp_v0 = func_80076BF0(0x606, arg0, (s32) var_s0, 0);
        if (temp_v0 != 0) {
            var_s3 += temp_v0;
            var_s1 -= temp_v0;
            var_s2 += temp_v0;
            if (var_s1 != 0) {
                goto loop_2;
            }
        }
    }
    func_80076038(temp_s4);
    return var_s2;
}
