#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_80076390(int arg0, int arg1);
s32 func_80076068(u32, s32);

void func_800764F4(u32 a, u32 b, u32 n) {
    s32 temp_a0_2;
    s32 var_v0;
    u32 temp_a0;
    u32 var_a0;
    u32 var_s0;
    u32 var_s1;

    var_s1 = a;
    var_s0 = n;
    if (var_s0 != 0) {
        var_v0 = var_s1 & 3;
loop_2:
        temp_a0 = var_s1;
        if (var_v0 != 0) {
            var_s1 += 1;
            func_80076390(temp_a0, b & 0xFF);
            var_s0 -= 1;
            var_v0 = var_s1 & 3;
            if (var_s0 != 0) {
                goto loop_2;
            }
        }
    }
    temp_a0_2 = b & 0xFF;
    if (var_s0 >= 4U) {
        do {
            func_80076068(var_s1, (temp_a0_2 << 0x18) | (temp_a0_2 << 0x10) | (temp_a0_2 << 8) | temp_a0_2);
            var_s0 -= 4;
            var_s1 += 4;
        } while (var_s0 >= 4U);
    }
    var_a0 = var_s1;
    if (var_s0 != 0) {
        do {
            var_s1 += 1;
            func_80076390(var_a0, b & 0xFF);
            var_s0 -= 1;
            var_a0 = var_s1;
        } while (var_s0 != 0);
    }
}
