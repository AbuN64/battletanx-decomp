#include "include_asm.h"

#include "shared/bt_types.h"
#include "shared/bt_gfx.h"

#include "shared/bt_menu_render.h"
#include "game/sys_80076000.h"




void func_800C3730(Gfx **list) {
    Gfx *gfx = *list;
    u64 now;
    f32 f;
    func_801054E0(4);
    now = (func_801120A0() * 1000000 / D_80145DA0);
    if (D_auto_80327D42) {
        D_auto_80327D42 = 0;
        D_auto_80327D48 = (func_801120A0() * 1000000 / D_80145DA0) + D_auto_80327D64;
        D_auto_80327D50 = (func_801120A0() * 1000000 / D_80145DA0) + 2000000;
        D_auto_80327D58 = (func_801120A0() * 1000000 / D_80145DA0) + (D_auto_80327D64 - 2000000);
        D_auto_80327D60 = 0;
    }
    if (now < D_auto_80327D48) {
        if (now <= D_auto_80327D50) {
            f = (f32)(D_auto_80327D50 - now) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327D60 = f * 255.0f;
        }
        if (now >= D_auto_80327D58) {
            f = (f32)(now - D_auto_80327D58) / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327D60 = f * 255.0f;
        }
    }
    if (D_auto_80327D40 == 5) {
        func_800F4DFC(&gfx, 0, 0, 34, 240, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 0, 320, 19, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 0, 134, 320, 134, 0, 0, 0, 255);
        func_800F4DFC(&gfx, 286, 0, 34, 240, 0, 0, 0, 255);
        func_8010698C(&gfx);
        func_8010552C(0, 150);
        func_8010555C(200, 200, 200, D_auto_80327D60);
        switch (D_auto_80327D41) {
        case 0:
            if (now > D_auto_80327D48) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 1;
                D_auto_80327D64 = 10000000;
            }
            func_80105D90(&gfx, D_auto_80133C38, 4, 12, 0, 320);
            break;
        case 1:
            if (now > D_auto_80327D48) {
                D_auto_80327D42 = 1;
                D_auto_80327D41 = 2;
            }
            func_80105D90(&gfx, D_auto_80133CAC, 4, 12, 0, 320);
            break;
        }
    }
    *list = gfx;
}

INCLUDE_DATA("span_1000", D_80073594);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_menu_render.h"


s32 func_800C3EA4(s32 arg0, s16 arg1) {
    s32 temp_v0;

    temp_v0 = func_800796F0(arg0, 0);
    func_800799D0(temp_v0, (s32) arg1);
    return temp_v0;
}

void func_800C3EF0(void) {
    D_auto_80327E50 = 0;
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);
void func_800C3F00(void) {
    s32 size;
    size = D_auto_B05A1110 - D_auto_B0596EA0;
    func_80077930(D_auto_B0596EA0, D_auto_803DA800, size);
    func_800F4F60(size, D_auto_803DA800, 0x25800, D_auto_803275F4);
    func_801053B0(1);
    D_auto_80327EB2 = 0;
    D_auto_80327EB1 = 0;
    switch (D_auto_80327E50) {
    case 0:
        D_auto_80327E58 = func_801120A0() * 1000000 / D_80145DA0 + 12000000;
        D_auto_80327E60 = 0xF0;
        break;
    case 4:
        D_auto_80327EB1 = 1;
        D_auto_80327E50 = 5;
        break;
    }
    D_auto_80132EF0 = 1;
}

INCLUDE_ASM("span_1000", func_800C4090);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"
extern u64 D_80145DA0;
extern u64 func_801120A0(void);
extern void func_800F4DFC(Gfx **list, s32 x, s32 y, s32 width, s32 height, s32 red, s32 green,
                                  s32 blue, s32 alpha);
extern void func_801054E0(s32 index);
extern void func_8010698C(Gfx **gfx);
extern void func_8010552C(s32 x, s32 y);
extern void func_8010555C(s32 red, s32 green, s32 blue, s32 alpha);
extern void func_80105D90(void *context, u8 *text, s32 lineCount, s32 lineHeight, s32 left,
                                     s32 right);
