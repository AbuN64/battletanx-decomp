#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
s32 func_80114970(s32 *, s32 *, s32, s32, f32, f32, f32);
extern f32 D_auto_80074F78;
extern f32 D_auto_80074F7C;
extern f32 D_auto_80074F80;
extern f32 D_auto_80074F84;
extern u32 D_auto_80141050;
extern f32 D_auto_8035BC68;
extern f32 D_auto_8035BC6C;
extern s8 D_auto_8035BC70;
extern s8 D_auto_8035BC71;
extern s16 D_auto_8035BC72;
extern s8 D_auto_8035BC74;
extern s8 D_auto_8035BC75;
extern s16 D_auto_8035BC76;
extern s16 D_auto_8035BC78;
extern s32 D_auto_8035BC80;
extern s32 D_auto_8035BCC4;

void func_800F45C8(void) {
    u32 temp_a0;
    u32 temp_v1;

    temp_a0 = func_800F38F4() % (u32) D_auto_80141050;
    temp_v1 = (u32) ((temp_a0 & 0xFF) + 1) % (u32) D_auto_80141050;
    D_auto_8035BC72 = 0;
    D_auto_8035BC70 = (s8) temp_a0;
    D_auto_8035BC71 = (s8) temp_v1;
    D_auto_8035BC74 = func_800F38F4();
    D_auto_8035BC75 = func_800F38F4();
    D_auto_8035BC76 = 0;
    D_auto_8035BC78 = 0x80;
    D_auto_8035BC68 = D_auto_80074F78;
    D_auto_8035BC6C = D_auto_80074F78;
    func_80114970(&D_auto_8035BC80, &D_auto_8035BCC4, 0x42140000, 0x3FAAAAAB, D_auto_80074F7C, D_auto_80074F80, D_auto_80074F84);
}
