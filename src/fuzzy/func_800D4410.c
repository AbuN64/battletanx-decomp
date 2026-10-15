#include "shared/bt_span_1000_code_80094704.h"
#include "shared/bt_types.h"
s32 *func_80096768(u8);
extern s32 D_auto_803282A0;
extern s32 D_auto_803282A8;
extern u8 D_auto_803283B8;

int func_800D4410(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 *var_a2;
    s32 *var_a3;
    s32 *var_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s1;
    u8 *var_s0;
    u8 temp_v0;
    void *temp_t0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s1 = 0;
    var_s0 = &D_auto_803283B8;
    var_s2 = &D_auto_803282A8;
    do {
        temp_v0 = func_80096760(var_a0, var_a1, var_a2, var_a3);
        *var_s0 = temp_v0;
        *(&D_auto_803282A0 + var_s1) = temp_v0;
        var_a3 = var_s2;
        var_a2 = func_80096768(*var_s0);
        temp_t0 = var_a2 + 0x40;
loop_2:
        var_a0 = var_a2[2];
        var_a1 = var_a2[3];
        var_a3[0] = var_a2[0];
        var_a3[1] = (s32) var_a2[1];
        var_a3[2] = var_a0;
        var_a3[3] = var_a1;
        var_a2 += 0x10;
        var_a3 += 0x10;
        if (var_a2 != temp_t0) {
            goto loop_2;
        }
        *var_a3 = *var_a2;
        var_s0 += 1;
        var_s1 += 1;
        var_s2 += 0x44;
    } while (var_s1 < 4);
}
