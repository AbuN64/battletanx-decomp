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
