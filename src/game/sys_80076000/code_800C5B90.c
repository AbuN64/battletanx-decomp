#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800C5B90);
INCLUDE_ASM("span_1000", func_800C5C60);
INCLUDE_ASM("span_1000", func_800C7D74);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
extern s32 func_80096920(s32 controller, s32 repeat);
extern void func_800C80E0(void);
extern s32 D_80134010[];
extern u8 D_80135773;
extern s32 D_80327EE8;
extern s32 D_80327EF0;
s32 func_800C7FC0(void);
s32 func_800C7FC0(void)
{
    s32 buttons;
    s32 result;
    s32 delta;
    s32 left;
    s32 right;
    s32 digit;
    s32 masked;
    u16 held;
    buttons = func_80096920(0, 0);
    result = 0;
    held = buttons;
    if (buttons & 1) {
        D_80327EF0 = -D_80327EF0;
    }
    if (buttons & 8) {
        D_80327EF0 = -D_80327EF0;
    }
    left = (buttons & 2) > 0;
    right = (buttons & 4) > 0;
    delta = right - left;
    D_80134010[D_80327EE8] += delta;
    if (D_80135773 == 0 &&
        D_80134010[D_80327EE8] == 1) {
        D_80134010[D_80327EE8] = delta + 1;
    }
    digit = D_80134010[D_80327EE8];
    if (digit < 0) {
        digit = 9;
    }
    masked = -(digit < 10) & digit;
    D_80134010[D_80327EE8] = masked;
    func_800C80E0();
    if (held & 0x50) {
        result = 1;
    }
    if (held & 0x20) {
        result = 2;
    }
    return result;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);




void func_800C80E0(void) {
    s32 previousMode;
    u32 romStart;
    u32 size;
    s32 bundle;

    if (D_80134010[D_80327EE8] >= 10) {
        D_80134010[D_80327EE8] = 0;
    }
    if (D_80134010[D_80327EE8] != D_80327EE4) {
        previousMode = func_800AB95C(4);
        bundle = D_80134010[D_80327EE8];
        size = D_80134080[bundle] - D_80134058[bundle];
        romStart = D_80134058[bundle];
        func_80077930(romStart, D_803DA800, size);
        func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
        func_800AB95C(previousMode);
        D_80133FE0 = 0x40;
        D_80327EE4 = D_80134010[D_80327EE8];
    }
}

INCLUDE_ASM("span_1000", func_800C8204);
INCLUDE_ASM("span_1000", func_800C8210);
INCLUDE_ASM("span_1000", func_800C83D4);
#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
static inline void draw_frame(f32 *value)
{
    Gfx *dl;
    Gfx *cmd;
    s32 next;
    s32 mask;

    func_8007D850();
    D_803276D4 = D_803276D0 + D_803276D8 * 0x2200;
    func_800C83D4(*value);
    cmd = D_803276D4;
    dl = D_803276D0 + D_803276D8 * 0x2200;
    D_803276D4 = cmd + 1;
    gSPEndDisplayListF3D(cmd);
    func_8007EEF8(dl);
    next = D_803276D8 + 1;
    mask = -(next < 3);
    D_803276D8 = next & mask;
    func_8007968C();
    func_8007D998();
}
s32 func_800CA398(void) {
    u8 result;
    s32 i;

    func_800C8210();
    do {
        func_800A8ECC();
        func_800A8EE0();
        result = func_800CA5BC();
        draw_frame(&D_80073700);
    } while (result == 0);
    for (i = 0; i < 3; i++) {
        draw_frame(&D_80073704);
    }
    if (result == 2) {
        return 7;
    }
    for (i = 0; i < 4; i++) {
        D_80134020[i] = D_80134A80[D_80134010[i]];
    }
    return 8;
}

INCLUDE_ASM("span_1000", func_800CA5BC);
INCLUDE_ASM("span_1000", func_800CA8C0);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);


 


void func_800CA980(void)
{
    u32 size = D_B049DCD0 - D_B049C740;

    if (size <= 0x3A980) {
        func_80077930((u32)D_B049C740, D_803275F4, size);
        func_801053B0(1);
        D_80327F40 = 0;
        D_80327F44 = 1;
        func_80079BB4(6);
        func_80079BF4((D_80125794 << 28) >> 16);
    }
}

INCLUDE_ASM("span_1000", func_800CAA04);
INCLUDE_ASM("span_1000", func_800CBDBC);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800CC1A8(void)
{
    s32 buttons;
    s32 delta;
    s32 item;
    buttons = func_80096920(0, 0);
    D_80327614 ^= buttons & 0x80;
    if (D_80327614 != 0) {
        return 0;
    }
    delta = 0;
    if (buttons & 1) {
        delta = -1;
        func_800ABF40();
    }
    if (buttons & 8) {
        delta++;
        func_800ABF40();
    }
    D_80134E54 += delta;
    if ((D_80134E74 == 0 || D_80134E5C != 0) && D_80134E54 == 5) {
        D_80134E54 = delta + 5;
    }
    if (D_80134E54 < 0) {
        D_80134E54 = 6;
    }
    if (D_80134E54 >= 7) {
        D_80134E54 = 0;
    }
    delta = 0;
    if (buttons & 2) {
        delta--;
    }
    if (buttons & 4) {
        delta++;
    }
    item = D_80134E54;
    switch (item) {
    case 0:
        if (delta != 0) {
            func_800ABF70();
            D_80134E58 += delta;
            func_800A90E0();
            if (D_80134E58 <= 0) {
                D_80134E58 = D_80126714;
            }
            if (D_80134E58 > D_80126714) {
                D_80134E58 = 1;
            }
            if (D_80134E58 >= 2) {
                D_80134E5C = (D_80134E5C <= 0) ? 1 : D_80134E5C;
            }
        }
        break;
    case 1:
        if (delta != 0) {
            func_800ABF70();
        }
        if (D_80134E58 >= 2) {
            D_80134E5C += delta;
            if (D_80134E5C >= 5) {
                D_80134E5C = item;
            }
            if (D_80134E5C <= 0) {
                D_80134E5C = 4;
            }
        } else {
            D_80134E5C += delta;
            if (D_80134E5C >= 5) {
                D_80134E5C = 0;
            }
            if (D_80134E5C < 0) {
                D_80134E5C = 4;
            }
        }
        break;
    }
    if (buttons & 0x40) {
        D_80134E54 = 6;
        func_800ABF1C();
        return 1;
    }
    if (D_80134E54 >= 2) {
        delta = buttons & 0x10;
        if (delta) {
            func_800ABF1C();
        }
        return delta;
    }
    return 0;
}

INCLUDE_ASM("span_1000", func_800CC470);
INCLUDE_ASM("span_1000", func_800CC4E4);
INCLUDE_ASM("span_1000", func_800CDFFC);
