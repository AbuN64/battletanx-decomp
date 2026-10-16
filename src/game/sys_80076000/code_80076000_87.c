#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"


void func_80091108(struct PolygonPoint *origin, struct PolygonPoint *out) {
    Quad2f quad;
    s32 i;
    quad = D_auto_80071E64;
    for (i = 0; i < 4; i++) {
        out[i].x = quad.points[i].x + origin->x;
        out[i].y = quad.points[i].y + origin->y;
    }
}
