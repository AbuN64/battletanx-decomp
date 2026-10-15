#include "shared/bt_types.h"
#include "span_1000/code_800F45C8.h"
int func_800F58A0(u32 arg0) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;

    var_a1 = 1;
    var_a2 = 0x1000;
    do {
        temp_v1 = (s32) (var_a1 + var_a2) / 2;
        if (arg0 >= (u32) D_auto_8035E0F0[temp_v1]) {
            var_a2 = temp_v1;
        } else {
            var_a1 = temp_v1 + 1;
        }
    } while (var_a1 < var_a2);
    return var_a1 - 1;
}
