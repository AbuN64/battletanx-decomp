#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_unit.h"
f32 func_800E95A8(s32 startTime)
{
    s32 elapsed = func_8007B1DC() - startTime;
    if (elapsed >= 9000) {
        return D_auto_80074890;
    }
    return (f32)elapsed / D_auto_8007488C;
}

f32 func_800E9600(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    s32 start = unit->startTick;
    s32 elapsed = func_8007B1DC() - start;
    if (elapsed >= 9000) return D_auto_80074898;
    return (f32)elapsed / D_auto_80074894;
}

INCLUDE_ASM("span_1000", func_800E9660);
INCLUDE_ASM("span_1000", func_800E96C0);
INCLUDE_ASM("span_1000", func_800E9720);
