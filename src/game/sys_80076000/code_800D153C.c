#include "include_asm.h"

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D153C(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x3A);
    func_80105584(&D_8037A174, &D_80073C8C);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D158C(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x46);
    func_80105584(&D_8037A174, &D_80073C94);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D15DC(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x52);
    func_80105584(&D_8037A174, &D_80073C9C);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D162C(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CA8);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D167C(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CBC);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D16CC(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CC8);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D171C(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CDC);
}

INCLUDE_ASM("span_1000", func_800D176C);
#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D17D4(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CEC);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"

void func_800D1824(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x6A);
    func_80105584(&D_8037A174, &D_80073CF8);
}

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"

void func_800D1874(void) {
    func_8010555C(0xFFU, 0xFFU, 0xFFU, 0xFFU);
    func_8010552C(0x2E, 0x5E);
    func_80105584(&D_8037A174, &D_80073D08);
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

#include "shared/bt_menu_render.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800D1998(s32 value) {
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_8010552C(0x10C, 0x46);
    func_80105688(&D_8037A174, value);
}

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
    func_8011CC84(secondsText, D_80073D14, seconds % 60 + 100);
    func_8011CC84(text, D_80073D18, minutes, secondsText + 1);
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
    func_8011CC84(secondsText, D_80073D14, seconds % 60 + 100);
    func_8011CC84(text, D_80073D18, minutes, secondsText + 1);
    func_8010555C(0xFF, 0xFF, 0xFF, 0xFF);
    func_8010552C(0xEC, 0x5E);
    func_80105750(&D_8037A174, text);
}

INCLUDE_ASM("span_1000", func_800D1BA0);
