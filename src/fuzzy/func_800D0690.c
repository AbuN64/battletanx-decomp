#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800A9920(s32, s32, s32 *, s32);
extern s32 D_auto_80328180;

s32 func_800D0690(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_a2;

    temp_v0 = func_800A942C();
    D_auto_8032815C = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_800A9484(temp_v0);
        D_auto_80328160 = temp_v0_2;
        if (((temp_v0_2 == 2) | (temp_v0_2 == 0)) != 0) {
            temp_v0_3 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
            D_auto_80328160 = temp_v0_3;
            if (temp_v0_3 == 0) {
                D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                goto block_5;
            }
        } else {
            goto block_5;
        }
    } else {
        D_auto_80328160 = 0;
block_5:
        if (D_auto_80328160 == 0) {
            D_auto_80328160 = D_auto_80126710;
        }
    }
    var_v0 = -1;
    if (D_auto_8032815C > 0) {
        var_v0 = -1;
        if (D_auto_80328160 == 0) {
            var_a1 = 0;
            var_v0_2 = 0 << 5;
loop_10:
            var_a2 = &D_auto_80327F5E[var_v0_2];
            var_a0 = 0;
loop_11:
            var_a2 += 1;
            if (*var_a2 == D_auto_80126718[var_a0]) {
                var_a0 += 1;
                if (var_a0 < 0x10) {
                    goto loop_11;
                }
            }
            if (var_a0 != 0x10) {
                var_a1 += 1;
                var_v0_2 = var_a1 << 5;
                if (var_a1 >= 0xF) {
                    var_a1 = -1;
                } else {
                    goto loop_10;
                }
            }
            D_auto_8032816C = var_a1;
            var_v0 = -1;
            if (var_a1 != -1) {
                temp_v0_4 = func_800A9920(D_auto_8032815C, var_a1, &D_auto_80328180, 0x10);
                D_auto_80328160 = temp_v0_4;
                var_v0 = -1;
                if (temp_v0_4 == 0) {
                    var_v0 = 0;
                }
            }
        }
    }
    return var_v0;
}
