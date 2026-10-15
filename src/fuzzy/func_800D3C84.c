#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_8011CC84(s8 *, s32 *, s32);
extern s32 D_auto_80073D9C;

void func_800D3C84(s32 arg0) {
    s8 sp10;

    func_8011CC84(&sp10, &D_auto_80073D9C, arg0);
    func_8010552C(0, 0x3E);
    func_80105A50(&D_8037A174, &sp10, 0, 0x140);
}
