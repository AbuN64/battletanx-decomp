#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800CF454(void) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    u8 *var_a1;

    var_a2 = 0;
    var_v0 = 0 << 5;
loop_1:
    var_a1 = &D_auto_80327F5E[var_v0];
    var_a0 = 0;
loop_2:
    var_a1 += 1;
    if (*var_a1 == D_auto_80126718[var_a0]) {
        var_a0 += 1;
        if (var_a0 < 0x10) {
            goto loop_2;
        }
    }
    if (var_a0 != 0x10) {
        var_a2 += 1;
        var_v0 = var_a2 << 5;
        if (var_a2 >= 0xF) {
            return -1;
        }
        goto loop_1;
    }
    return var_a2;
}
