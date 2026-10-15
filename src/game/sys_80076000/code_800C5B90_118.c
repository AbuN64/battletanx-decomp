#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"
void func_800D1A00(s32 ticks) {
    char secondsText[8];
    char text[0x10];
    s32 seconds;
    s32 minutes;
    seconds = ticks / 30;
    minutes = seconds / 60;
    func_8011CC84(secondsText, D_auto_80073D14, seconds % 60 + 100);
    func_8011CC84(text, D_auto_80073D18, minutes, secondsText + 1);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_8010552C(0xEC, 0x52);
    func_80105750(&D_8037A174, text);
}

void func_800D1AD0(s32 ticks) {
    char secondsText[8];
    char text[0x10];
    s32 seconds;
    s32 minutes;
    seconds = ticks / 30;
    minutes = seconds / 60;
    func_8011CC84(secondsText, D_auto_80073D14, seconds % 60 + 100);
    func_8011CC84(text, D_auto_80073D18, minutes, secondsText + 1);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_8010552C(0xEC, 0x5E);
    func_80105750(&D_8037A174, text);
}
