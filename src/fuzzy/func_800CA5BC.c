#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CA8C0(s32, s32 *, s32, s32);
extern s32 D_auto_80134010;
extern s32 D_auto_80134E58;
extern u8 D_auto_80135773;
extern s32 D_auto_80327614;
extern s32 D_auto_80327F10;
extern u8 D_auto_80327F20;
extern s32 D_auto_80327F3C;

s32 func_800CA5BC(void) {
    s32 *temp_a1;
    s32 *temp_v0_2;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;
    u8 *var_s2;

    var_s1 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (var_s1 & 0x80);
    D_auto_80327614 = temp_v1;
    if (temp_v1 != 0) {
        goto block_1;
    }
    temp_v0 = D_auto_80134E58;
    var_s0 = 0;
    if (temp_v0 > 0) {
        var_s2 = &D_auto_80327F20;
loop_4:
        if (var_s0 != 0) {
            var_s1 = func_80096920(var_s0, 0);
        }
        if (*var_s2 == 0) {
            if (var_s0 == 0) {
loop_9:
                if (var_s1 & 0x100) {
                    D_auto_80327F3C -= 1;
                }
                if (var_s1 & 0x200) {
                    D_auto_80327F3C += 1;
                }
                if (D_auto_80327F3C < -2) {
                    D_auto_80327F3C = 3;
                }
                if (D_auto_80327F3C == -1) {
                    D_auto_80327F3C = D_auto_80134E58;
                }
                if ((D_auto_80327F3C < D_auto_80134E58) || (D_auto_80327F3C == 4)) {
                    D_auto_80327F3C = -2;
                }
                if ((D_auto_80327F3C != -2) && ((&D_auto_80328400)[D_auto_80327F3C] == 4)) {
                    goto loop_9;
                }
            }
            var_a2 = var_s0;
            if ((D_auto_80327F3C != -2) & (var_s0 == 0)) {
                var_a2 = D_auto_80327F3C;
            }
            if (var_s1 & 1) {
                temp_v1_2 = (var_a2 * 4) + &D_auto_80327F10;
                *temp_v1_2 = -*temp_v1_2;
            }
            if (var_s1 & 8) {
                temp_v1_3 = (var_a2 * 4) + &D_auto_80327F10;
                *temp_v1_3 = -*temp_v1_3;
            }
            temp_a1 = (var_a2 * 4) + &D_auto_80134010;
            temp_a3 = (0 - ((var_s1 & 2) != 0)) + ((var_s1 & 4) != 0);
            temp_a0 = *temp_a1 + temp_a3;
            *temp_a1 = temp_a0;
            if ((D_auto_80135773 == 0) && (temp_a0 == 1)) {
                *temp_a1 = temp_a3 + 1;
            }
            temp_v0_2 = (var_a2 * 4) + &D_auto_80134010;
            var_v1 = *temp_v0_2;
            if (var_v1 < 0) {
                var_v1 = 9;
            }
            temp_a0_2 = var_v1 & -(var_v1 < 0xA);
            *temp_v0_2 = temp_a0_2;
            func_800CA8C0(temp_a0_2, temp_a1, var_a2, temp_a3);
        }
        if (var_s1 & 0x10) {
            *var_s2 ^= 1;
        }
        if ((var_s0 != 0) || (var_v0 = 2, ((var_s1 & 0x20) == 0))) {
            var_s0 += 1;
            var_s2 += 1;
            if (var_s0 >= D_auto_80134E58) {
                goto block_40;
            }
            goto loop_4;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
        return var_v0;
    }
block_40:
    var_s0_2 = 0;
    if (temp_v0 > 0) {
loop_42:
        var_s0_2 += 1;
        if ((&D_auto_80327F20)[var_s0_2] != 0) {
            if (var_s0_2 >= temp_v0) {
                goto block_44;
            }
            goto loop_42;
        }
block_1:
        return 0;
    }
block_44:
    var_v0 = 1;
    return var_v0;
}
