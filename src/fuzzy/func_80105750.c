#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_8010647C(s32, u8);

void func_80105750(s32 arg0, u8 *arg1) {
    u8 *var_s0;
    u8 var_a1;

    var_a1 = *arg1;
    var_s0 = arg1 + 1;
    if (var_a1 != 0) {
        do {
            if ((u32) (var_a1 - 0x30) < 0xAU) {
                D_auto_803B75A9 = 1;
            } else {
                D_auto_803B75A9 = 0;
            }
            func_8010647C(arg0, var_a1);
            var_a1 = *var_s0;
            var_s0 += 1;
        } while (var_a1 != 0);
    }
    D_auto_803B75A9 = 0;
}
