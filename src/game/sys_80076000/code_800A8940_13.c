#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"

void func_800ABFD0(void) {
    func_800F4DFC(&D_auto_803276D4, 0, 0, 0x140, 0xF0, 0, 0, 0, 0xFF);
    func_8010698C(&D_auto_803276D4);
    func_8010555C(0xC8, 0xC8, 0xC8, 0xFF);
    func_801054E0(1);
    func_8010552C(0, 0x55);
    func_80105A50(&D_auto_803276D4, &D_auto_800731B0, 0, 0x140);
}
