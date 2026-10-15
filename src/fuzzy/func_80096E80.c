#include "shared/bt_types.h"
s32 func_80109268(s32, s32, s32, s32);
extern f32 D_auto_8007212C;
extern f32 D_auto_80072130;
extern f32 D_auto_80072148;

void func_80096E80(f32 arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5) {
    f32 var_fv0;
    s32 var_a3;

    switch (arg3) {                                 /* irregular */
    case 0:
        var_fv0 = D_auto_8007212C;
block_7:
        var_a3 = (s32) (arg5 * var_fv0);
block_8:
        func_80109268(arg4, (s32) arg0, (s32) arg1, var_a3);
        return;
    case 1:
        var_a3 = (s32) (arg5 * D_auto_80072130);
        goto block_8;
    case 2:
        var_fv0 = D_auto_80072148;
        goto block_7;
    }
}
