#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
s32 func_800E0EA8(s32, s32, s32, s32);

s32 func_800DE2FC(s32 arg0, s32 arg1) {
    s32 *temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;

    temp_v0 = func_800E09B0(arg1 & 0xFFFF);
    var_s2 = 0;
    if (temp_v0 == 0) {
        return 0;
    }
    var_s0 = 0;
    var_a0 = 0 & 0xFFFF;
    do {
        temp_v0_2 = D_auto_80135834->unkC;
        if (func_800E0EA8(temp_v0_2 + (*(temp_v0 + (var_a0 * 4)) * 8), temp_v0_2 + (*(temp_v0 + ((((var_a0 + 1) % 3) & 0xFFFF) * 4)) * 8), arg0, (var_a0 + 1) / 3) == 0) {
            var_s2 = 1;
        }
        var_s0 += 1;
        var_a0 = var_s0 & 0xFFFF;
    } while ((u32) (var_s0 & 0xFFFF) < 3U);
    return var_s2 ^ 1;
}
