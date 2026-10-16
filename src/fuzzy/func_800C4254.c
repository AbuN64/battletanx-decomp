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
