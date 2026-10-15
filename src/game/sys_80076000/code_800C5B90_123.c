#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"
#include "shared/bt_span_1000_code_800F29F0.h"
s32 func_800E27E4(u16 angle, u16 reference) {
    u16 delta;
    if (angle > reference) {
        delta = angle - reference;
        return delta < 0x8000;
    }
    delta = reference - angle;
    return delta > 0x8000;
}

u16 func_800E2820(f32 *from, f32 *to)
{
    f32 offset[2];
    f32 length;
    u16 heading;
    offset[1] = to[1] - from[1];
    offset[0] = to[0] - from[0];
    length = func_800E0BC4(offset);
    offset[1] /= length;
    offset[0] /= length;
    if (offset[1] < 0.0f) {
        heading = -func_800F3BE4(offset[0]);
    } else {
        heading = func_800F3BE4(offset[0]);
    }
    return heading;
}
