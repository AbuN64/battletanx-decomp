#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800A76BC);
INCLUDE_ASM("span_1000", func_800A7744);
INCLUDE_ASM("span_1000", func_800A77D4);
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_types.h"

void func_800A7800(f32 matrix[4][4], u16 yaw, u16 pitch, u16 roll) {
    f32 sinRoll = func_800F3AE0(roll);
    f32 cosRoll = func_800F3B40(roll);
    f32 sinPitch = func_800F3AE0(pitch);
    f32 cosPitch = func_800F3B40(pitch);
    f32 sinYaw = func_800F3AE0(yaw);
    f32 cosYaw = func_800F3B40(yaw);

    matrix[0][0] = cosPitch * cosYaw;
    matrix[0][1] = cosPitch * sinYaw;
    matrix[0][2] = -sinPitch;
    matrix[1][0] = sinRoll * sinPitch * cosYaw - cosRoll * sinYaw;
    matrix[1][1] = sinRoll * sinPitch * sinYaw + cosRoll * cosYaw;
    matrix[1][2] = sinRoll * cosPitch;
    matrix[2][0] = cosRoll * sinPitch * cosYaw + sinRoll * sinYaw;
    matrix[2][1] = cosRoll * sinPitch * sinYaw - sinRoll * cosYaw;
    matrix[2][2] = cosRoll * cosPitch;
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800A7964(f32 m[4][4], f32 *angles) {
    f32 rz = angles[2] * D_80126700;
    f32 ry = angles[1] * D_80126700;
    f32 rx = angles[0] * D_80126700;
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

