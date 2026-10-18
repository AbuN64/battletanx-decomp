#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_span_1000_code_8007963C.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CE214(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 value;
    buttons = func_80096920(0, 0);
    D_auto_80327614 ^= buttons & 0x80;
    if (D_auto_80327614 != 0) {
        return 0;
    }
    result = 0;
    delta = 0;
    if (buttons & 1) {
        delta = -1;
        func_800ABF40();
    }
    if (buttons & 8) {
        delta++;
        func_800ABF40();
    }
    D_auto_80134E60 += delta;
    if (D_auto_80134E60 < 0) {
        D_auto_80134E60 = 7;
    }
    if (D_auto_80134E60 >= 8) {
        D_auto_80134E60 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta = -1;
        func_800ABF70();
    }
    if (buttons & 4) {
        delta++;
        func_800ABF70();
    }
    switch (D_auto_80134E60) {
    case 0:
        D_auto_80125790 += delta;
        D_auto_80125790 = (D_auto_80125790 < 0) ? 0 : D_auto_80125790;
        D_auto_80125790 = (D_auto_80125790 >= 8) ? 7 : D_auto_80125790;
        func_800799C0((D_auto_80125790 << 12) & 0xF000);
        break;
    case 1:
        D_80125794 += delta;
        D_80125794 = (D_80125794 < 0) ? 0 : D_80125794;
        D_80125794 = (D_80125794 >= 8) ? 7 : D_80125794;
        func_80079BF4((D_80125794 << 28) >> 16);
        break;
    case 2:
        D_auto_80134E64 += delta;
        if (D_auto_80134E64 == 0xFF) {
            D_auto_80134E64 = 2;
        }
        if (D_auto_80134E64 >= 3) {
            D_auto_80134E64 = 0;
        }
        break;
    case 3:
        D_auto_80134E65 = (D_auto_80134E65 + delta) & 1;
        break;
    case 4:
        D_auto_80134E66 = (D_auto_80134E66 + delta) & 1;
        break;
    case 5:
        D_auto_80134E67 = (D_auto_80134E67 + delta) & 1;
        break;
    case 6:
        D_auto_80134E69 = (D_auto_80134E69 + delta) & 1;
        break;
    case 7:
        if (buttons & 0x54) {
            result = 2;
        }
        break;
    }
    if (buttons & 0x20) {
        result = 1;
    }
    return result;
}

INCLUDE_DATA("span_1000", D_800738E8);
INCLUDE_ASM("span_1000", func_800CE4B0);
INCLUDE_ASM("span_1000", func_800CE554);
INCLUDE_ASM("span_1000", func_800CEE2C);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800CF374(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

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
    return D_auto_80328160;
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800CF454(void) {
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    u8 *var_a1;

    var_a2 = 0;
    var_v0 = 0 << 5;
loop_1:
    var_a1 = &D_auto_80327F5E[var_v0];
    var_a0 = 0;
loop_2:
    var_a1 += 1;
    if (*var_a1 == D_auto_80126718[var_a0]) {
        var_a0 += 1;
        if (var_a0 < 0x10) {
            goto loop_2;
        }
    }
    if (var_a0 != 0x10) {
        var_a2 += 1;
        var_v0 = var_a2 << 5;
        if (var_a2 >= 0xF) {
            return -1;
        }
        goto loop_1;
    }
    return var_a2;
}
#else
INCLUDE_ASM("span_1000", func_800CF454);
#endif
INCLUDE_ASM("span_1000", func_800CF4C0);
INCLUDE_ASM("span_1000", func_800CFEB0);
INCLUDE_ASM("span_1000", func_800D05DC);
INCLUDE_ASM("span_1000", func_800D0690);
INCLUDE_ASM("span_1000", func_800D0828);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D0940(void) {
    func_80079064();
    func_800AB690();
    D_auto_80134E75 = 3;
    do {

    } while ((func_800CEE2C() & 0xFFFF) == 0xA);
    func_80079064();
}

s32 func_800D0994(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a3;

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
    var_a3 = D_auto_80328160;
    if ((D_auto_8032815C > 0) & (var_a3 == 0)) {
        s32 i;
        s32 j;
        s32 found;
        u8 *p;
        for (i = 0; i < 15; i++) {
            p = D_auto_80327F5E + i * 32;
            for (j = 0; j < 16; j++) {
                if (*p++ != D_auto_80126718[j]) {
                    break;
                }
            }
            if (j == 16) {
                found = i;
                goto done;
            }
        }
        found = -1;
done:
        D_auto_8032816C = found;
        if (found != -1) {
            var_a3 = func_800D0B0C();
        }
    }
    return var_a3;
}

INCLUDE_ASM("span_1000", func_800D0B0C);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
s32 func_800D0BD4(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

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
    return D_auto_8032815C > 0;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D0CB4(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;

    var_v1 = 0;
    if (arg0 & 1) {
        var_v1 = -1;
        D_auto_80328158 = 8;
    }
    if (arg0 & 8) {
        var_v1 += 1;
        D_auto_80328159 = 8;
    }
    temp_v0 = D_auto_80328150 + var_v1;
    temp_v1 = temp_v0 & ((s32) ~temp_v0 >> 0x1F);
    D_auto_80328150 = temp_v1;
    var_a0 = 0xF;
    if (temp_v1 < 0xF) {
        var_a0 = temp_v1;
    }
    D_auto_80328150 = var_a0;
}

