#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_80126714;
extern s32 D_auto_802DF550;

s32 func_800A942C(void) {
    s32 *var_v1;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;

    var_a0 = 0;
    var_a1 = 0;
    if (D_auto_80126714 > 0) {
        var_v1 = &D_auto_802DF550;
loop_2:
        temp_v0 = *var_v1;
        if (temp_v0 == -1) {
            var_a0 += 1;
            var_v1 += 4;
            if (var_a0 < D_auto_80126714) {
                goto loop_2;
            }
        } else {
            var_a1 = temp_v0 + 1;
        }
    }
    return var_a1;
}
