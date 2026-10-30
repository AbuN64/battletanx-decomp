#include "include_asm.h"

#include <ultra64.h>
#include "shared/bt_gfx.h"

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"




void func_800C3730(Gfx **list) {
    Gfx *gfx = *list;
    u64 now;
    f32 f;
    func_801054E0(4);
    now = (osGetTime() * 1000000 / D_80145DA0);
    if (D_80327D42) {
        D_80327D42 = 0;
        D_80327D48 = (osGetTime() * 1000000 / D_80145DA0) + D_80327D64;
        D_80327D50 = (osGetTime() * 1000000 / D_80145DA0) + 2000000;
        D_80327D58 = (osGetTime() * 1000000 / D_80145DA0) + (D_80327D64 - 2000000);
        D_80327D60 = 0;
    }
    if (now < D_80327D48) {
        if (now <= D_80327D50) {
            f = (f32)(D_80327D50 - now) / 2000000.0f;
            f = 1.0f - f;
            D_80327D60 = f * 255.0f;
        }
        if (now >= D_80327D58) {
            f = (f32)(now - D_80327D58) / 2000000.0f;
            f = 1.0f - f;
            D_80327D60 = f * 255.0f;
        }
    }
    if (D_80327D40 == 5) {
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_80327D60);
        switch (D_80327D41) {
        case 0:
            if (now > D_80327D48) {
                D_80327D42 = 1;
                D_80327D41 = 1;
                D_80327D64 = 10000000;
            }
            func_80105D90(&gfx, D_80133C38, 4, 12, 0, 320);
            break;
        case 1:
            if (now > D_80327D48) {
                D_80327D42 = 1;
                D_80327D41 = 2;
            }
            func_80105D90(&gfx, D_80133CAC, 4, 12, 0, 320);
            break;
        }
    }
    *list = gfx;
}

INCLUDE_DATA("span_1000", D_80073594);
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"


s32 func_800C3EA4(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_800796F0(arg0, 0);
    func_800799D0(temp_v0, (s32) arg1);
    return temp_v0;
}

void func_800C3EF0(void) {
    D_80327E50 = 0;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);
void func_800C3F00(void) {
    s32 size;
    size = D_B05A1110 - D_B0596EA0;
    func_80077930(D_B0596EA0, D_803DA800, size);
    func_800F4F60(size, D_803DA800, 0x25800, D_803275F4);
    func_801053B0(1);
    D_80327EB2 = 0;
    D_80327EB1 = 0;
    switch (D_80327E50) {
    case 0:
        D_80327E58 = osGetTime() * 1000000 / D_80145DA0 + 12000000;
        D_80327E60 = 0xF0;
        break;
    case 4:
        D_80327EB1 = 1;
        D_80327E50 = 5;
        break;
    }
    D_80132EF0 = 1;
}

INCLUDE_ASM("span_1000", func_800C4090);
INCLUDE_ASM("span_1000", func_800C4254);
INCLUDE_ASM("span_1000", func_800C4AE0);
#include "span_1000/code_800ABFD0.h"
#include "game/sys_80076000.h"

s32 func_800C4DFC(void) {
    s32 buttons = func_80096920(0, 0);
    s32 confirm = (buttons & 0x40) > 0;
    D_80327EB2 = 0;
    if (buttons & 0x10) {
        D_80327EB2 = 1;
    }
    return confirm;
}

INCLUDE_ASM("span_1000", func_800C4E44);
