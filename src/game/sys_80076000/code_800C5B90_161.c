#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
s32 func_800E76D0(struct ResetState *context) {
    CombatUnit *unit = context->unk8;
    unit->status = (u32)context->params[0];
    return -1;
}
