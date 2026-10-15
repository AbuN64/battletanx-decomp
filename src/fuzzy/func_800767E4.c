#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
int func_800760DC(int arg0);
s32 func_80076068(s32, s32);

void func_800767E4(void) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    u32 temp_s1;
    u32 temp_v1;
    u32 var_s0;

    temp_s4 = func_800760A0(0xB1FFFFF4) & 0xB1FFFFFC;
    temp_s1 = func_800760A0(0xB1FFFFF8) & 0x01FFFFFC;
    func_80076068(0xB1FFFFFC, 0);
loop_1:
    temp_v1 = temp_s1 >> 2;
    if (func_800760A0(0xB0000010) == 0) {
        func_800760DC(0x1F4);
        goto loop_1;
    }
    var_s0 = 0;
    if (temp_v1 != 0) {
        var_s2 = temp_s4 & 0xB07FFFFF;
        var_s1 = temp_s4;
        do {
            func_80076068(var_s2, func_800760A0(var_s1));
            var_s2 += 4;
            var_s0 += 1;
            var_s1 += 4;
        } while (var_s0 < temp_v1);
    }
    func_800760DC(0x7D0);
    func_80076068(0xB1FFFFF4, 0);
}
