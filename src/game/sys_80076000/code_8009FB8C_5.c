#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
s32 func_8009FB8C(CombatUnit *unit) {
    s32 var_v0;

    var_v0 = 0;
    if (unit->value10 == 0) {
        var_v0 = 1;
        if (unit->value98 == 0) {
            var_v0 = 0;
            if ((D_auto_801B4AA8 - 0x5A) >= unit->value4B0) {
                if (unit->value0C != 0) {
                    return (D_auto_801B4AA8 - 0x2D) < unit->value4B4;
                }
                var_v0 = 1;
                return var_v0;
            }
            return var_v0;
        }
        return var_v0;
    }
    return var_v0;
}
