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
