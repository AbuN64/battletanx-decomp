#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800D1AD0.h"
#include "game/sys_80076000.h"


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

u32 func_800DD244(u32 value)
{
    u32 bit;
    s32 i;
    s32 start;
    s32 stride;
    for (i = 0; i < 16; i++) {
        start = D_auto_8013578C[i].start;
        stride = D_auto_8013578C[i].stride;
        if ((value >> start) & 1) {
            for (bit = start + stride; bit < 32; bit += stride) {
                value ^= 1 << bit;
            }
        }
    }
    return value;
}
