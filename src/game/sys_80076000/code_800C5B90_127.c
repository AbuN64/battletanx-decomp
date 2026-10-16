#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline f32 approx_horizontal_length(f32 *v) {
    f32 a = v[1];
    f32 b;
    if (!(a > 0.0f)) {
        a = -a;
    }
    b = v[0];
    if (!(b > 0.0f)) {
        b = -b;
    }
    if (b < a) {
        return a + (b * D_auto_8007443C) / D_auto_80074440;
    }
    return b + (a * D_auto_80074444) / D_auto_80074448;
}
f32 func_800E0C8C(f32 *a, f32 *b) {
    f32 offset[2];
    f32 dz;
    f32 dx;
    dz = a[1] - b[1];
    if (!(dz > 0.0f)) {
        dz = -dz;
    }
    offset[1] = dz;
    dx = a[0] - b[0];
    if (!(dx > 0.0f)) {
        dx = -dx;
    }
    offset[0] = dx;
    return approx_horizontal_length(offset);
}
