#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_800D3C84(s32 value)
{
    char text[32];
    func_8011CC84(text, D_auto_80073D9C, value);
    func_8010552C(0, 0x3E);
    func_80105A50(&D_8037A174, text, 0, 0x140);
}
