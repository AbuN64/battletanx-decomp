#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_unit.h"


void func_800DEC04(void) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0xBB7;
    var_v0 = &D_auto_8032900F;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
}

void func_800DEC28(u8 *workspace, u16 index, s32 arg2, u16 increment)
{
    if (increment == 0) {
        workspace[index] = 0;
    } else {
        workspace[index]++;
    }
}

void func_800DEC5C(u8 *slots, CombatUnit *skip, AiGroup *group) {
    s32 i;
    CombatUnit *unit;

    if (group == 0) {
        return;
    }
    for (i = 0; i < group->unitCount; i++) {
        unit = func_800A03B8(group->unitIds[i]);
        if (unit->visible) {
            if (unit != skip) {
                if (!(unit->flags & 4)) {
                    if (func_auto_800E3470(unit) == 0) {
                        slots[unit->slot] = 0;
                    }
                }
            }
        }
    }
}
