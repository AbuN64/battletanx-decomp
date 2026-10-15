#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern f64 D_auto_80074F20;
extern f32 D_auto_80074F28;
extern f64 D_auto_80074F30;
extern f32 D_auto_80074F38;

float func_800F3940(void) {
    f64 var_ft0;
    f64 var_fv1;
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = (D_auto_80139610 * 0x10DCD) + 1;
    var_ft0 = (f64) temp_v1;
    D_auto_80139610 = temp_v1;
    if (temp_v1 < 0) {
        var_ft0 += D_auto_80074F20;
    }
    temp_v0 = (temp_v1 * 0x10DCD) + 1;
    var_fv1 = (f64) temp_v0;
    D_auto_80139610 = temp_v0;
    if (temp_v0 < 0) {
        var_fv1 += D_auto_80074F30;
    }
    return (((f32) var_ft0 / D_auto_80074F28) + ((f32) var_fv1 / D_auto_80074F28)) * D_auto_80074F38;
}
