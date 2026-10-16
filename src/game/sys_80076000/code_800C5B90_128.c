#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D1998(s32 value) {
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_8010552C(0x10C, 0x46);
    func_80105688(&D_8037A174, value);
}
