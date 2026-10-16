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
