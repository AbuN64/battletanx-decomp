#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
extern s16 D_auto_80125800;
extern u8 D_auto_80125802;
extern s32 D_auto_801B6C10;
extern s32 D_auto_801B6C14;
extern s32 D_auto_801B6C18;
extern s32 D_auto_801B6C1C;
extern s32 D_auto_801C0840;

void func_800805DC(void) {
    D_auto_801B6C10 = 0;
    D_auto_801B6C14 = 0;
    D_auto_801B6C18 = 0;
    D_auto_801B6C1C = 0;
    func_80110C00(&D_auto_801C0840, 0x380);
    func_80110C00(&D_auto_801C0840 + 0x2680, 0x80);
    D_auto_80125800 = 0;
    D_auto_80125802 = (D_auto_80125802 + 1) % 3;
}
