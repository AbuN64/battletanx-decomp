#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800EC7A8(f32 out[4][4], s32 offset) {
    s32 i;
    s32 j;
    s32 frame;
    f32 (*src)[3];
    s32 last;
    if (D_auto_80137900 != 0) {
        if (offset == 0) {
            out[0][3] = 0;
            out[1][3] = 0;
            out[2][3] = 0;
            out[3][3] = D_auto_800749E0;
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 3; j++) {
                    out[i][j] = D_auto_8033B61C[i][j];
                }
            }
            return;
        }
        frame = D_auto_8033B5F0 + offset;
        last = D_auto_8033B600 - 1;
        if (frame > last) {
            frame = last;
        }
        src = (f32 (*)[3])(D_auto_8033B618 + frame * D_auto_8033B5F4);
        out[0][3] = 0;
        out[1][3] = 0;
        out[2][3] = 0;
        out[3][3] = D_auto_800749E4;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                out[i][j] = src[i][j];
            }
        }
    }
}
