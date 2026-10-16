#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800A7ABC(f32 m[4][4], f32 x, f32 y, f32 z, f32 degrees) {
    f32 angle = degrees * D_auto_80126704;
    f32 s = func_8011BE10(angle);
    f32 c = func_801113A0(angle);
    f32 one = D_auto_800730BC;
    f32 tmp = one - c;
    f32 xy = x * y * tmp;
    f32 yz = y * z * tmp;
    f32 zx = z * x * tmp;
    tmp = x * x;
    m[0][0] = tmp + c * (one - tmp);
    m[2][1] = yz - x * s;
    m[1][2] = yz + x * s;
    tmp = y * y;
    m[1][1] = tmp + c * (one - tmp);
    m[2][0] = zx + y * s;
    m[0][2] = zx - y * s;
    tmp = z * z;
    m[2][2] = tmp + c * (one - tmp);
    m[1][0] = xy - z * s;
    m[0][1] = xy + z * s;
}

void func_800A7BE8(EffectMatrix16 *matrix, Vec3f *v, Vec3f *out)
{
    out->x = v->x * matrix->m[0][0] + v->y * matrix->m[1][0] + v->z * matrix->m[2][0];
    out->y = v->x * matrix->m[0][1] + v->y * matrix->m[1][1] + v->z * matrix->m[2][1];
    out->z = v->x * matrix->m[0][2] + v->y * matrix->m[1][2] + v->z * matrix->m[2][2];
}

void func_800A7C7C(f32 matrix[4][4], f32 v[3], f32 out[3])
{
    out[0] = v[0] * matrix[0][0] + v[1] * matrix[1][0] + v[2] * matrix[2][0];
    out[1] = v[0] * matrix[0][1] + v[1] * matrix[1][1] + v[2] * matrix[2][1];
    out[2] = v[0] * matrix[0][2] + v[1] * matrix[1][2] + v[2] * matrix[2][2];
}
