#include "shared/bt_types.h"
#include "span_1000/code_800E21E4.h"
void func_800E566C(struct Rec *r);
void func_800E4094(s16 arg0) {
    s16 var_s0;
    s16 var_v0_2;
    s32 temp_a1;
    s32 var_v0;

    var_s0 = 0;
    var_v0 = 0 << 0x10;
    do {
        temp_a1 = var_v0 >> 0x10;
        var_v0_2 = var_s0 + 1;
        if (arg0 != temp_a1) {
            func_800E566C(func_800E52A0(arg0, temp_a1));
            var_v0_2 = var_s0 + 1;
        }
        var_s0 = var_v0_2;
        var_v0 = var_s0 << 0x10;
    } while (var_v0_2 < 0x14);
}
