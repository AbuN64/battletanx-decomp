#include "shared/bt_span_1000_code_80107168.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "game/sys_80076000.h"
/* Does nothing and returns nothing: the whole interval is a bare `jr $ra` and its
 * empty delay slot, so there is no data touched and no type to fix. */

void func_8010BC08(void) {
}

s32 func_8010BC10(struct PolygonPoint a, struct PolygonPoint b, struct PolygonPoint c, struct PolygonPoint d, struct PolygonPoint *hit)
{
    f64 abX;
    f64 abY;
    f64 cdX;
    f64 cdY;
    f64 acY;
    f64 acX;
    f64 denom;
    f64 t;
    f64 s;
    s32 result;
    abY = b.x - a.x;
    abX = b.y - a.y;
    cdY = d.x - c.x;
    cdX = d.y - c.y;
    acY = a.x - c.x;
    acX = a.y - c.y;
    denom = cdY * abX - cdX * abY;
    if (denom == 0.0) {
        if (acY * abX - acX * abY != 0.0) {
            return 0;
        }
        return 2;
    }
    t = (acY * abX - acX * abY) / denom;
    s = (acY * cdX - acX * cdY) / denom;
    if (((t >= 0.0) & (t <= 1.0)) && ((s >= 0.0) & (s <= 1.0))) {
        result = 1;
    } else {
        result = 0;
    }
    hit->x = c.x + t * (d.x - c.x);
    hit->y = c.y + t * (d.y - c.y);
    return result;
}
