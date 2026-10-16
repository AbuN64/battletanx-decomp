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
extern Gfx *D_auto_803276D4;
extern void func_80105A50(Gfx **gfx, char *text, s32 left, s32 right);
extern void func_800798C0(s32);
extern void func_80079BB4(s32);
extern void func_80079BD4(void);
extern void func_80079BF4(s32);
extern s32 func_800BD19C(s32, s32);
extern void func_800BA764(void);
extern void func_800BA960(void);
extern void func_800BAB5C(void);
extern void func_800BAD58(void);
extern void func_800BB254(void);
extern void func_800BB450(void);
extern s32 D_80125794;
extern char D_auto_80073400[];
extern u8 D_auto_80327B50;
extern u8 D_auto_80327B51;
extern u64 D_auto_80327B58;
extern u64 D_auto_80327B68;
extern u64 D_auto_80327B70;
extern s32 D_auto_80327B78;
extern u64 D_auto_80327B80;
extern u64 D_auto_80327B88;
extern u64 D_auto_80327B90;
extern u64 D_auto_80327B98;
extern u64 D_auto_80327BA0;
extern u64 D_auto_80327BA8;
extern u64 D_auto_80327BB0;
extern s32 D_auto_80327BB8;
extern u8 D_auto_80327BBC;
extern u8 D_auto_80327BBD;
extern u8 D_auto_80327BBE;
extern u64 D_auto_80327BC0;
extern s32 D_auto_80327BE4;
extern u64 D_auto_80327BE8;
extern u64 D_auto_80327BF0;
extern u8 D_auto_80327C0C;
extern u8 D_auto_80327C0F;
extern u8 D_auto_80327C10;
extern u8 D_auto_80327C11;
extern u8 D_auto_80327C12;
extern u64 D_auto_80327C18;
extern s32 D_auto_80327C20;
void func_800BB69C(void);
void func_800BB69C(void) {
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
    switch (D_auto_80327B50) {
    case 255:
        if (now > D_auto_80327B58) {
            D_auto_80327B51 = 255;
        } else {
            D_auto_80327C18 = D_auto_80327B58 - now;
            f = (f32)D_auto_80327C18 / 2000000.0f;
            f = 1.0f - f;
            D_auto_80327B51 = f * 255.0f;
        }
        if (now > D_auto_80327B70) {
            D_auto_80327C18 = now - D_auto_80327B70;
            f = (f32)D_auto_80327C18 / 2000000.0f;
            D_auto_80327B78 = f * 255.0f;
        }
        if (now > D_auto_80327B68 || D_auto_80327C10) {
            D_auto_80327C12 = 1;
            D_auto_80327C0F = 1;
            D_auto_80327B50 = 0;
            D_auto_80327C11 = 0;
            D_auto_80327BE4 = 5000000;
            func_80079BD4();
            func_80079BB4(10);
            func_80079BF4((s16)(D_80125794 << 12));
        } else {
            func_8010698C(&D_auto_803276D4);
            func_8010555C(200, 200, 200, D_auto_80327B51);
            func_8010552C(0, 70);
            func_80105A50(&D_auto_803276D4, D_auto_80073400, 0, 320);
            func_800F4DFC(&D_auto_803276D4, 0, 0, 320, 240, 0, 0, 0, D_auto_80327B78);
        }
        break;
    case 1:
        if (now > D_auto_80327B80 || D_auto_80327C10) {
            D_auto_80327B50 = 2;
            D_auto_80327B88 = (func_801120A0() * 1000000 / D_80145DA0) + 5000000;
        } else {
            func_800BA764();
        }
        break;
    case 2:
        if (now > D_auto_80327B88 || D_auto_80327C10) {
            D_auto_80327B50 = 3;
            D_auto_80327B90 = (func_801120A0() * 1000000 / D_80145DA0) + 5000000;
        } else {
            func_800BA960();
        }
        break;
    case 3:
        if (now > D_auto_80327B90 || D_auto_80327C10) {
            D_auto_80327B50 = 4;
            D_auto_80327C12 = 1;
            D_auto_80327C0F = 1;
            D_auto_80327C11 = 0;
            D_auto_80327BE4 = 4000000;
        } else {
            func_800BAB5C();
        }
        break;
    case 5:
        if (now > D_auto_80327B98 || D_auto_80327C10) {
            D_auto_80327B50 = 6;
            D_auto_80327C0F = 1;
            D_auto_80327C12 = 1;
            D_auto_80327C11 = 0;
            D_auto_80327BE4 = 7000000;
            func_80079BD4();
            func_80079BB4(10);
            func_80079BF4((s16)(D_80125794 << 12));
            if (D_auto_80327C20 != -1) {
                func_800798C0(D_auto_80327C20);
                D_auto_80327C20 = -1;
            }
        } else {
            if (now > D_auto_80327BA0) {
                if (!D_auto_80327BBC) {
                    D_auto_80327C20 = func_800BD19C(40, 0x7000);
                }
                D_auto_80327BBC = 255;
            }
            if (now > D_auto_80327BA8) {
                D_auto_80327BB8 = 1;
                D_auto_80327BBD = 255;
            }
            if (now > D_auto_80327BB0) {
                D_auto_80327BB8 = 2;
                D_auto_80327BBE = 255;
            }
            func_800BAD58();
        }
        break;
    case 7:
        if (now > D_auto_80327BC0 || D_auto_80327C10) {
            D_auto_80327B50 = 8;
            D_auto_80327C0F = 1;
            D_auto_80327C12 = 1;
            D_auto_80327C11 = 0;
            D_auto_80327BE4 = 5000000;
        } else {
            func_800BB254();
        }
        break;
    case 9:
        if (now > D_auto_80327BE8 || D_auto_80327C10) {
            D_auto_80327C0F = 1;
        } else {
            if (now > D_auto_80327BF0) {
                D_auto_80327C0C = 255;
            }
            func_800BB450();
        }
        break;
    }
}
