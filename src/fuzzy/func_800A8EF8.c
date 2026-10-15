#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A8940.h"
#include "shared/bt_types.h"
extern s32 D_auto_802DF580;
extern s32 D_auto_802DF590;
extern s32 D_auto_802DF5A0;

void func_800A8EF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;

    temp_s0 = D_auto_802DF540[arg0];
    if (temp_s0 >= 0) {
        var_a2 = arg2;
        if (func_800EC644() == 0) {
            temp_v1 = temp_s0 * 4;
            if (var_a2 == 0) {
                var_a2 = 1;
            }
            *(temp_v1 + &D_auto_802DF580) = var_a2;
            var_a3 = arg3;
            if (var_a3 <= 0) {
                var_a3 = 1;
            }
            *(temp_v1 + &D_auto_802DF590) = -var_a3;
            *(&D_auto_802DF5A0 + temp_v1) = -1;
            D_auto_802DF570[temp_s0] = arg1;
        }
    }
}
