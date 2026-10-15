#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
void func_800ABF40(void);
void func_800ABF70(void);
int func_800A90E0();
void func_800ABF1C(void);
extern s32 D_auto_80126714;
extern s32 D_auto_80134E54;
extern s32 D_auto_80134E58;
extern u8 D_auto_80134E74;
extern s32 D_auto_80327614;

s32 func_800CC1A8(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    temp_v0 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (temp_v0 & 0x80);
    D_auto_80327614 = temp_v1;
    var_v0 = 0;
    if (temp_v1 == 0) {
        var_s0 = 0;
        if (temp_v0 & 1) {
            var_s0 = -1;
            func_800ABF40();
        }
        if (temp_v0 & 8) {
            var_s0 += 1;
            func_800ABF40();
        }
        temp_a0 = D_auto_80134E54 + var_s0;
        D_auto_80134E54 = temp_a0;
        if (((D_auto_80134E74 == 0) || (D_auto_80134E5C != 0)) && (temp_a0 == 5)) {
            D_auto_80134E54 = var_s0 + 5;
        }
        var_v0_2 = D_auto_80134E54 < 7;
        if (D_auto_80134E54 < 0) {
            D_auto_80134E54 = 6;
            var_v0_2 = D_auto_80134E54 < 7;
        }
        if (var_v0_2 == 0) {
            D_auto_80134E54 = 0;
        }
        temp_s1 = D_auto_80134E54;
        temp_s0 = ((temp_v0 & 4) != 0) - ((temp_v0 & 2) != 0);
        if (temp_s1 != 0) {
            var_v0_3 = temp_v0 & 0x40;
            if (temp_s1 != 1) {

            } else {
                if (temp_s0 != 0) {
                    func_800ABF70();
                }
                if (D_auto_80134E58 >= 2) {
                    temp_v0_2 = D_auto_80134E5C + temp_s0;
                    D_auto_80134E5C = temp_v0_2;
                    if (temp_v0_2 >= 5) {
                        D_auto_80134E5C = temp_s1;
                    }
                    var_v0_3 = temp_v0 & 0x40;
                    if (D_auto_80134E5C <= 0) {
                        var_v0_4 = 4;
                        goto block_37;
                    }
                } else {
                    temp_v0_3 = D_auto_80134E5C + temp_s0;
                    D_auto_80134E5C = temp_v0_3;
                    if (temp_v0_3 >= 5) {
                        D_auto_80134E5C = 0;
                    }
                    var_v0_3 = temp_v0 & 0x40;
                    if (D_auto_80134E5C < 0) {
                        var_v0_4 = 4;
                        goto block_37;
                    }
                }
            }
        } else {
            var_v0_3 = temp_v0 & 0x40;
            if (temp_s0 != 0) {
                func_800ABF70();
                D_auto_80134E58 += temp_s0;
                func_800A90E0();
                if (D_auto_80134E58 <= 0) {
                    D_auto_80134E58 = D_auto_80126714;
                }
                if (D_auto_80126714 < D_auto_80134E58) {
                    D_auto_80134E58 = 1;
                }
                var_v0_3 = temp_v0 & 0x40;
                if (D_auto_80134E58 >= 2) {
                    var_v0_4 = D_auto_80134E5C;
                    if (var_v0_4 <= 0) {
                        var_v0_4 = 1;
                    }
block_37:
                    D_auto_80134E5C = var_v0_4;
                    var_v0_3 = temp_v0 & 0x40;
                }
            }
        }
        if (var_v0_3 != 0) {
            D_auto_80134E54 = 6;
            func_800ABF1C();
            return 1;
        }
        if (D_auto_80134E54 < 2) {
            return 0;
        }
        temp_s0_2 = temp_v0 & 0x10;
        var_v0 = temp_s0_2;
        if (temp_s0_2 != 0) {
            func_800ABF1C();
            var_v0 = temp_s0_2;
        }
        /* Duplicate return node #45. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
