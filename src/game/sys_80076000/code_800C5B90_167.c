#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "shared/bt_unit.h"
#include "span_1000/code_8007EBA0.h"
void func_800E4494(CombatUnit *unit)
{
    PlayerRecord *entity;
    u16 count;

    func_800983E0(unit, 10000, unit->player, 0);
    entity = func_800A6688(unit->player);
    count = entity->killCount;
    if (count < 10000) {
        entity->killCount = count + 1;
    }
}
