#include "include_asm.h"

#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline s32 intersect_segments_2d(struct PolygonPoint a, struct PolygonPoint b, struct PolygonPoint c, struct PolygonPoint d, struct PolygonPoint *out) {
    f64 bay = b.x - a.x;
    f64 bax = b.y - a.y;
    f64 dcy = d.x - c.x;
    f64 acy = a.x - c.x;
    f64 dcx = d.y - c.y;
    f64 acx = a.y - c.y;
    f64 denominator = dcy * bax - dcx * bay;
    f64 ua;
    f64 ub;
    s32 result;
    if (denominator == 0.0) {
        if (acy * bax - acx * bay != 0.0) {
            return 0;
        }
        return 2;
    }
    ua = (acy * bax - acx * bay) / denominator;
    ub = (acy * dcx - acx * dcy) / denominator;
    if (((ua >= 0.0) & (ua <= 1.0)) && ((ub >= 0.0) & (ub <= 1.0))) {
        result = 1;
    } else {
        result = 0;
    }
    out->x = c.x + ua * (d.x - c.x);
    out->y = c.y + ua * (d.y - c.y);
    return result;
}
s32 func_8010AA6C(struct PolygonPoint a, struct PolygonPoint b, struct PolygonPoint c, struct PolygonPoint d, struct PolygonPoint *delta, struct PolygonPoint *hit) {
    struct PolygonPoint point;
    if (intersect_segments_2d(a, b, c, d, &point) == 1) {
        delta->x = d.x - point.x;
        delta->y = d.y - point.y;
        hit->x = point.x;
        hit->y = point.y;
        return 1;
    }
    return 0;
}

INCLUDE_RODATA("span_1000", D_800754C0);
INCLUDE_ASM("span_1000", func_8010AC90);
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8010B740(Unknown8010B740_1 *rect, Unknown8010B740 *out) {
    Unknown8010B740 corners[4];
    f32 s;
    f32 c;
    s32 first;
    s32 i;

    s = -func_800F3AE0(rect->value10);
    c = func_800F3B40(rect->value10);
    corners[0].value04 = c * rect->value06 - s * rect->value0A + rect->value02;
    corners[0].value00 = s * rect->value06 + c * rect->value0A + rect->value04;
    corners[1].value04 = c * rect->value06 - s * rect->value0C + rect->value02;
    corners[1].value00 = s * rect->value06 + c * rect->value0C + rect->value04;
    corners[2].value04 = c * rect->value08 - s * rect->value0C + rect->value02;
    corners[2].value00 = s * rect->value08 + c * rect->value0C + rect->value04;
    corners[3].value04 = c * rect->value08 - s * rect->value0A + rect->value02;
    corners[3].value00 = s * rect->value08 + c * rect->value0A + rect->value04;
    first = 0;
    for (i = 1; i < 4; i++) {
        if (corners[i].value04 < corners[first].value04) {
            first = i;
        }
    }
    for (i = 0; i < 4; i++) {
        out[i].value04 = corners[(i + first) & 3].value04;
        out[i].value00 = corners[(i + first) & 3].value00;
    }
}
INCLUDE_ASM("span_1000", func_8010B9C8);
