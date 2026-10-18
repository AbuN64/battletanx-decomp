#include "include_asm.h"

#include "shared/bt_span_1000_code_800F29F0.h"
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
                matrix[row][column] = D_auto_800730CC;
            }
        }
    }
}
void func_800A841C(f32 src[4][4], f32 dst[4][4], u16 angle) {
    f32 rot[4][4];
    f32 c;
    f32 s;
    s32 i;
    s32 j;
    set_identity(rot);
    c = func_800F3B40(angle);
    s = func_800F3AE0(angle);
    rot[2][0] = s;
    rot[0][0] = c;
    rot[2][2] = c;
    rot[0][2] = -s;
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            dst[i][j] = src[i][0] * rot[0][j] + src[i][1] * rot[1][j] + src[i][2] * rot[2][j];
        }
    }
    dst[0][3] = src[0][3];
    dst[1][3] = src[1][3];
    dst[2][3] = src[2][3];
    dst[3][3] = src[3][3];
    dst[3][2] = src[3][2];
    dst[3][1] = src[3][1];
    dst[3][0] = src[3][0];
}

void func_800A8580(f32 source[4][4], f32 output[4][4], u16 angle) {
    f32 rotation[4][4];
    s32 row;
    s32 column;
    s32 outRow;
    s32 outColumn;
    f32 cosine;
    f32 sine;

    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            if (row != column) {
                rotation[row][column] = 0.0f;
            } else {
                rotation[row][column] = D_auto_800730D0;
            }
        }
    }
    cosine = func_800F3B40(angle);
    sine = func_800F3AE0(angle);
    rotation[1][1] = cosine;
    rotation[1][2] = sine;
    rotation[2][1] = -sine;
    rotation[2][2] = cosine;
    for (outColumn = 0; outColumn < 3; outColumn++) {
        for (outRow = 0; outRow < 3; outRow++) {
            output[outRow][outColumn] = source[outRow][0] * rotation[0][outColumn]
                + source[outRow][1] * rotation[1][outColumn]
                + source[outRow][2] * rotation[2][outColumn];
        }
    }
    output[0][3] = source[0][3];
    output[1][3] = source[1][3];
    output[2][3] = source[2][3];
    output[3][3] = source[3][3];
    output[3][2] = source[3][2];
    output[3][1] = source[3][1];
    output[3][0] = source[3][0];
}

INCLUDE_ASM("span_1000", func_800A86E4);
