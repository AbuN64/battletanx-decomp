#include "include_asm.h"

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

#include "shared/bt_span_1000_code_800A7ABC.h"
#include "shared/bt_types.h"























/* Transforms a vector by the supplied matrix and translation. */
void func_800A7D10(func_800A7D10_S3_Shared800A7D10 *arg0, func_800A7D10_S1_Shared800A7D10 *arg1, func_800A7D10_S1_Shared800A7D10 *arg2) {
    arg2->unk0 = (f32) ((arg1->unk0 * arg0->unk0) + (arg1->unk4 * arg0->unk10) + (arg1->unk8 * arg0->unk20) + arg0->unk30);
    arg2->unk4 = (f32) ((arg1->unk0 * arg0->unk4) + (arg1->unk4 * arg0->unk14) + (arg1->unk8 * arg0->unk24) + arg0->unk34);
    arg2->unk8 = (f32) ((arg1->unk0 * arg0->unk8) + (arg1->unk4 * arg0->unk18) + (arg1->unk8 * arg0->unk28) + arg0->unk38);
}

INCLUDE_ASM("span_1000", func_800A7DBC);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800A7ECC(f32 src[4][4], f32 dst[4][4], f32 scale) {
    s32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i < 3 && j < 3) {
                dst[i][j] = src[i][j] * scale;
            } else {
                dst[i][j] = src[i][j];
            }
        }
    }
}

INCLUDE_ASM("span_1000", func_800A7F3C);
INCLUDE_ASM("span_1000", func_800A7FC0);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
static inline void set_identity(f32 matrix[4][4]) {
    s32 row;
    s32 column;
    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            if (row != column) {
                matrix[row][column] = 0.0f;
            } else {
                matrix[row][column] = D_auto_800730C4;
            }
        }
    }
}
void func_800A8034(f32 src[4][4], f32 view[4][4], f32 eye[3], f32 at[3]) {
    f32 dot[3];
    s32 i;
    s32 j;
    eye[0] = src[3][0];
    eye[1] = src[3][1];
    eye[2] = src[3][2];
    at[0] = eye[0] + src[2][0];
    at[1] = eye[1] + src[2][1];
    at[2] = eye[2] + src[2][2];
    set_identity(view);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 1) {
                view[j][1] = src[i][j];
            } else {
                view[j][i] = -src[i][j];
            }
        }
    }
    dot[0] = eye[0] * view[0][0] + eye[1] * view[1][0] + eye[2] * view[2][0];
    dot[1] = eye[0] * view[0][1] + eye[1] * view[1][1] + eye[2] * view[2][1];
    dot[2] = eye[0] * view[0][2] + eye[1] * view[1][2] + eye[2] * view[2][2];
    view[3][0] = -dot[0];
    view[3][1] = -dot[1];
    view[3][2] = -dot[2];
}

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A7ABC.h"
#include "shared/bt_types.h"
/* func_800A81F0 -- transposes the 3x3 part of a 4-float-row matrix into another. */

void func_800A81F0(float src[][4], float dst[][4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            dst[j][i] = src[i][j];
        }
    }
}

void func_800A823C(f32 matrix[4][4], f32 x, f32 y, f32 z) {
    matrix[0][0] *= x;
    matrix[0][1] *= x;
    matrix[0][2] *= x;
    matrix[1][0] *= y;
    matrix[1][1] *= y;
    matrix[1][2] *= y;
    matrix[2][0] *= z;
    matrix[2][1] *= z;
    matrix[2][2] *= z;
}

INCLUDE_ASM("span_1000", func_800A82B8);
