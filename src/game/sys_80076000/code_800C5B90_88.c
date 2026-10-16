#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"
#include "shared/bt_unit.h"

s32 func_800E73BC(struct ResetState *arg0) {
    func_800E4494(arg0->unk8);
    return -1;
}

s32 func_800E73E0(struct ResetState *context) {
    f32 amount = context->params[0];
    s32 now = func_8007B1DC();
    s32 delay = (amount * D_auto_800746E8) / D_auto_800746EC;
    CombatUnit *unit = context->unk8;
    unit->deadline = now + delay;
    return -1;
}
