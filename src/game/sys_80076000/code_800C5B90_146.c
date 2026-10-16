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
    D_auto_803276D4 = D_auto_803276D0 + D_auto_803276D8 * 0x2200;
    func_800C83D4(*value);
    cmd = D_auto_803276D4;
    dl = D_auto_803276D0 + D_auto_803276D8 * 0x2200;
    D_auto_803276D4 = cmd + 1;
    gSPEndDisplayListF3D(cmd);
    func_8007EEF8(dl);
    next = D_auto_803276D8 + 1;
    mask = -(next < 3);
    D_auto_803276D8 = next & mask;
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
        draw_frame(&D_auto_80073700);
    } while (result == 0);
    for (i = 0; i < 3; i++) {
        draw_frame(&D_auto_80073704);
    }
    if (result == 2) {
        return 7;
    }
    for (i = 0; i < 4; i++) {
        D_auto_80134020[i] = D_auto_80134A80[D_auto_80134010[i]];
    }
    return 8;
}
