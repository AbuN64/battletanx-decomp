#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800C0880(void) {
    D_80327D40 = 0;
    D_80327E30 = 0;
}

INCLUDE_ASM("span_1000", func_800C0898);
INCLUDE_ASM("span_1000", func_800C0EDC);
INCLUDE_ASM("span_1000", func_800C10D8);
INCLUDE_ASM("span_1000", func_800C12D4);
INCLUDE_ASM("span_1000", func_800C17D0);
INCLUDE_ASM("span_1000", func_800C1B54);
INCLUDE_ASM("span_1000", func_800C2050);
INCLUDE_ASM("span_1000", func_800C224C);
#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
s32 func_800C3534(void)
{
    Gfx *dl;
    Gfx *cmd;
    s32 next;
    s32 mask;

    func_800C0898();
    while (D_80327E30 == 0) {
        func_800A8ECC();
        func_800A8EE0();
        D_80327E30 = func_800C36E8();
        func_8007D850();
        D_803276D4 = D_803276D0 + D_803276D8 * 0x2200;
        if (D_80327E30 == 0) {
            func_800C224C(D_80073570);
        }
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
    if (D_80327E40 != -1) {
        func_800798C0(D_80327E40);
        D_80327E40 = -1;
    }
    func_80079BD4();
    func_80079064();
    D_80132EF0 = 0;
    if (D_80327D40 == 5) {
        D_80132EF0 = 1;
        D_80327B4C = 0x12;
        func_800EC380(8);
        return 0xD;
    }
    if (D_80135770 != 0) {
        func_800C3EF0();
        return 0x13;
    }
    return 0xB;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800ABFD0.h"
s32 func_800C36E8(void) {
    s32 buttons;
    s32 result;
    buttons = func_80096920(0, 0);
    result = 0;
    if (buttons & 0x40) {
        result = 1;
    }
    D_80327E31 = 0;
    if (buttons & 0x10) {
        D_80327E31 = 1;
    }
    return result;
}

