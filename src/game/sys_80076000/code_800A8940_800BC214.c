#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
s32 func_800BC214(void) {
    s32 next;
    s32 mask;
    u8 result;
    s32 arg;

    func_800B9C9C();
    result = 0;
    while (D_80327C0F == 0) {
        Gfx *dl;
        Gfx *cmd;

        func_800A8ECC();
        func_800A8EE0();
        result = func_800BC448();
        func_8007D850();
        D_803276D4 = D_803276D0 + D_803276D8 * 0x2200;
        if (D_80327C0F == 0) {
            func_800BB69C(D_80073440);
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
    if (D_80327C20 != -1) {
        func_800798C0(D_80327C20);
        D_80327C20 = -1;
    }
    func_80079BD4();
    func_80079064();
    D_80132EF0 = 0;
    if (result == 0 && ((D_80327B50 == 0 | D_80327B50 == 4) || (D_80327B50 == 6 | D_80327B50 == 8))) {
        D_80132EF0 = 1;
        D_80327B4C = 0x10;
        switch (D_80327B50) {
            case 0:
                arg = 4;
                break;
            case 4:
                arg = 0xA;
                break;
            case 6:
                arg = 5;
                break;
            case 8:
                arg = 6;
                break;
            default:
                return 0xD;
        }
        func_800EC380(arg);
        return 0xD;
    }
    if (D_80135770 != 0) {
        func_800BD1F0();
        return 0x11;
    }
    return 0xB;
}

