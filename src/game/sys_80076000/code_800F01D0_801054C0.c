#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800DAD5C.h"
#include "shared/bt_menu_render.h"


void func_801054C0(s32 arg0) {
    D_auto_803B75AC = arg0;
}

void func_801054D0(u8 arg0) {
    D_auto_803B75A9 = arg0;
}

void func_801054E0(s32 index)
{
    if (index >= D_auto_803AAD80) {
        index = 0;
    }
    D_auto_803AAD84 = index;
    D_803AAD98 = D_auto_803AAD9C->offsets[index] + D_auto_803AADA0;
}

