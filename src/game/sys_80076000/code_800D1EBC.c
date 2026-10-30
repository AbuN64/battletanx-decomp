#include "include_asm.h"

#include <ultra64.h>
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

INCLUDE_RODATA("span_1000", D_80073D34);
INCLUDE_DATA("span_1000", D_80073D44);
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
#include "shared/bt_menu_render.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800D39A4(s32 level, s32 value)
{
    char buffer[64];

    func_8010555C(0xFA, 0x1E, 0x1E, 0xFF);
    func_8010698C(&D_8037A174);
    func_801054E0(2);
    func_8011CC84(buffer, D_80073D70, value);
    func_8010552C(0x49, 0x50);
    func_80105A50(&D_8037A174, buffer, 0, 0x140);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    if (level >= 0x2E) {
        func_8010552C(0x2E, 0x6E);
        func_80105A50(&D_8037A174, D_80073D84, 0, 0x140);
    }
}
#include "game/sys_80076000.h"


void func_800D3A7C(s32 arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = D_80134FD4 + (arg0 * 6) + 0xF;
    D_80134FD8 = temp_v1;
    D_80134FDC = temp_v1 + (arg1 * 0x28) + 0x1E;
}

s32 func_800D3AC4(s32 value, s32 arg1, s32 arg2, s32 *exact, s32 *offset) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (value < D_80134FC0[i]) {
            *exact = value == D_80134FC0[i - 1];
            *offset = value - D_80134FC0[i - 1];
            return i;
        }
    }
    return 8;
}

void func_800D3B2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    char title[32];
    char value[16];
    char line[32];

    func_8010555C(0xFA, 0x1E, 0x1E, 0xFF);
    func_80102050(0x1C, 0x17, 0, 1);
    func_8010316C();
    func_8010555C(0xFF, 0, 0, 0xFF);
    func_8010698C(&D_8037A174);
    func_801054E0(2);
    func_8011CC84(title, D_80073D90);
    func_8010552C(0x49, 0x1E);
    func_80105A50(&D_8037A174, title, 0, 0x140);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_801054E0(4);
    func_800DD310(arg0, arg1, arg2, arg3, D_80134E64, value);
    func_8011CC84(line, D_80073C80, value);
    func_8010552C(0, 0xBE);
    func_80105A50(&D_8037A174, line, 0, 0x140);
}
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_800D3C84(s32 value)
{
    char text[32];
    func_8011CC84(text, D_80073D9C, value);
    func_8010552C(0, 0x3E);
    func_80105A50(&D_8037A174, text, 0, 0x140);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D3CD4(void) {
    func_8010552C(0x2E, 0x56);
    func_80105584(&D_8037A174, &D_80073DB0);
}

INCLUDE_ASM("span_1000", func_800D3D10);
INCLUDE_ASM("span_1000", func_800D3E28);
INCLUDE_ASM("span_1000", func_800D4408);
INCLUDE_ASM("span_1000", func_800D4410);
INCLUDE_ASM("span_1000", func_800D44CC);
INCLUDE_ASM("span_1000", func_800D455C);
INCLUDE_ASM("span_1000", func_800D6060);
#include "game/sys_80076000.h"
static inline u8 find_slot(s32 player, s32 n) {
    u8 i;
    for (i = 0; i < 17; i++) {
        if (D_803282A8[player][i] <= 0xFFFFF) {
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
    u32 old = D_803282A8[player][slot];
    s32 i;
    for (i = 0; i < D_80135034[D_803283B8[player]]; i++) {
        if (D_803282A8[player][find_slot(player, i)] == value) {
            other = find_slot(player, i);
            break;
        }
    }
    if (other == -1) {
        for (i = 0; i < 17; i++) {
            if (D_803282A8[player][i] == value) {
                ok = 0;
                break;
            }
        }
    }
    if (ok) {
        D_803282A8[player][slot] = value;
        if (other >= 0) {
            D_803282A8[player][other] = old;
        }
        if (slot == 10) {
            D_803282A8[player][12] = value;
        }
        if (slot == 11) {
            D_803282A8[player][13] = value;
        }
    }
}

INCLUDE_ASM("span_1000", func_800D64CC);
INCLUDE_ASM("span_1000", func_800D68C8);
#include "game/sys_80076000.h"


void func_800D68D0(void) {
    D_803283C4 = 2;
    D_803283C0 = 2;
    D_80328400[0] = 0;
    D_80328404 = 1;
    D_801352A4 = 0;
}

#include "game/sys_80076000.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800D6908(void)
{
    u32 size = D_B03D6940 - D_B03D16D0;
    s32 *option = D_80328400;
    s32 i;

    func_80077930((u32)D_B03D16D0, D_803DA800, size);
    func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
    D_803283E8 = -2;
    D_803283C4 = 0;
    for (i = 0; i < 4; i++) {
        D_803283F0[i] = 0;
        if (i < D_80134E58) {
            D_803283C8[i] = 0;
            D_803283C4++;
        } else if (option[i] < 4) {
            D_803283D8[i] = 1;
            D_801262C0[i] = 3;
            D_803283C4++;
        } else {
            option[i] = 4;
            D_803283D8[i] = 2;
            D_801262C0[i] = 4;
        }
    }
    D_803283C0 = func_800D9024();
}

INCLUDE_ASM("span_1000", func_800D6A54);
INCLUDE_ASM("span_1000", func_800D6BC0);
INCLUDE_ASM("span_1000", func_800D89F4);
INCLUDE_ASM("span_1000", func_800D8C20);
#include "game/sys_80076000.h"



s32 func_800D9024(void)
{
    s32 count = 0;
    s32 value;
    s32 i;

    for (value = 0; value < 4; value++) {
        for (i = 0; i < 4; i++) {
            if (D_80328400[i] == value) {
                count++;
                break;
            }
        }
    }
    return count;
}

