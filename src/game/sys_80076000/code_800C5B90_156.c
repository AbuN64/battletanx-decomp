#include "game/sys_80076000.h"
#include "shared/bt_unit.h"



s32 func_800E8DFC(void *entity, s16 unitId)
{
    CombatUnit *unit = func_800A03B8(unitId);
    f32 point[2];
    s32 result;

    point[1] = unit->position[0];
    point[0] = unit->position[2];
    func_800E28DC(entity, point, 0, &result, 0);
    return (u32)result >> 31;
}
