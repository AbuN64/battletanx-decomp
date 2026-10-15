#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
s32 func_8011CC84(s8 *, s32 *, s32);
extern s32 D_auto_80073D70;
extern s8 D_auto_80073D84;

void func_800D39A4(s32 arg0, s32 arg1) {
    s8 sp10;

    func_8010555C(0xFA, 0x1E, 0x1E, 0xFF);
    func_8010698C(&D_8037A174);
    func_801054E0(2);
    func_8011CC84(&sp10, &D_auto_80073D70, arg1);
    func_8010552C(0x49, 0x50);
    func_80105A50(&D_8037A174, &sp10, 0, 0x140);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    if (arg0 >= 0x2E) {
        func_8010552C(0x2E, 0x6E);
        func_80105A50(&D_8037A174, &D_auto_80073D84, 0, 0x140);
    }
}
