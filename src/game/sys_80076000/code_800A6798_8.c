#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800A7964(f32 m[4][4], f32 *angles) {
    f32 rz = angles[2] * D_auto_80126700;
    f32 ry = angles[1] * D_auto_80126700;
    f32 rx = angles[0] * D_auto_80126700;
    f32 sz = func_8011BE10(rz);
    f32 cz = func_801113A0(rz);
    f32 sy = func_8011BE10(ry);
    f32 cy = func_801113A0(ry);
    f32 sx = func_8011BE10(rx);
    f32 cx = func_801113A0(rx);
    m[0][0] = cy * cx;
    m[0][1] = cy * sx;
    m[0][2] = -sy;
    m[1][0] = sz * sy * cx - cz * sx;
    m[1][1] = sz * sy * sx + cz * cx;
    m[1][2] = sz * cy;
    m[2][0] = cz * sy * cx + sz * sx;
    m[2][1] = cz * sy * sx - sz * cx;
    m[2][2] = cz * cy;
}
