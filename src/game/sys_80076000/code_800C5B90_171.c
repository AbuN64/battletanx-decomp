#include "shared/bt_unit.h"
#include "game/sys_80076000.h"
void func_800E5F30(CombatUnit *unit)
{
    f32 point[2];
    s32 flag;
    point[1] = unit->position[0];
    flag = 1;
    point[0] = unit->position[2];
    func_800E5FA8(unit, &unit->state, point, &flag,
        func_800E9880(unit, 0x1004), func_800E9880(unit, 0x1005));
}
