#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "span_1000/code_800E9538.h"
f32 func_800E9200(struct ResetState *context)
{
    f32 weight;
    CombatUnit *unit = context->unk8;
    if (unit->secondaryState == 1 && func_auto_800E3470(unit->secondaryTarget)) {
        weight = D_auto_80074848;
    } else {
        weight = 0.0f;
    }
    return D_auto_8007484C - weight;
}
