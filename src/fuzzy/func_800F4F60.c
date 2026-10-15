#include "shared/bt_span_1000_code_800F45C8.h"
#include "shared/bt_types.h"
int func_800F53B8();
int func_800F5610();
extern u32 D_auto_8035BCD0;
extern s32 D_auto_8035BCE0;
extern s8 D_auto_8035CCA3;
extern s32 D_auto_8035CD1C;
extern s32 D_auto_8035CD20;
extern s32 D_auto_803620F4;
extern u32 D_auto_803620F8;
extern u32 *D_auto_803620FC;
extern s8 *D_auto_80362100;
extern s32 D_auto_80362104;
extern s32 D_auto_80362108;

s32 func_800F4F60(s32 arg0, u32 *arg1, u32 arg2, s8 *arg3) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s8 *temp_a0;
    s8 *temp_v1;
    s8 *temp_v1_2;
    s8 *var_v0;
    s8 temp_v0_2;
    u32 temp_v0;
    u32 var_s2;
    u8 *temp_a0_2;
    u8 temp_s0;

    D_auto_8035CD1C = 0;
    D_auto_8035CD20 = 0x20000;
    D_auto_8035CD24 = 0;
    D_auto_80362104 = 0;
    D_auto_80362108 = 0;
    D_auto_803620F4 = arg0;
    D_auto_803620FC = arg1;
    D_auto_803620F8 = arg2;
    D_auto_80362100 = arg3;
    temp_v0 = *arg1;
    D_auto_803620FC = arg1 + 4;
    D_auto_8035BCD0 = temp_v0;
    if ((temp_v0 == 0) || (arg2 < temp_v0)) {
        return -1;
    }
    func_800F5128();
    func_auto_800F5178();
    var_a2 = 0xFC3;
    var_v0 = &D_auto_8035CCA3;
    do {
        *var_v0 = 0x20;
        var_a2 -= 1;
        var_v0 -= 1;
    } while (var_a2 >= 0);
    var_s1 = 0xFC4;
    var_s2 = 0;
    if (D_auto_8035BCD0 != 0) {
        do {
            temp_v0_2 = func_800F53B8();
            temp_a0 = var_s1 + &D_auto_8035BCE0;
            if (temp_v0_2 < 0x100) {
                temp_v1 = D_auto_80362100;
                var_s1 = (var_s1 + 1) & 0xFFF;
                var_s2 += 1;
                D_auto_80362100 = temp_v1 + 1;
                *temp_v1 = temp_v0_2;
                *temp_a0 = temp_v0_2;
            } else {
                temp_a2 = ((var_s1 - func_800F5610(temp_a0)) - 1) & 0xFFF;
                temp_a3 = temp_v0_2 - 0xFD;
                var_a1 = 0;
                if (temp_a3 > 0) {
                    do {
                        temp_s0 = *(&D_auto_8035BCE0 + ((temp_a2 + var_a1) & 0xFFF));
                        temp_a0_2 = var_s1 + &D_auto_8035BCE0;
                        var_s1 = (var_s1 + 1) & 0xFFF;
                        temp_v1_2 = D_auto_80362100;
                        var_s2 += 1;
                        var_a1 += 1;
                        D_auto_80362100 = temp_v1_2 + 1;
                        *temp_v1_2 = (s8) temp_s0;
                        *temp_a0_2 = temp_s0;
                    } while (var_a1 < temp_a3);
                }
            }
        } while (var_s2 < (u32) D_auto_8035BCD0);
    }
    return 0;
}
