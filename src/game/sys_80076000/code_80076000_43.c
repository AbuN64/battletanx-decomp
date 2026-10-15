#include "shared/bt_types.h"

s32 func_80094774(f32 *arg0, f32 *arg1) {
    f32 d[4];
    s32 r;

    d[3] = arg1[1] - arg0[1];
    d[2] = arg1[0] - arg0[0];
    d[1] = arg0[2] - arg0[0];
    d[0] = arg0[1] - arg0[3];
    r = 0;
    if ((d[3] * d[1] + d[2] * d[0]) != 0.0f) {
        r = 1;
    }
    if (r) {
        d[3] = arg1[1] - arg0[3];
        d[2] = arg1[0] - arg0[2];
        d[1] = arg0[4] - arg0[2];
        d[0] = arg0[3] - arg0[5];
        r = 0;
    if ((d[3] * d[1] + d[2] * d[0]) != 0.0f) {
        r = 1;
    }
        if (r) {
            d[3] = arg1[1] - arg0[5];
            d[2] = arg1[0] - arg0[4];
            d[1] = arg0[6] - arg0[4];
            d[0] = arg0[5] - arg0[7];
            r = 0;
    if ((d[3] * d[1] + d[2] * d[0]) != 0.0f) {
        r = 1;
    }
            if (r) {
                d[3] = arg1[1] - arg0[7];
                d[2] = arg1[0] - arg0[6];
                d[1] = arg0[0] - arg0[6];
                d[0] = arg0[7] - arg0[1];
                r = 0;
    if ((d[3] * d[1] + d[2] * d[0]) != 0.0f) {
        r = 1;
    }
                if (r != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
