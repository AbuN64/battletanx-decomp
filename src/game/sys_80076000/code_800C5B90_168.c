#include "shared/bt_unit.h"
f32 *func_800E9880(CombatUnit *unit, s32 parameter)
{
    return &unit->aiParams[parameter & 0xFF];
}
