#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"

void func_800D1874(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x5E);
    func_80105584(&D_8037A174, &D_auto_80073D08);
}

void func_800D18C4(s32 arg0, void *arg1) {
    func_8010555C(0, 0xFF, 0, 0xFF);
    func_8010552C(0x2E, (arg0 * 0xC) + 0x3A);
    func_80105584(&D_8037A174, arg1);
}

void func_800D1930(s32 value) {
    func_8010555C(0xFF, 0xFF, 0, 0xFF);
    func_8010552C(0x10C, 0x3A);
    func_80105688(&D_8037A174, value);
}
