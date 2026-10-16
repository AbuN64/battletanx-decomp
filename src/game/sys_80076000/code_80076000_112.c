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
