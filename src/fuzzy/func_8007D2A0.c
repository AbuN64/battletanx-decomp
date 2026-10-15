#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
void func_8007D2A0(u32 arg0) {
    s32 var_a0;

    var_a0 = -1;
    switch (arg0) {
    case 1:
        var_a0 = 7;
        break;
    case 2:
        var_a0 = 2;
        break;
    case 4:
        var_a0 = 0x11;
        break;
    case 6:
        var_a0 = 3;
        break;
    case 7:
        var_a0 = 1;
        break;
    case 8:
        var_a0 = 0x12;
        break;
    case 10:
        var_a0 = 0x10;
        break;
    case 11:
        var_a0 = 4;
        break;
    case 12:
        var_a0 = 5;
        break;
    case 14:
        var_a0 = 8;
        break;
    case 16:
        var_a0 = 0xA;
        break;
    case 5:
    case 9:
    case 13:
    case 15:
    case 17:
        var_a0 = 6;
        break;
    case 0:
        var_a0 = -1;
        break;
    default:
        var_a0 = 0;
        break;
    }
    if (var_a0 != -1) {
        func_80079BB4(var_a0);
        func_80079BF4((s32) (s16) (D_80125794 << 0xC));
        return;
    }
    func_80079BD4();
}
