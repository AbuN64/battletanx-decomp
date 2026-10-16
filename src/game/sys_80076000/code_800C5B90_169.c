#include "shared/bt_unit.h"
#include "game/sys_80076000.h"
void func_800E6340(CombatUnit *unit, s32 *flags)
{
    f32 point[2];
    point[1] = unit->position[0];
    point[0] = unit->position[2];
    func_800E5FA8(unit, &unit->state, point, flags,
        func_800E9880(unit, 0x1004), func_800E9880(unit, 0x1005));
    func_800E5FA8(unit, &unit->secondaryState, point, 0,
        func_800E9880(unit, 0x1006), func_800E9880(unit, 0x1007));
}
