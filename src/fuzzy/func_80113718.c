#include "shared/bt_types.h"
s32 func_80113460(s32, s32, s32 *, s32, s32, s32, f32, f32, f32, f32, f32, f32);
s32 func_801146A0(s32 *, s32);

void func_80113718(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    s32 sp30;

    func_80113460(arg1, arg2, &sp30, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    func_801146A0(&sp30, arg0);
}
