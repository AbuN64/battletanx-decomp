#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
s32 func_800E7458(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->threshold = unit->health - 1;
    return -1;
}

s32 func_800E7470(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->threshold = unit->health / 2;
    return -1;
}
