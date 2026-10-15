#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
int func_800D9024();
extern s32 D_auto_801262C0;
extern s32 D_auto_80134E58;
extern s32 D_auto_80327614;
extern s32 D_auto_803283C8;
extern s32 D_auto_803283D8;
extern s32 D_auto_803283E8;
extern s32 D_auto_803283F0;

int func_800D8C20(void) {
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 *temp_s3;
    s32 *temp_v1_2;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_5;
    s32 *var_s6;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;

    var_s5 = func_80096920(0, 0);
    temp_v1 = D_auto_80327614 ^ (var_s5 & 0x80);
    D_auto_80327614 = temp_v1;
    var_v0 = 0;
    if (temp_v1 == 0) {
        var_s4 = 0;
        if (D_auto_80134E58 > 0) {
            var_s6 = &D_auto_803283C8;
loop_3:
            if (var_s4 != 0) {
                var_s5 = func_80096920(var_s4, 0);
            }
            if (var_s5 & 0x10) {
                *var_s6 = *var_s6 == 0;
            }
            if ((var_s4 != 0) || (var_v0 = 2, ((var_s5 & 0x20) == 0))) {
                if (*var_s6 == 0) {
                    if (var_s4 == 0) {
                        var_v0_2 = var_s5 & 0x200;
                        if (var_s5 & 0x100) {
                            D_auto_803283E8 -= 1;
                            var_v0_2 = var_s5 & 0x200;
                        }
                        if (var_v0_2 != 0) {
                            D_auto_803283E8 += 1;
                        }
                        if (D_auto_803283E8 < -2) {
                            D_auto_803283E8 = 3;
                        }
                        if (D_auto_803283E8 == -1) {
                            D_auto_803283E8 = D_auto_80134E58;
                        }
                        if ((D_auto_803283E8 < D_auto_80134E58) || (D_auto_803283E8 == 4)) {
                            D_auto_803283E8 = -2;
                        }
                    }
                    var_a1 = var_s4;
                    if ((D_auto_803283E8 != -2) & (var_s4 == 0)) {
                        var_a1 = D_auto_803283E8;
                    }
                    temp_a0 = var_a1 * 4;
                    if (*(temp_a0 + &D_auto_803283D8) != 2) {
                        temp_v1_2 = temp_a0 + &D_auto_803283F0;
                        if (var_s5 & 1) {
                            *temp_v1_2 -= 1;
                        }
                        temp_v1_3 = temp_a0 + &D_auto_803283F0;
                        if (var_s5 & 8) {
                            *temp_v1_3 += 1;
                        }
                        temp_v1_4 = temp_a0 + &D_auto_803283F0;
                        *temp_v1_4 &= 1;
                    }
                    temp_s2 = ((var_s5 & 2) != 0) - ((var_s5 & 4) != 0);
                    temp_s1 = var_a1 * 4;
                    if (temp_s2 != 0) {
                        if (*(temp_s1 + &D_auto_803283F0) == 0) {
                            if (var_a1 < D_auto_80134E58) {
                                temp_v1_5 = temp_s1 + &D_auto_801262C0;
                                temp_v0 = *temp_v1_5 + temp_s2;
                                *temp_v1_5 = temp_v0;
                                if (temp_v0 >= 3) {
                                    *temp_v1_5 = 0;
                                }
                                if (*temp_v1_5 < 0) {
                                    *temp_v1_5 = 2;
                                }
                            } else {
                                temp_s3 = temp_s1 + &D_auto_803283D8;
                                if (*temp_s3 == 2) {
                                    *temp_s3 = 1;
                                    (&D_auto_80328400)[var_a1] = 0;
                                    *(temp_s1 + &D_auto_801262C0) = 3;
                                    D_auto_803283C4 += 1;
                                } else if (D_auto_803283C4 >= 3) {
                                    temp_s0 = &(&D_auto_80328400)[var_a1];
                                    temp_s2_2 = *temp_s0;
                                    *temp_s0 = 4;
                                    if (func_800D9024(temp_a0, var_a1, 4) < 2) {
                                        *temp_s0 = temp_s2_2;
                                    } else {
                                        *temp_s3 = 2;
                                        *(temp_s1 + &D_auto_801262C0) = 4;
                                        D_auto_803283C4 -= 1;
                                    }
                                }
                            }
                        } else {
                            temp_s0_2 = &(&D_auto_80328400)[var_a1];
                            do {
                                *temp_s0_2 = (*temp_s0_2 + temp_s2) & 3;
                            } while (func_800D9024() == 1);
                        }
                    }
                }
                var_s4 += 1;
                var_s6 += 4;
                if (var_s4 >= D_auto_80134E58) {
                    goto block_49;
                }
                goto loop_3;
            }
        } else {
block_49:
            var_s4_2 = 0;
            var_s2 = 0;
            if (D_auto_80134E58 > 0) {
                var_v1 = &D_auto_803283C8;
                do {
                    var_s4_2 += 1;
                    var_s2 += *var_v1 != 0;
                    var_v1 += 4;
                } while (var_s4_2 < D_auto_80134E58);
            }
            var_v0 = var_s2 == D_auto_80134E58;
        }
    }
    return var_v0;
}
