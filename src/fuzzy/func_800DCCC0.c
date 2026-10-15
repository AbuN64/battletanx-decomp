#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
void func_800ABF40(void);
void func_800ABF70(void);
void func_800ABF1C(void);
s32 func_800DCA7C();
extern s32 D_auto_80135680;
extern s32 D_auto_8013568C;
extern s32 D_auto_80327614;
extern s32 D_auto_80328420;
extern s32 D_auto_80328424;
extern s32 D_auto_80328428;
extern s32 D_auto_8032842F;
extern s32 D_auto_80328430;
extern s8 D_auto_80328439;
extern u8 D_auto_8032843A;
extern s32 D_auto_80328440;

int func_800DCCC0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_v0_3;
    s8 *var_v0_5;
    u8 var_v0_4;

    var_s1 = 0;
    temp_v0 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (temp_v0 & 0x80);
    D_auto_80327614 = temp_v1;
    if (temp_v1 != 0) {
        return 0;
    }
    if (D_auto_80328424 != 1) {
        if (D_auto_80328424 >= 2) {
            if (D_auto_80328424 == 2) {
                var_s1 = 2;
                goto block_15;
            }
            var_v0_2 = temp_v0 & 1;
        } else {
            if (D_auto_80328424 == 0) {
                var_s1 = 0xB;
                goto block_15;
            }
            var_v0_2 = temp_v0 & 1;
        }
    } else {
        var_s1 = 0xA;
block_15:
        var_v0_2 = temp_v0 & 1;
    }
    var_s0 = 0;
    if (var_v0_2 != 0) {
        var_s0 = -1;
        func_800ABF40();
    }
    if (temp_v0 & 8) {
        var_s0 += 1;
        func_800ABF40();
    }
    temp_v0_2 = D_auto_80328424 + var_s0;
    D_auto_80328424 = temp_v0_2;
    if (temp_v0_2 < 0) {
        D_auto_80328424 = 2;
    }
    if (D_auto_80328424 >= 3) {
        D_auto_80328424 = 0;
    }
    var_s0_2 = 0;
    if (temp_v0 & 2) {
        var_s0_2 = -1;
        func_800ABF70();
    }
    if (temp_v0 & 4) {
        var_s0_2 += 1;
        func_800ABF70();
    }
    temp_v0_3 = D_auto_80328420 + var_s0_2;
    D_auto_80328420 = temp_v0_3;
    if (temp_v0_3 < 0) {
        D_auto_80328420 = var_s1 - 1;
    }
    if (D_auto_80328420 >= var_s1) {
        D_auto_80328420 = 0;
    }
    var_v0 = temp_v0 & 0x20;
    if (temp_v0 & 0x50) {
        func_800ABF1C();
        if (D_auto_80328424 != 1) {
            if (D_auto_80328424 >= 2) {
                var_v0 = temp_v0 & 0x20;
                if (D_auto_80328424 == 2) {
                    if (D_auto_80328420 == 0) {
                        if (D_auto_80328428 > 0) {
                            *(&D_auto_8032842F + D_auto_80328428) = 0x20;
                            D_auto_80328428 -= 1;
                        }
                        D_auto_80328440 = -1;
                        return temp_v0 & 0x20;
                    }
                    func_800DCA7C();
                    return temp_v0 & 0x20;
                }
                /* Duplicate return node #57. Try simplifying control flow for better match */
                return var_v0;
            }
            if (D_auto_80328424 != 0) {
                return temp_v0 & 0x20;
            }
            if (D_auto_8032843A != 0) {
                var_v1 = 9;
                var_v0_3 = &D_auto_80328439;
                D_auto_8032843A = 0;
                D_auto_80328428 = 0;
                do {
                    *var_v0_3 = 0x20;
                    var_v1 -= 1;
                    var_v0_3 -= 1;
                } while (var_v1 >= 0);
            }
            if (D_auto_80328428 < 0xA) {
                D_auto_80328428 += 1;
                var_v0_4 = *(&D_auto_80135680 + D_auto_80328420);
                goto block_55;
            }
            goto block_56;
        }
        if (D_auto_8032843A != 0) {
            var_v1_2 = 9;
            var_v0_5 = &D_auto_80328439;
            D_auto_8032843A = 0;
            D_auto_80328428 = 0;
            do {
                *var_v0_5 = 0x20;
                var_v1_2 -= 1;
                var_v0_5 -= 1;
            } while (var_v1_2 >= 0);
        }
        if (D_auto_80328428 < 0xA) {
            D_auto_80328428 += 1;
            var_v0_4 = *(&D_auto_8013568C + D_auto_80328420);
block_55:
            *(&D_auto_80328430 + D_auto_80328428) = var_v0_4;
        }
block_56:
        var_v0 = temp_v0 & 0x20;
        /* Duplicate return node #57. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
