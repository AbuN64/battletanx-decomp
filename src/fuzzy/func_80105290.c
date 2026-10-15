#include "game/sys_80076000.h"
#include "shared/bt_gfx.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
extern s32 D_auto_80142904;
extern s32 D_auto_80142908;
extern s32 D_auto_80142909;
extern s32 D_auto_8014290A;
extern s32 D_auto_8014290B;
extern s32 D_auto_8014290C;

void func_80105290(Gfx **arg0) {
    Gfx *sp10;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s0 = 0;
    var_s1 = 0;
    sp10 = *arg0;
    func_8010698C(&sp10);
    do {
        if ((u32) (D_auto_801416F0 + var_s1 + 9) < 0x149U) {
            func_8010555C((s32) *(&D_auto_80142908 + var_s0), (s32) *(&D_auto_80142909 + var_s0), (s32) *(&D_auto_8014290A + var_s0), (s32) *(&D_auto_8014290B + var_s0));
            func_8010552C(0x32, D_auto_801416F0 + var_s1);
            func_801054E0(*(&D_auto_80142904 + var_s0));
            func_80105A50(&sp10, *(&D_auto_8014290C + var_s0), 0, 0x140);
        }
        var_s0 += 0xC;
        var_s2 += 1;
        var_s1 += 0xE;
    } while (var_s2 < 0x30);
    D_auto_801416F0 -= 1;
    *arg0 = sp10;
}
