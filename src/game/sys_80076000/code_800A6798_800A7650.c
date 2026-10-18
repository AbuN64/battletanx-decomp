#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800A7650(f32 matrix[4][4])
{
    s32 row;
    s32 column;
    for (row = 0; row < 4; row++) {
        for (column = 0; column < 4; column++) {
            if (row != column) {
                matrix[row][column] = 0.0f;
            } else {
                matrix[row][column] = D_800730B0;
            }
        }
    }
}

