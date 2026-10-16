#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "span_1000/code_8007EBA0.h"

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

static inline s32 classify_view_sector(f32 x, f32 y, SceneView *c) {
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
        return (b > 0.0f) ? 1 : 2;
    }
    if (b > 0.0f) {
        if (b < a) {
            return 0;
        }
    } else {
        if (-b < a) {
            return 0;
        }
    }
    return (b > 0.0f) ? 1 : 2;
}

s32 func_8009453C(f32 *point, f32 *screen, s32 index) {
    PlayerRecord *record = func_800A6688(index);
    s32 result;
    f32 matrix[4][4];
    FrameViewport *viewport;

    if (record->viewport == 0) {
        return -1;
    }
    result = classify_view_sector(point[0], point[2], &func_800821C0()->views[index]);
    if (result != 0) {
        return result;
    }
    func_800A7F3C(record->camera.view.matrix, record->matrix.matrix, matrix);
    func_800A7DBC(matrix, point, screen);
    viewport = record->viewport;
    screen[0] = (screen[0] * viewport->scale[0] + viewport->translate[0]) / 4.0f;
    viewport = record->viewport;
    screen[1] = (screen[1] * -viewport->scale[1] + viewport->translate[1]) / 4.0f;
    return 0;
}
