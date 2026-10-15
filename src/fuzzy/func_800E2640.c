#include "shared/bt_types.h"
#include "span_1000/code_80097038.h"
#include "span_1000/code_800E5328.h"
int func_800E2640(struct Rec *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_s1;
    s32 temp_s0;
    s32 temp_v1_2;
    s32 var_v0;
    u8 temp_v1;

    temp_v1 = arg0->b;
    temp_v0 = temp_v1 * 5;
    var_s1 = temp_v0;
    temp_v1_2 = temp_v0 + 5;
    if (temp_v0 < temp_v1_2) {
        var_v0 = temp_v1 * 0x50000;
loop_2:
        temp_s0 = var_v0 >> 0x10;
        temp_v0_2 = var_s1 + 1;
        if (arg0 == func_800A03B8(temp_s0)) {
            return temp_s0;
        }
        var_s1 = temp_v0_2;
        var_v0 = var_s1 << 0x10;
        if (temp_v0_2 >= temp_v1_2) {
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return 0xFF;
        }
        goto loop_2;
    }
    return 0xFF;
}
