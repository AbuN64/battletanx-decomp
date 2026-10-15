#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800E1098(struct PolygonPoint *arg0, struct PolygonPoint *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0->x == arg1->x) && (arg0->y == arg1->y)) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_800E10D0(f32 *source, f32 *target)
{
    f32 value = *source;
    if (*target < value + D_auto_80074478) {
        f32 step = D_auto_8007447C;
        *source = value - step;
        *target += step;
    }
}
