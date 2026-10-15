#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F29F0.h"
extern f32 D_auto_800716F8;
extern f32 D_auto_800716FC;

void func_80086C84(s32 arg0, void *arg1, f32 arg2) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    struct Func_800F3014_View0_Shared800F3014 *var_a1;

    var_a1 = arg1;
    var_a2 = 0;
    if (arg0 > 0) {
        do {
            temp_fv1 = (f32) var_a1->field_c * arg2;
            var_v1 = 0xFF;
            if (!(D_auto_800716F8 < temp_fv1)) {
                if (D_auto_800716FC <= temp_fv1) {
                    var_v1 = (s32) (temp_fv1 - D_auto_800716FC) | 0x80000000;
                } else {
                    var_v1 = (s32) temp_fv1;
                }
            }
            temp_fv1_2 = (f32) var_a1->field_d * arg2;
            var_a1->field_c = (u8) var_v1;
            if (D_auto_800716F8 < temp_fv1_2) {
                var_v1_2 = 0xFF;
            } else if (D_auto_800716FC <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_auto_800716FC) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            temp_fv1_3 = (f32) var_a1->field_e * arg2;
            var_a1->field_d = (u8) var_v1_2;
            if (D_auto_800716F8 < temp_fv1_3) {
                var_v0 = 0xFF;
            } else if (D_auto_800716FC <= temp_fv1_3) {
                var_v0 = (s32) (temp_fv1_3 - D_auto_800716FC) | 0x80000000;
            } else {
                var_v0 = (s32) temp_fv1_3;
            }
            var_a1->field_e = (u8) var_v0;
            var_a2 += 1;
            var_a1 += 0x10;
        } while (var_a2 < arg0);
    }
}
