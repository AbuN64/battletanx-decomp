#include "shared/bt_types.h"
extern f32 D_auto_80074478;
extern f32 D_auto_8007447C;

float func_800E10D0(f32 *arg0, f32 *arg1) {
    f32 temp_ft0;

    temp_ft0 = *arg0;
    if (*arg1 < (temp_ft0 + D_auto_80074478)) {
        *arg0 = temp_ft0 - D_auto_8007447C;
        *arg1 += D_auto_8007447C;
    }
}
