#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
void func_800D0CB4(s32 arg0);
int func_800A979C(int arg0, void * arg1);
int func_800A90E0();
s32 func_800A96CC(s32, s32 *);
s32 func_800A9920(s32, s32, s32 *);
s32 func_800A9AB0(s32);
s32 func_800D0690();
extern s32 D_auto_80134E70;
extern s8 D_auto_80134E74;
extern u32 D_auto_80328170;
extern s32 D_auto_80328180;

s32 func_800CF4C0(void) {
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_16;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_19;
    s32 temp_v0_20;
    s32 temp_v0_21;
    s32 temp_v0_22;
    s32 temp_v0_23;
    s32 temp_v0_24;
    s32 temp_v0_25;
    s32 temp_v0_26;
    s32 temp_v0_27;
    s32 temp_v0_28;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    var_s1 = 0;
    temp_v0 = func_80096920(0, 0);
    if (temp_v0 & 0xFF) {
        D_auto_80134E70 = 1;
    }
    switch (D_auto_80328170) {
    case 8:
        if (temp_v0 & 0x20) {
            var_s1 = 4;
            goto block_120;
        }
        var_v0 = 0;
        if (temp_v0 & 0x10) {
            temp_v0_2 = func_800A942C();
            D_auto_8032815C = temp_v0_2;
            if (temp_v0_2 != 0) {
                temp_v0_3 = func_800A9484(temp_v0_2);
                D_auto_80328160 = temp_v0_3;
                if (((temp_v0_3 == 2) | (temp_v0_3 == 0)) != 0) {
                    temp_v0_4 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                    D_auto_80328160 = temp_v0_4;
                    var_s1 = 5;
                    if (temp_v0_4 == 0) {
                        D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                        goto block_13;
                    }
                    goto block_120;
                }
                goto block_13;
            }
            D_auto_80328160 = 0;
block_13:
            var_s1 = 5;
            if (D_auto_80328160 == 0) {
                D_auto_80328160 = D_auto_80126710;
                return 5;
            }
        default:
block_120:
            var_v0 = var_s1;
            /* Duplicate return node #121. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    case 9:
        if (!(temp_v0 & 0x20)) {
            var_v0 = 0;
            if (temp_v0 & 0x10) {
                func_800A9AB0(D_auto_8032815C);
                temp_v0_5 = func_800A942C();
                D_auto_8032815C = temp_v0_5;
                if (temp_v0_5 != 0) {
                    temp_v0_6 = func_800A9484(temp_v0_5);
                    D_auto_80328160 = temp_v0_6;
                    if (((temp_v0_6 == 2) | (temp_v0_6 == 0)) != 0) {
                        temp_v0_7 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                        D_auto_80328160 = temp_v0_7;
                        var_s1 = 5;
                        if (temp_v0_7 == 0) {
                            D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                            goto block_22;
                        }
                        goto block_120;
                    }
                    goto block_22;
                }
                D_auto_80328160 = 0;
block_22:
                var_s1 = 5;
                if (D_auto_80328160 == 0) {
                    D_auto_80328160 = D_auto_80126710;
                    return 5;
                }
                goto block_120;
            }
            /* Duplicate return node #121. Try simplifying control flow for better match */
            return var_v0;
        }
block_99:
        D_auto_80134E74 = 0;
        var_s1 = 4;
        goto block_120;
    case 10:
        func_800D0CB4(temp_v0 & 0xFF);
        if (!(temp_v0 & 0x20)) {
            var_v0 = 0;
            if (temp_v0 & 0x10) {
                temp_v0_8 = func_800A942C();
                D_auto_8032815C = temp_v0_8;
                if (temp_v0_8 != 0) {
                    temp_v0_9 = func_800A9484(temp_v0_8);
                    D_auto_80328160 = temp_v0_9;
                    if (((temp_v0_9 == 2) | (temp_v0_9 == 0)) != 0) {
                        temp_v0_10 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                        D_auto_80328160 = temp_v0_10;
                        if (temp_v0_10 == 0) {
                            D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                            goto block_31;
                        }
                    } else {
                        goto block_31;
                    }
                } else {
                    D_auto_80328160 = 0;
block_31:
                    if (D_auto_80328160 == 0) {
                        D_auto_80328160 = D_auto_80126710;
                    }
                }
                D_auto_80126710 = 0;
                var_s1 = 5;
                goto block_120;
            }
        } else {
block_119:
            var_s1 = 4;
            D_auto_80134E74 = 0;
            goto block_120;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 11:
        if (temp_v0 & 0x20) {
            var_s1 = 4;
            goto block_120;
        }
        var_v0 = 0;
        if (temp_v0 & 0x10) {
            temp_v0_11 = func_800A942C();
            D_auto_8032815C = temp_v0_11;
            if (temp_v0_11 != 0) {
                temp_v0_12 = func_800A9484(temp_v0_11);
                D_auto_80328160 = temp_v0_12;
                if (((temp_v0_12 == 2) | (temp_v0_12 == 0)) != 0) {
                    temp_v0_13 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                    D_auto_80328160 = temp_v0_13;
                    var_s1 = 5;
                    if (temp_v0_13 == 0) {
                        D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                        goto block_43;
                    }
                    goto block_120;
                }
                goto block_43;
            }
            D_auto_80328160 = 0;
block_43:
            var_s1 = 5;
            if (D_auto_80328160 == 0) {
                D_auto_80328160 = D_auto_80126710;
                return 5;
            }
            goto block_120;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 0:
        func_800D0CB4(temp_v0 & 0xFF);
        if (temp_v0 & 0x20) {
            var_s1 = 4;
            goto block_120;
        }
        var_v0 = 0;
        if (temp_v0 & 0x10) {
            temp_v1 = D_auto_80328150 << 5;
            var_v0 = 0;
            if (*(&D_auto_80327F50 + temp_v1) != 0) {
                if (*(D_auto_80327F5E + temp_v1) != 0) {
                    D_auto_80328170 = 4;
                    return 0;
                }
                goto block_120;
            }
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 4:
        if (temp_v0 & 0x20) {
            D_auto_80328170 = 0;
            return 0;
        }
        var_v0 = 0;
        if (temp_v0 & 0x10) {
            temp_v0_14 = func_800A979C(D_auto_8032815C, (D_auto_80328150 << 5) + &D_auto_80327F50);
            D_auto_80328160 = temp_v0_14;
            if (temp_v0_14 != 0) {
                var_s1 = 5;
                goto block_120;
            }
            D_auto_80328170 = 0;
            temp_v0_15 = func_800A942C();
            D_auto_8032815C = temp_v0_15;
            if (temp_v0_15 != 0) {
                temp_v0_16 = func_800A9484(temp_v0_15);
                D_auto_80328160 = temp_v0_16;
                if (((temp_v0_16 == 2) | (temp_v0_16 == 0)) != 0) {
                    temp_v0_17 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                    D_auto_80328160 = temp_v0_17;
                    var_v0 = 0;
                    if (temp_v0_17 == 0) {
                        D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                        goto block_63;
                    }
                    /* Duplicate return node #121. Try simplifying control flow for better match */
                    return var_v0;
                }
                goto block_63;
            }
            D_auto_80328160 = 0;
block_63:
            var_v0 = 0;
            if (D_auto_80328160 == 0) {
                D_auto_80328160 = D_auto_80126710;
                return 0;
            }
            /* Duplicate return node #121. Try simplifying control flow for better match */
            return var_v0;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 1:
        func_800D0CB4(temp_v0 & 0xFF);
        if (!(temp_v0 & 0x20)) {
            var_v0 = 0;
            if (temp_v0 & 0x10) {
                temp_v1_2 = D_auto_80328150 << 5;
                var_v0 = 0;
                if (*(&D_auto_80327F50 + temp_v1_2) != 0) {
                    if (*(D_auto_80327F5E + temp_v1_2) != 0) {
                        D_auto_80328170 = 5;
                        return 0;
                    }
                    goto block_120;
                }
            }
            /* Duplicate return node #121. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_99;
    case 5:
        if (temp_v0 & 0x20) {
            D_auto_80328170 = 1;
            return 0;
        }
        var_v0 = 0;
        if (temp_v0 & 0x10) {
            temp_v0_18 = func_800A979C(D_auto_8032815C, (D_auto_80328150 << 5) + &D_auto_80327F50);
            D_auto_80328160 = temp_v0_18;
            if (temp_v0_18 != 0) {
                var_s1 = 5;
                goto block_120;
            }
            temp_v0_19 = func_800A942C();
            D_auto_8032815C = temp_v0_19;
            if (temp_v0_19 != 0) {
                temp_v0_20 = func_800A9484(temp_v0_19);
                D_auto_80328160 = temp_v0_20;
                if (((temp_v0_20 == 2) | (temp_v0_20 == 0)) != 0) {
                    temp_v0_21 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                    D_auto_80328160 = temp_v0_21;
                    var_s1 = 5;
                    if (temp_v0_21 == 0) {
                        D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                        goto block_81;
                    }
                    goto block_120;
                }
                goto block_81;
            }
            D_auto_80328160 = 0;
block_81:
            var_s1 = 5;
            if (D_auto_80328160 == 0) {
                D_auto_80328160 = D_auto_80126710;
                return 5;
            }
            goto block_120;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 6:
        func_800D0CB4(temp_v0 & 0xFF);
        if (!(temp_v0 & 0x20)) {
            var_v0 = 0;
            if (temp_v0 & 0x10) {
                temp_v0_22 = func_800A96CC(D_auto_8032815C, &D_auto_8032816C);
                D_auto_80328160 = temp_v0_22;
                if ((temp_v0_22 == 0) && (temp_v0_23 = func_800A9920(D_auto_8032815C, D_auto_8032816C, &D_auto_80328180), D_auto_80328160 = temp_v0_23, (temp_v0_23 == 0))) {
                    temp_v0_24 = func_800A942C();
                    D_auto_8032815C = temp_v0_24;
                    if (temp_v0_24 != 0) {
                        temp_v0_25 = func_800A9484(temp_v0_24);
                        D_auto_80328160 = temp_v0_25;
                        if (((temp_v0_25 == 2) | (temp_v0_25 == 0)) != 0) {
                            temp_v0_26 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                            D_auto_80328160 = temp_v0_26;
                            if (temp_v0_26 == 0) {
                                D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                                goto block_92;
                            }
                            goto block_94;
                        }
                        goto block_92;
                    }
                    D_auto_80328160 = 0;
block_92:
                    if ((D_auto_80328160 != 0) || (D_auto_80328160 = D_auto_80126710, var_v0 = 2, (D_auto_80126710 != 0))) {
                        goto block_94;
                    }
                } else {
block_94:
                    D_auto_80134E74 = 0;
                    var_s1 = 5;
                    goto block_120;
                }
            }
        } else {
            goto block_99;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 3:
        if (temp_v0 & 0x10) {
            func_800A90E0();
            var_v0_2 = func_800A942C();
            D_auto_8032815C = var_v0_2;
            if (var_v0_2 != 0) {
block_110:
                temp_v0_27 = func_800A9484(var_v0_2);
                D_auto_80328160 = temp_v0_27;
                if (((temp_v0_27 == 2) | (temp_v0_27 == 0)) != 0) {
                    temp_v0_28 = func_800A95C0(D_auto_8032815C, &D_auto_80327F50, &D_auto_80328168);
                    D_auto_80328160 = temp_v0_28;
                    if (temp_v0_28 == 0) {
                        D_auto_80328160 = func_auto_800A9B70(D_auto_8032815C, &D_auto_80328164);
                        goto block_114;
                    }
                } else {
                    goto block_114;
                }
            } else {
block_113:
                D_auto_80328160 = 0;
block_114:
                if (D_auto_80328160 == 0) {
                    D_auto_80328160 = D_auto_80126710;
                }
            }
block_116:
            if (D_auto_8032815C != 0) {
                D_auto_80134E74 = 1;
                var_s1 = 5;
            }
            goto block_120;
        }
        var_v0 = 0;
        if (temp_v0 & 0x20) {
            goto block_99;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    case 7:
        var_v0_3 = temp_v0 & 0x20;
        if (temp_v0 & 0x10) {
            var_s1 = 5;
            func_800D0690();
            if (D_auto_80328160 == 0) {
                var_s1 = 3;
            }
            var_v0_3 = temp_v0 & 0x20;
        }
        if (var_v0_3 != 0) {
            var_s1 = 3;
            goto block_120;
        }
        return var_s1;
    case 2:
        if (temp_v0 & 0x10) {
            func_800A90E0();
            var_v0_2 = func_800A942C();
            D_auto_8032815C = var_v0_2;
            if (var_v0_2 != 0) {
                goto block_110;
            }
            goto block_113;
            goto block_116;
        }
        var_v0 = 0;
        if (temp_v0 & 0x20) {
            goto block_119;
        }
        /* Duplicate return node #121. Try simplifying control flow for better match */
        return var_v0;
    }
}
