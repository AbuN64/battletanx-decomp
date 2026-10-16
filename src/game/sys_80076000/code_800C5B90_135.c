#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"

s32 func_800E0EA8(struct PolygonPoint *a, struct PolygonPoint *origin, struct PolygonPoint *c)
{
    f32 ay = a->x - origin->x;
    f32 ax = a->y - origin->y;
    f32 cx = c->y - origin->y;
    f32 cy = c->x - origin->x;
    return ay * cx - cy * ax < 0.0f;
}
