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

#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_800D1AD0.h"
/* NON_MATCHING: clean GBI draft of func_800D1BA0. */
#include "shared/bt_abi.h"
#include "shared/bt_bt_gbi.h"
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"
#include "shared/bt_gbi.h"

extern void *D_8037A174;
extern s32 D_8037ADCC;

void func_800D1BA0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_t0;
    Gfx *commands;
    Gfx *rectangle;

    if (arg0 != 0) {
        commands = (Gfx *)D_8037A174;
        gDPSetCombineLERP(commands, TEXEL0, 0, PRIMITIVE, 0,
            TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
            TEXEL0, 0, PRIMITIVE, 0);
        D_8037A174 = commands + 1;
        gDPSetTextureLUT(commands + 1, G_TT_RGBA16);
        D_8037A174 = commands + 2;
        gDPSetRenderMode(commands + 2, 0x504240, 0);
        D_8037A174 = commands + 3;
        gDPSetPrimColor(commands + 3, 1, 1, 255, 255, 255, 255);
        D_8037A174 = commands + 4;
        gDPSetTextureImage(commands + 4, G_IM_FMT_CI, G_IM_SIZ_16b, 1,
            (void *)((u32)&D_8037ADCC + (u32)D_8037ADCC - 0x34U));
        D_8037A174 = commands + 5;
        gDPSetTile(commands + 5, G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0,
            G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_CLAMP, 0, 0);
        D_8037A174 = commands + 6;
        gDPLoadSync(commands + 6);
        D_8037A174 = commands + 7;
        gDPLoadBlock(commands + 7, G_TX_LOADTILE, 0, 0, 0x1FF, 0x200);
        D_8037A174 = commands + 8;
        gDPPipeSync(commands + 8);
        D_8037A174 = commands + 9;
        gDPSetTile(commands + 9, G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0,
            G_TX_RENDERTILE, 0, G_TX_WRAP, 0, 0, G_TX_CLAMP, 0, 0);
        D_8037A174 = commands + 10;
        gDPSetTileSize(commands + 10, G_TX_RENDERTILE, 0, 0, 63 * 4, 31 * 4);
        D_8037A174 = commands + 11;
        gDPSetTextureImage(commands + 11, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1,
            (void *)((u32)&D_8037ADCC + (u32)D_8037ADCC - 0x54U));
        D_8037A174 = commands + 12;
        gDPTileSync(commands + 12);
        D_8037A174 = commands + 13;
        gDPSetTile(commands + 13, G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 0x100,
            G_TX_LOADTILE, 0, G_TX_WRAP, 0, 0, G_TX_WRAP, 0, 0);
        D_8037A174 = commands + 14;
        gDPLoadSync(commands + 14);
        D_8037A174 = commands + 15;
        gDPLoadTLUTCmd(commands + 15, G_TX_LOADTILE, 15);
        D_8037A174 = commands + 16;
        gDPPipeSync(commands + 16);
        D_8037A174 = commands + 17;
        var_t0 = 0;
        if (arg0 > 0) {
            do {
                rectangle = (Gfx *)D_8037A174;
                D_8037A174 = rectangle + 1;
                D_8037A174 = rectangle + 2;
                D_8037A174 = rectangle + 3;
                temp_v1 = var_t0 / 3;
                temp_a0 = var_t0 % 3;
                var_t0 += 1;
                temp_a1 = temp_v1 * 2;
                temp_a0_2 = temp_a0 * 0x4B + temp_v1 * 3 + 0x2E;
                gDPTexRect(rectangle, temp_a0_2 * 4, (temp_a1 + 0x78) * 4,
                    (temp_a0_2 + 0x32) * 4, (temp_a1 + 0x89) * 4,
                    G_TX_RENDERTILE);
                gDPHalf1(rectangle + 1, 0);
                gDPHalf2(rectangle + 2, 0x04000400);
            } while (var_t0 < arg0);
        }
    }
}
#else
INCLUDE_ASM("span_1000", func_800D1BA0);
#endif
