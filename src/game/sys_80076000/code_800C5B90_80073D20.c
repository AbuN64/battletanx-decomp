#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800D1EBC(u32 kind) {
    switch (kind) {
    case 0:
        func_800796F0(0x26, 0);
        break;
    case 1:
        func_800796F0(0x1C, 0);
        break;
    case 2:
        func_800796F0(1, 0);
        break;
    case 3:
        func_800796F0(3, 0);
        break;
    case 4:
        func_800796F0(0xD, 0);
        break;
    }
}

INCLUDE_RODATA("span_1000", R_80073D34);
INCLUDE_DATA("span_1000", D_80073D44);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline s32 row_section(s32 row, s32 first, s32 header, s32 base, s32 *isFirst, s32 *offset, s32 section) {
    *isFirst = row == first;
    *offset = row - header - base;
    return section;
}
s32 func_800D1F20(s32 row, s32 count1, s32 count2, s32 count3, s32 count4, s32 *isFirst, s32 *offset) {
    s32 base6;
    s32 base7;
    s32 base8;
    s32 base9;
    s32 end5;
    s32 end6;
    s32 end7;
    s32 end8;
    s32 size;
    if (row < 10) {
        return row_section(row, 0, 0, 0, isFirst, offset, 0);
    }
    if (row < 40) {
        return row_section(row, 10, 10, 0, isFirst, offset, 1);
    }
    if (row < 70) {
        return row_section(row, 40, 40, 0, isFirst, offset, 2);
    }
    if (row < 100) {
        return row_section(row, 70, 70, 0, isFirst, offset, 3);
    }
    if (row < 130) {
        return row_section(row, 100, 100, 0, isFirst, offset, 4);
    }
    base6 = count3 / 200 * 2;
    end5 = base6 + 145;
    if (row < end5) {
        return row_section(row, 130, 130, 0, isFirst, offset, 5);
    }
    size = count1 * 6 + 145;
    base7 = base6 + size;
    end6 = base7 + 15;
    if (row < end6) {
        return row_section(row, end5, 145, base6, isFirst, offset, 6);
    }
    size = count2 * 40 + 15;
    base8 = base7 + size;
    end7 = base8 + 30;
    if (row < end7) {
        return row_section(row, end6, 15, base7, isFirst, offset, 7);
    }
    size = count4 * 40 + 30;
    base9 = base8 + size;
    end8 = base9 + 30;
    if (row < end8) {
        return row_section(row, end7, 30, base8, isFirst, offset, 8);
    }
    return row_section(row, end8, 30, base9, isFirst, offset, 9);
}

INCLUDE_ASM("span_1000", func_800D20E4);
#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_8011CC84(s8 *, s32 *, s32);
extern s32 D_auto_80073D70;
extern s8 D_auto_80073D84;

void func_800D39A4(s32 arg0, s32 arg1) {
    s8 sp10;

    func_8010555C(0xFA, 0x1E, 0x1E, 0xFF);
    func_8010698C(&D_8037A174);
    func_801054E0(2);
    func_8011CC84(&sp10, &D_auto_80073D70, arg1);
    func_8010552C(0x49, 0x50);
    func_80105A50(&D_8037A174, &sp10, 0, 0x140);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    if (arg0 >= 0x2E) {
        func_8010552C(0x2E, 0x6E);
        func_80105A50(&D_8037A174, &D_auto_80073D84, 0, 0x140);
    }
}
#else
INCLUDE_ASM("span_1000", func_800D39A4);
#endif
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D3A7C(s32 arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = D_auto_80134FD4 + (arg0 * 6) + 0xF;
    D_auto_80134FD8 = temp_v1;
    D_auto_80134FDC = temp_v1 + (arg1 * 0x28) + 0x1E;
}

s32 func_800D3AC4(s32 value, s32 arg1, s32 arg2, s32 *exact, s32 *offset) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (value < D_auto_80134FC0[i]) {
            *exact = value == D_auto_80134FC0[i - 1];
            *offset = value - D_auto_80134FC0[i - 1];
            return i;
        }
    }
    return 8;
}

