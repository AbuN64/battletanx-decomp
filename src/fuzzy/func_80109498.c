#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_types.h"
int func_80109498(s16 arg0, s16 arg1, QueryBox *arg2) {
    f32 sp10;
    f32 sp14;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fv0;
    s32 var_v0;

    temp_fs2 = (f32) (arg0 - arg2->values[1]);
    temp_fs1 = (f32) (arg1 - arg2->values[2]);
    if ((u16) arg2->values[0] & 1) {
        sp14 = temp_fs2;
        sp10 = temp_fs1;
    } else {
        temp_fs0 = func_800F3AE0((s32) (u16) arg2->values[8]);
        temp_fv0 = func_800F3B40((s32) (u16) arg2->values[8]);
        sp10 = (temp_fs0 * temp_fs2) + (temp_fv0 * temp_fs1);
        sp14 = (temp_fv0 * temp_fs2) + (-temp_fs0 * temp_fs1);
    }
    var_v0 = 0;
    if (!(sp14 < (f32) arg2->values[3])) {
        var_v0 = 0;
        if (!((f32) arg2->values[4] < sp14)) {
            var_v0 = 0;
            if (!(sp10 < (f32) arg2->values[5])) {
                var_v0 = 0;
                if (!((f32) arg2->values[6] < sp10)) {
                    var_v0 = 1;
                }
            }
        }
    }
    return var_v0;
}
