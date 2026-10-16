#include "game/sys_80076000.h"
static inline s32 level_point_in_radius(f32 y, f32 x, SceneView *view) {
    f32 dy = view->x - y;
    f32 dx = view->z - x;
    if (dy * dy + dx * dx < (f32)D_auto_801C9174) return 1;
    return 0;
}
void func_80084CC4(Scene *scene, s32 model, void *matrix, void *anchor, s32 layer, s32 phase, f32 *pos, f32 radius)
{
    f32 y;
    s32 count = func_8007AAA0();
    s32 i;
    SceneView *view;
    for (i = 0; i < count; i++) {
        y = pos[1];
        view = &scene->views[i];
        if (level_point_in_radius(y, pos[0], view) && func_800941E0(pos[1], pos[0], radius, view) == 0) {
            func_800824E4(scene, model, matrix, anchor, layer, phase, i);
        }
    }
}
