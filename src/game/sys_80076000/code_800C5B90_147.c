#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
void func_80077930(s32 arg0, s32 arg1, s32 arg2);
static inline s32 load_rom_span(u8 *start, u8 *end, u8 *dst) {
    s32 size = end - start;

    func_80077930(start, dst, size);
    return size;
}
s32 func_800DC93C(void) {
    s32 size;
    u8 done;

    size = load_rom_span(D_auto_B04AC150, D_auto_B04AD7E0, D_auto_803DA800);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    func_801053B0(1);
    do {
        Gfx *cmd;

        func_800A8ECC();
        func_800A8EE0();
        done = func_800DCCC0();
        func_8007D850();
        D_auto_803276D4 = D_auto_803276D0 + D_auto_803276D8 * 0x2200;
        func_800DAE30(D_auto_803276D8);
        cmd = D_auto_803276D4++;
        gSPEndDisplayListF3D(cmd);
        func_8007EEF8(D_auto_803276D0 + D_auto_803276D8 * 0x2200);
        D_auto_803276D8 = (D_auto_803276D8 + 1 < 3) ? D_auto_803276D8 + 1 : 0;
        func_8007968C();
        func_8007D998();
    } while (!done);
    return 2;
}
