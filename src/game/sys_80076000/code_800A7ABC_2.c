#include "shared/bt_span_1000_code_800A7ABC.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
/* func_800A81F0 -- transposes the 3x3 part of a 4-float-row matrix into another. */

void func_800A81F0(float src[][4], float dst[][4]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            dst[j][i] = src[i][j];
        }
    }
}

void func_800A823C(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    (*(f32 *)((s8 *)(arg0) + (0))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0))) * arg1);
    (*(f32 *)((s8 *)(arg0) + (4))) = (f32) ((*(f32 *)((s8 *)(arg0) + (4))) * arg1);
    (*(f32 *)((s8 *)(arg0) + (8))) = (f32) ((*(f32 *)((s8 *)(arg0) + (8))) * arg1);
    (*(f32 *)((s8 *)(arg0) + (0x10))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x10))) * arg2);
    (*(f32 *)((s8 *)(arg0) + (0x14))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x14))) * arg2);
    (*(f32 *)((s8 *)(arg0) + (0x18))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x18))) * arg2);
    (*(f32 *)((s8 *)(arg0) + (0x20))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x20))) * arg3);
    (*(f32 *)((s8 *)(arg0) + (0x24))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x24))) * arg3);
    (*(f32 *)((s8 *)(arg0) + (0x28))) = (f32) ((*(f32 *)((s8 *)(arg0) + (0x28))) * arg3);
}
