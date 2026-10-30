#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
f32 func_800E92F0(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    if (unit->kind == 1) return 1.0f;
    return 0.0f;
}

INCLUDE_RODATA("span_1000", D_80074864);
INCLUDE_RODATA("span_1000", D_8007486C);
INCLUDE_RODATA("span_1000", D_80074870);
INCLUDE_RODATA("span_1000", D_80074878);
INCLUDE_ASM("span_1000", func_800E9318);
#include <ultra64.h>
#include "game/sys_80076000.h"

float func_800E9458(void) {
    return D_8007486C - func_800E9318();
}

INCLUDE_ASM("span_1000", func_800E9480);
INCLUDE_ASM("span_1000", func_800E94D8);
