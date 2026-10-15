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
