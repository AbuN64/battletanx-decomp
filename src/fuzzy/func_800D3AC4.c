#include "shared/bt_types.h"
extern s32 D_auto_80134FC0;

s32 func_800D3AC4(s32 arg0, s32 *arg3, s32 *arg4) {
    s32 *var_a1;
    s32 *var_v1;
    s32 var_a2;

    var_a2 = 0;
    var_v1 = &D_auto_80134FC0 - 4;
    var_a1 = &D_auto_80134FC0;
loop_1:
    if (arg0 >= *var_a1) {
        var_v1 += 4;
        var_a2 += 1;
        var_a1 += 4;
        if (var_a2 >= 8) {
            return 8;
        }
        goto loop_1;
    }
    *arg3 = arg0 == *var_v1;
    *arg4 = arg0 - *var_v1;
    return var_a2;
}
