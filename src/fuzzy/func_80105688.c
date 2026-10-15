#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_8010647C(s32, s32);
u64 func_80124350(u64, u32, s32, s32);
u64 func_80124940(u64, u32, s32, s32);
extern s32 D_803B75A0;

void func_80105688(s32 arg0, s32 arg2, s32 arg3) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u32 temp_v1;
    u64 temp_ret;

    var_s0 = arg2;
    var_s1 = arg3;
    if (var_s0 < 0) {
        var_s1 = -var_s1;
        var_s0 = -var_s0 - (var_s1 != 0);
    }
    D_803B75A0 = -1;
    D_auto_803B75A9 = 1;
    var_a0 = var_s0;
    do {
loop_3:
        func_8010647C(arg0, ((u32) func_80124940((u64) var_a0, (u32) var_s1, 0, 0xA) + 0x30) & 0xFF);
        temp_ret = func_80124350((u64) var_s0, (u32) var_s1, 0, 0xA);
        temp_v1 = (u32) temp_ret;
        var_s0 = temp_ret;
        var_s1 = (s32) temp_v1;
        var_a0 = var_s0;
        if (var_s0 != 0) {
            goto loop_3;
        }
    } while (var_s1 != 0);
    D_803B75A0 = 1;
    D_auto_803B75A9 = 0;
}
