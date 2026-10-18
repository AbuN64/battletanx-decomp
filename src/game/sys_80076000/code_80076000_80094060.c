#include "include_asm.h"

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

INCLUDE_ASM("span_1000", func_800940AC);
#include "game/sys_80076000.h"
s32 func_8009412C(f32 x, f32 z, ViewCone *probe)
{
    f32 adjustedZ;
    f32 adjustedX;
    f32 forwardDistance;
    f32 sideDistance;

    if (probe->disabled != 0) {
        return 0;
    }
    adjustedZ = z + probe->offsetX;
    adjustedX = x + probe->offsetZ;
    forwardDistance = probe->m00 * adjustedZ + probe->m01 * adjustedX;
    sideDistance = probe->m10 * adjustedX - probe->m11 * adjustedZ;
    if (forwardDistance <= 0.0f) {
        return sideDistance > 0.0f ? 1 : 2;
    }
    if (sideDistance > 0.0f) {
        if (sideDistance < forwardDistance) {
            return 0;
        }
    } else if (-sideDistance < forwardDistance) {
        return 0;
    }
    return sideDistance > 0.0f ? 1 : 2;
}

#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

s32 func_800941E0(f32 x, f32 y, f32 r, SceneView *c) {
    f32 dx;
    f32 dy;
    f32 a;
    f32 b;
    if (c->disableCulling != 0) {
        return 0;
    }
    dy = y + c->offsetZ;
    dx = x + c->offsetX;
    a = c->forwardZ * dy + c->forwardX * dx;
    b = c->sideX * dx - c->sideZ * dy;
    if (a <= 0.0f) {
        return 1;
    }
    if (b > 0.0f) {
        if (b - r * D_auto_80072020 < a) {
            return 0;
        }
    } else {
        if (-b - r * D_auto_80072028 < a) {
            return 0;
        }
    }
    return 1;
}

