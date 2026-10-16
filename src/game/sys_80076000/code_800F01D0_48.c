#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_8010CD4C(EffectKind2D *quad, f32 *center, f32 corners[4][3]) {
    u16 angle = quad->value18;
    f32 cosValue = func_800F3B40(angle);
    f32 dz = quad->value28 * -func_800F3AE0(angle);
    f32 h = quad->value2C;
    f32 dx = quad->value28 * cosValue;

    corners[0][2] = corners[3][2] = center[2] + dz;
    corners[0][0] = corners[3][0] = center[0] + dx;
    corners[1][2] = corners[2][2] = center[2] - dz;
    corners[1][0] = corners[2][0] = center[0] - dx;
    corners[0][1] = corners[1][1] = center[1] - h;
    corners[2][1] = corners[3][1] = center[1] + h;
}