INCLUDE_ASM("span_1000", func_800D3B2C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_800D3C84(s32 value)
{
    char text[32];
    func_8011CC84(text, D_auto_80073D9C, value);
    func_8010552C(0, 0x3E);
    func_80105A50(&D_8037A174, text, 0, 0x140);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D3CD4(void) {
    func_8010552C(0x2E, 0x56);
    func_80105584(&D_8037A174, &D_auto_80073DB0);
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_8011CC84(s32 *, s32 *);
extern s32 D_auto_80073DBC;
extern s32 D_auto_80073DD0;
extern s32 D_auto_80073DE4;
extern s32 D_auto_80073E00;
extern s32 D_auto_80073E20;
extern s32 D_auto_80073E3C;
extern s32 D_auto_80073E50;
extern s32 D_auto_80073E68;
extern s32 D_auto_80073E84;
extern s32 D_auto_80073EA0;
extern s32 D_auto_80073EBC;
extern s32 D_auto_80073ED4;

void func_800D3D10(u32 arg0) {
    s32 sp10;
    s32 *var_a1;

    switch (arg0) {
    case 0:
        var_a1 = &D_auto_80073DBC;
        break;
    case 1:
        var_a1 = &D_auto_80073DD0;
        break;
    case 2:
        var_a1 = &D_auto_80073DE4;
        break;
    case 3:
        var_a1 = &D_auto_80073E00;
        break;
    case 4:
        var_a1 = &D_auto_80073E20;
        break;
    case 5:
        var_a1 = &D_auto_80073E3C;
        break;
    case 6:
        var_a1 = &D_auto_80073E50;
        break;
    case 7:
        var_a1 = &D_auto_80073E68;
        break;
    case 8:
        var_a1 = &D_auto_80073E84;
        break;
    case 9:
        var_a1 = &D_auto_80073EA0;
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        var_a1 = &D_auto_80073EBC;
        break;
    default:
        var_a1 = &D_auto_80073ED4;
        break;
    }
    func_8011CC84(&sp10, var_a1);
    func_8010552C(0x2E, 0x56);
    func_80105584(&D_8037A174, &sp10);
}
#else
INCLUDE_ASM("span_1000", func_800D3D10);
#endif
INCLUDE_ASM("span_1000", func_800D3E28);
INCLUDE_ASM("span_1000", func_800D4408);
#ifdef NON_MATCHING
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
#else
INCLUDE_ASM("span_1000", func_800D4410);
#endif
INCLUDE_ASM("span_1000", func_800D44CC);
INCLUDE_ASM("span_1000", func_800D455C);
INCLUDE_ASM("span_1000", func_800D6060);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline u8 find_slot(s32 player, s32 n) {
    u8 i;
    for (i = 0; i < 17; i++) {
        if (D_auto_803282A8[player][i] <= 0xFFFFF) {
            if (--n == -1) {
                break;
            }
        }
    }
    return i;
}
void func_800D6274(s32 player, s32 n, u32 value) {
    s32 ok = 1;
    u8 slot = find_slot(player, n);
    s32 other = -1;
    u32 old = D_auto_803282A8[player][slot];
    s32 i;
    for (i = 0; i < D_auto_80135034[D_auto_803283B8[player]]; i++) {
        if (D_auto_803282A8[player][find_slot(player, i)] == value) {
            other = find_slot(player, i);
            break;
        }
    }
    if (other == -1) {
        for (i = 0; i < 17; i++) {
            if (D_auto_803282A8[player][i] == value) {
                ok = 0;
                break;
            }
        }
    }
    if (ok) {
        D_auto_803282A8[player][slot] = value;
        if (other >= 0) {
            D_auto_803282A8[player][other] = old;
        }
        if (slot == 10) {
            D_auto_803282A8[player][12] = value;
        }
        if (slot == 11) {
            D_auto_803282A8[player][13] = value;
        }
    }
}

INCLUDE_ASM("span_1000", func_800D64CC);
INCLUDE_ASM("span_1000", func_800D68C8);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D68D0(void) {
    D_auto_803283C4 = 2;
    D_auto_803283C0 = 2;
    D_auto_80328400[0] = 0;
    D_auto_80328404 = 1;
    D_auto_801352A4 = 0;
}

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800D6908(void)
{
    u32 size = D_auto_B03D6940 - D_auto_B03D16D0;
    s32 *option = D_auto_80328400;
    s32 i;

    func_80077930((u32)D_auto_B03D16D0, D_auto_803DA800, size);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    D_auto_803283E8 = -2;
    D_auto_803283C4 = 0;
    for (i = 0; i < 4; i++) {
        D_auto_803283F0[i] = 0;
        if (i < D_auto_80134E58) {
            D_auto_803283C8[i] = 0;
            D_auto_803283C4++;
        } else if (option[i] < 4) {
            D_auto_803283D8[i] = 1;
            D_auto_801262C0[i] = 3;
            D_auto_803283C4++;
        } else {
            option[i] = 4;
            D_auto_803283D8[i] = 2;
            D_auto_801262C0[i] = 4;
        }
    }
    D_auto_803283C0 = func_800D9024();
}

INCLUDE_ASM("span_1000", func_800D6A54);
INCLUDE_ASM("span_1000", func_800D6BC0);
INCLUDE_ASM("span_1000", func_800D89F4);
INCLUDE_ASM("span_1000", func_800D8C20);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"



s32 func_800D9024(void)
{
    s32 count = 0;
    s32 value;
    s32 i;

    for (value = 0; value < 4; value++) {
        for (i = 0; i < 4; i++) {
            if (D_auto_80328400[i] == value) {
                count++;
                break;
            }
        }
    }
    return count;
}