extern Gfx *D_auto_803276D4;
extern Gfx *D_auto_803276D4;
extern void func_80079BB4(s32);
extern void func_80079BF4(s32);
extern void func_800C4090(void);
extern s32 D_80125794;
extern u8 D_auto_80327E50;
extern u64 D_auto_80327E58;
extern s32 D_auto_80327E60;
extern u64 D_auto_80327E68;
extern u64 D_auto_80327E70;
extern u64 D_auto_80327E78;
extern u64 D_auto_80327E80;
extern s32 D_auto_80327E88;
extern u8 D_auto_80327E8C;
extern u8 D_auto_80327E8D;
extern u8 D_auto_80327E8E;
extern u64 D_auto_80327E98;
extern u8 D_auto_80327EB1;
extern u8 D_auto_80327EB2;
extern u8 D_auto_80327EB3;
extern u64 D_auto_80327EB8;
extern u8 D_auto_80133E80[];
void func_800C4254(void);
void func_800C4254(void) {
    u64 now;
    f32 f;
    func_800F4DFC(&D_auto_803276D4, 0, 0, 320, 240, 0, 0, 0, 255);
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xE7000000U); command->words.w1 = (0); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA001402U); command->words.w1 = (0); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xFCFFFFFFU); command->words.w1 = (0xFFFCF279U); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xB900031DU); command->words.w1 = (0x0F0A4000); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA001301U); command->words.w1 = (0); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA001001U); command->words.w1 = (0); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA000C02U); command->words.w1 = (0); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA000903U); command->words.w1 = (0xC00); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xBA000E02U); command->words.w1 = (0x8000); }
    { Gfx *command = (D_auto_803276D4++); command->words.w0 = (0xFA000101U); command->words.w1 = (0xFFFFFFFFU); }
    now = (func_801120A0() * 1000000 / D_80145DA0);
    func_801054E0(3);
    switch (D_auto_80327E50) {
    case 0:
        if (now > D_auto_80327E58 || D_auto_80327EB2) {
            D_auto_80327E50 = 1;
            D_auto_80327E68 = (func_801120A0() * 1000000 / D_80145DA0) + 9000000;
            D_auto_80327E68 = (func_801120A0() * 1000000 / D_80145DA0) + 9000000;
            D_auto_80327E70 = (func_801120A0() * 1000000 / D_80145DA0);
            D_auto_80327E78 = (func_801120A0() * 1000000 / D_80145DA0) + 3000000;
            D_auto_80327E80 = (func_801120A0() * 1000000 / D_80145DA0) + 6000000;
            D_auto_80327E88 = 0;
            D_auto_80327E8E = 0;
            D_auto_80327E8D = 0;
            D_auto_80327E8C = 255;
            func_80079BB4(13);
            func_80079BF4((s16)(D_80125794 << 12));
        } else {
            D_auto_80327EB8 = D_auto_80327E58 - now;
            f = (f32)D_auto_80327EB8 / 12000000.0f;
            D_auto_80327E60 = f * 240.0f;
            func_8010698C(&D_auto_803276D4);
            func_8010555C(200, 200, 200, 255);
            func_8010552C(0, D_auto_80327E60);
            func_80105D90(&D_auto_803276D4, D_auto_80133E80, 11, 12, 0, 320);
        }
        break;
    case 1:
        if (now > D_auto_80327E68 || D_auto_80327EB2) {
            D_auto_80327E50 = 4;
            D_auto_80327EB1 = 1;
            D_auto_80327EB3 = 1;
            D_auto_80327E98 = 10000000;
        } else {
            if (now > D_auto_80327E78) {
                D_auto_80327E88 = 1;
                D_auto_80327E8D = 255;
            }
            if (now > D_auto_80327E80) {
                D_auto_80327E88 = 2;
                D_auto_80327E8E = 255;
                func_80079BB4(6);
                func_80079BF4((s16)(D_80125794 << 12));
            }
            func_800C4090();
        }
        break;
    }
}
#else
INCLUDE_ASM("span_1000", func_800C4254);
#endif
INCLUDE_ASM("span_1000", func_800C4AE0);
#include "shared/bt_types.h"
#include "span_1000/code_800ABFD0.h"
#include "game/sys_80076000.h"

s32 func_800C4DFC(void) {
    s32 buttons = func_80096920(0, 0);
    s32 confirm = (buttons & 0x40) > 0;
    D_auto_80327EB2 = 0;
    if (buttons & 0x10) {
        D_auto_80327EB2 = 1;
    }
    return confirm;
}

INCLUDE_ASM("span_1000", func_800C4E44);
