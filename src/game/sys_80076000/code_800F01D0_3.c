#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"


f32 func_800F3880(f32 arg0) {
    f64 var_ft0;
    s32 temp_v1;

    temp_v1 = (D_auto_80139610 * 0x10DCD) + 1;
    var_ft0 = (f64) temp_v1;
    D_auto_80139610 = temp_v1;
    if (temp_v1 < 0) {
        var_ft0 += D_auto_80074F10;
    }
    return ((f32) var_ft0 / D_auto_80074F18) * arg0;
}

unsigned int func_800F38F4(void) {
    s32 temp_v0;

    temp_v0 = (D_auto_80139610 * 0x10DCD) + 1;
    D_auto_80139610 = temp_v0;
    return (temp_v0 << 0x10) | ((u32) temp_v0 >> 0x10);
}
