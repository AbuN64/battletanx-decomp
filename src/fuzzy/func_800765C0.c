#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_80076068.h"
#include "shared/bt_types.h"
int func_80076390(int arg0, int arg1);
void func_800765C0(u32 a, u32 b, u32 n) {
    s32 var_s0;
    u32 temp_a0;
    u32 var_a0;
    u32 var_s1;
    u32 var_s2;

    var_s1 = a;
    var_s2 = b;
    var_s0 = n - 1;
    if (n != 0) {
        var_a0 = var_s2;
        do {
            var_s2 += 1;
            temp_a0 = var_s1;
            var_s1 += 1;
            func_80076390(temp_a0, func_80076124(var_a0) & 0xFF);
            var_s0 -= 1;
            var_a0 = var_s2;
        } while (var_s0 != -1);
    }
}
