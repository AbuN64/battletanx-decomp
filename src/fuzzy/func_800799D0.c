#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
s32 func_8011CBB0(s32, s16);

s32 func_800799D0(s32 arg0, s32 arg1) {
    s16 temp_s0;
    s32 var_v0;

    temp_s0 = ((s16) arg1 * (u16) D_auto_80125774) / 32767;
    var_v0 = -1;
    if (arg0 != -1) {
        func_8011CB90(D_auto_80150380, (s16) arg0);
        var_v0 = func_8011CBB0(D_auto_80150380, temp_s0);
    }
    return var_v0;
}
