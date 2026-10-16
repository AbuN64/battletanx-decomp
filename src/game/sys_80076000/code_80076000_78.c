#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

s32 func_800942A8(f32 (*points)[2], s32 count, SceneView *view)
{
    f32 rel[4][2];
    f32 proj[4][2];
    u8 codes[4];
    s32 i;
    s32 next;
    u8 k = 0xFF;
    f32 t;
    if (view->disableCulling) {
        return 0;
    }
    if (count >= 5) {
        return 1;
    }
    for (i = 0; i < count; i++) {
        rel[i][1] = points[i][1] + view->offsetX;
        rel[i][0] = points[i][0] + view->offsetZ;
        proj[i][1] = view->sideX * rel[i][1] - view->sideZ * rel[i][0];
        proj[i][0] = view->forwardZ * rel[i][0] + view->forwardX * rel[i][1];
        if (proj[i][1] > 0.0f) {
            if (proj[i][0] < 0.0f) {
                codes[i] = 5;
            } else if (proj[i][1] < proj[i][0]) {
                return 0;
            } else {
                codes[i] = 1;
            }
        } else {
            if (proj[i][0] < 0.0f) {
                codes[i] = 6;
            } else if (-proj[i][1] < proj[i][0]) {
                return 0;
            } else {
                codes[i] = 2;
            }
        }
    }
    for (i = 0; i < count; i++) {
        k &= codes[i];
    }
    if (k) {
        return 1;
    }
    for (i = 0; i < count; i = next) {
        next = i + 1;
        if ((codes[i] | codes[next % count]) == 3) {
            return 0;
        }
    }
    for (i = 0; i < count; i++) {
        if ((codes[i] ^ codes[(i + 1) % count]) == 7) {
            k = (i + 1) % count;
            t = -proj[i][1] / (proj[k][1] - proj[i][1]);
            if (t * (proj[k][0] - proj[i][0]) + proj[i][0] > 0.0f) {
                return 0;
            }
        }
    }
    return 1;
}
