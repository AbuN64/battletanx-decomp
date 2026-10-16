#include "game/sys_80076000.h"
static inline s32 within_radius(f32 px, f32 py, f32 x, f32 y) {
    f32 dy = y - py;
    f32 dx = x - px;
    s32 inside = 0;
    if (dy * dy + dx * dx < (f32)D_auto_801C9174) inside = 1;
    return inside;
}
s32 func_80084778(Scene *scene, f32 (*quad)[2])
{
    s32 i = 0;
    u8 mask = 0;
    s32 count = func_8007AAA0();
    s32 j;
    SceneView *view;
    while (i < count) {
        j = 0;
        view = &scene->views[i];
        for (; j < 4; j++) {
            if (within_radius(quad[j][0], quad[j][1], view->z, view->x)) {
                if (func_800942A8(quad, 4, view) == 0) mask |= 1 << i;
                break;
            }
        }
        i++;
    }
    return mask;
}
