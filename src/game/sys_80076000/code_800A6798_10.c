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
