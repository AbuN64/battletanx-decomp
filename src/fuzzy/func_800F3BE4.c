#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"
extern f32 D_auto_80074F58;
extern f64 D_auto_80074F60;
extern f64 D_auto_80074F68;
extern s32 D_auto_80139720;
extern s32 D_auto_80139724;

int func_800F3BE4(f32 arg0) {
    f32 temp_fv0;
    f64 temp_fv1;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_a2;
    u32 var_a0;

    if (arg0 == D_auto_80074F58) {
        var_a1 = 0x80;
    } else {
        var_a1 = 0;
        var_a0 = 0x40;
loop_3:
        var_v1 = 1;
        if (!(arg0 < *(((var_a1 & 0xFFFF) * 4) + &D_auto_80139724))) {
            var_v1 = 0;
        }
        temp_a2 = var_a0 & 0xFFFF;
        temp_v1 = var_a1 ^ var_a0;
        if (var_v1 & (temp_a2 != 0)) {
            var_a1 = temp_v1;
            if (*(((temp_v1 & 0xFFFF) * 4) + (&D_auto_80139724 - 4)) < arg0) {
                var_a1 = var_a0 ^ temp_v1;
            }
            var_a0 = temp_a2 >> 1;
            goto loop_3;
        }
    }
    temp_v0 = (var_a1 & 0xFFFF) * 4;
    temp_fv0 = *(&D_auto_80139720 + temp_v0);
    temp_fv1 = ((f64) (temp_fv0 - arg0) * D_auto_80074F60) / (f64) (temp_fv0 - *(&D_auto_80139724 + temp_v0));
    temp_a0 = var_a1 << 8;
    if (!(D_auto_80074F68 <= temp_fv1)) {
        var_v0 = (s32) temp_fv1 + temp_a0;
    } else {
        var_v0 = ((s32) (temp_fv1 - D_auto_80074F68) | 0x80000000) + temp_a0;
    }
    return var_v0 & 0xFFFF;
}
