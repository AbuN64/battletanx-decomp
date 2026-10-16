#include "shared/bt_span_1000_code_800DAD5C.h"
#include "game/sys_80076000.h"
#include "shared/bt_types.h"



void func_80077930(s32 arg0, s32 arg1, s32 arg2);


void func_801053B0(u8 font)
{
    FontTable *table;

    D_auto_803B75AC = 8;
    D_auto_803AAD84 = 0;
    D_803AAD88 = 0;
    D_803AAD8C = 0;
    D_auto_803B75A9 = 0;
    D_803B75A0 = 1;
    D_803B75A4 = 0xFF;
    D_803B75A5 = 0xFF;
    D_803B75A6 = 0xFF;
    D_803B75A7 = 0xFF;
    D_803AAD90 = D_auto_80075420;
    D_803AAD94 = D_auto_80075420;
    if (font == 1) {
        func_80077930((u32)D_auto_B02CB230, D_auto_803AADA0, D_auto_B02D2790 - D_auto_B02CB230);
    } else if (font == 0) {
        func_80077930((u32)D_auto_B02C3E50, D_auto_803AADA0, D_auto_B02CB230 - D_auto_B02C3E50);
    }
    table = (FontTable *)D_auto_803AADA0;
    D_auto_803AAD9C = table;
    D_auto_803AAD80 = table->count;
    D_803AAD98 = table->offsets[0] + D_auto_803AADA0;
}

