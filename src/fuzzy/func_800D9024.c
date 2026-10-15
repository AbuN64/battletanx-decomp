#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_800D9024(void) {
    s32 *var_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = 0;
    do {
        var_a0 = 0;
        var_v1 = &D_auto_80328400;
loop_2:
        if (*var_v1 != var_a1) {
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 < 4) {
                goto loop_2;
            }
        } else {
            var_a2 += 1;
        }
        var_a1 += 1;
    } while (var_a1 < 4);
    return var_a2;
}
