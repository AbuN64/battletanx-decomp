#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800ABFD0.h"
s32 func_8007C58C(s32 state) {
    u16 result;
    switch (state) {
    case 15:
        func_800AC2D0();
        break;
    case 16:
        func_800B9C80();
        break;
    case 17:
        func_800BD1F0();
        break;
    case 18:
        func_800C0880();
        break;
    case 19:
        func_800C3EF0();
        break;
    default:
        return;
    }
    D_auto_801B4AE0 = state;
    do {
        result = func_8007C344(0);
        if (result == 2) {
            func_8007B590(2);
            D_auto_801B4AE0 = D_auto_80327B4C;
        }
    } while (result >= 2);
    func_80079948();
    return -(result == 0);
}

INCLUDE_RODATA("span_1000", R_800711DC);
INCLUDE_RODATA("span_1000", R_800711E8);
INCLUDE_RODATA("span_1000", R_800711F4);
INCLUDE_RODATA("span_1000", R_80071204);
INCLUDE_RODATA("span_1000", R_80071228);
INCLUDE_RODATA("span_1000", R_8007124C);
INCLUDE_RODATA("span_1000", R_8007125C);
INCLUDE_RODATA("span_1000", R_80071274);
INCLUDE_RODATA("span_1000", R_800712AC);
INCLUDE_RODATA("span_1000", R_800712D0);
INCLUDE_RODATA("span_1000", R_800712F8);
INCLUDE_RODATA("span_1000", R_80071340);
INCLUDE_RODATA("span_1000", R_80071348);
INCLUDE_RODATA("span_1000", R_80071350);
INCLUDE_ASM("span_1000", func_8007C678);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_8007C6C4(void) {
    D_auto_80125780 = 1;
}

#ifdef NON_MATCHING
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
s32 func_8007C6D8(void) {
    s32 var_v0;
    u32 temp_a0;

    temp_a0 = D_auto_801B4ABC->unk0;
    var_v0 = 0;
    if (temp_a0 < 7U) {
        var_v0 = temp_a0 >= 3U;
    }
    return var_v0;
}
#else
INCLUDE_ASM("span_1000", func_8007C6D8);
#endif
#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
#include "span_1000/code_800A51E8.h"
s32 func_8007C700(void)
{
    u32 mode = D_auto_801B4ABC->unk0;
    if (mode < 8) {
        if (mode >= 3) {
            return 1;
        }
    }
    return 0;
}

#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
#include "shared/bt_span_1000_code_8007C700.h"
#include "game/sys_80076000.h"

s32 func_8007C728(void) {
    switch (D_auto_801B4ABC->unk0) {
        case 0:
        case 3:
        case 4:
        case 6:
            return 1;
        default:
            return 0;
    }
}

void func_8007C770(GameSettings *src, GameSettings *dst) {
    s32 i;
    if (src->value00 != 0.0f) dst->value00 = src->value00;
    if (src->value04 != 0.0f) dst->value04 = src->value04;
    if (src->value08 != 0) dst->value08 = src->value08;
    if (src->value0C != 0) dst->value0C = src->value0C;
    if (src->value10 != 0) dst->value10 = src->value10;
    for (i = 0; i < 4; i++) {
        if (src->listA[i] != 0) dst->listA[i] = src->listA[i];
        if (src->listB[i] != 0) dst->listB[i] = src->listB[i];
    }
    if (src->value1C != 0) dst->value1C = src->value1C;
    if (src->value1D != 0) dst->value1D = src->value1D;
    if (src->value1E != 0) dst->value1E = src->value1E;
    if (src->value1F != 0) dst->value1F = src->value1F;
    if (src->value20 != 0) dst->value20 = src->value20;
}

INCLUDE_ASM("span_1000", func_8007C864);
INCLUDE_ASM("span_1000", func_8007CCD0);
INCLUDE_ASM("span_1000", func_8007D1F8);
