#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8010552C(s32 arg0, s32 arg1) {
    D_803AAD88 = arg0;
    D_803AAD8C = arg1;
}

void func_80105544(f32 arg0, f32 arg1) {
    D_803AAD90 = arg0;
    D_803AAD94 = arg1;
}

void func_8010555C(u8 arg0, u8 arg1, u8 arg2, u8 arg3) {
    D_803B75A4 = arg0;
    D_803B75A5 = arg1;
    D_803B75A6 = arg2;
    D_803B75A7 = arg3;
}

void func_80105584(int *context, void *text)
{
    u8 *cursor = text;
    u8 ch;
    while ((ch = *cursor++) != 0) {
        func_80106010(context, ch);
    }
}

INCLUDE_ASM("span_1000", func_801055D4);
INCLUDE_ASM("span_1000", func_80105688);
