#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_types.h"
extern s32 D_auto_802D5BC0;

int func_8009491C(void) {
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;

    var_s1 = 0;
    var_s0 = 0;
loop_1:
    var_a2 = 0;
    if (var_s1 < func_8007AAA0()) {
        var_a1 = 0;
        do {
            var_a0 = 0;
            var_v1 = var_a1;
loop_4:
            *(&D_auto_802D5BC0 + (var_v1 + var_s0)) = 0x8FFF;
            var_a0 += 1;
            var_v1 += 8;
            if (var_a0 < 0x64) {
                goto loop_4;
            }
            var_a2 += 1;
            var_a1 += 0x320;
        } while (var_a2 < 3);
        var_s0 += 0x960;
        var_s1 += 1;
        goto loop_1;
    }
}
