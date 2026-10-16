#include "game/sys_80076000.h"
void func_80094060(ViewCone *cone, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    cone->disabled = 0;
    cone->m00 = arg3;
    cone->offsetZ = (f32) -arg1;
    cone->m01 = arg4;
    cone->mode = arg6;
    cone->offsetX = (f32) -arg2;
    cone->m10 = (f32) (arg3 * arg5);
    cone->m11 = (f32) (arg4 * arg5);
}
