#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
f32 func_800E92F0(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    if (unit->kind == 1) return 1.0f;
    return 0.0f;
}
