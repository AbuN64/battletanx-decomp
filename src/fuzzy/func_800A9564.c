#include "shared/bt_types.h"
extern s32 D_auto_80126724;

void func_800A9564(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 var_a2;
    u8 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = *var_a1;
    if (var_v1 != 0) {
        do {
            var_a1 += 1;
            var_a2 = 0x20;
            if ((u32) (var_v1 - 0x42) < 0x53U) {
                var_a2 = 0x2A;
            } else if ((u32) (var_v1 - 0x10) < 0x33U) {
                var_a2 = *(&D_auto_80126724 + (var_v1 & 0xFF));
            }
            *var_a0 = var_a2;
            var_v1 = *var_a1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    *var_a0 = 0;
}
