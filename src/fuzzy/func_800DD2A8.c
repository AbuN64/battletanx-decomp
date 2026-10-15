#include "shared/bt_types.h"
extern s32 D_auto_8013578C;
extern s32 D_auto_80135790;

void func_800DD2A8(u32 arg0) {
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a1;
    u32 var_a0;
    u32 var_v0;
    u32 var_v1;

    var_v0 = arg0;
    var_a1 = 0x78;
    do {
        temp_v1 = *(&D_auto_8013578C + var_a1);
        var_a0 = var_v0;
        temp_a2 = *(&D_auto_80135790 + var_a1);
        if ((var_a0 >> temp_v1) & 1) {
            var_v1 = temp_v1 + temp_a2;
loop_4:
            if (var_v1 < 0x20U) {
                var_a0 ^= 1 << var_v1;
                var_v1 += temp_a2;
                goto loop_4;
            }
        }
        var_a1 -= 8;
        var_v0 = var_a0;
    } while (var_a1 >= 0);
}
