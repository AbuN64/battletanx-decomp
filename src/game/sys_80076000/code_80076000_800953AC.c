#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800824E4.h"
#include "shared/bt_span_1000_code_8008011C.h"

extern s32 func_80094C58(s32 x0, s32 z0, s32 x1, s32 z1, s32 key,
                         s32 *out0, s32 *out1, s32 *out2, s32 *out3);


void func_800953AC(s32 x0, s32 z0, s32 x1, s32 z1, s32 arg4, s32 arg5, s32 key) {
    SceneView *zone;
    s32 cx;
    s32 cz;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;

    zone = &func_800821C0()->views[key];
    cx = zone->x;
    cz = zone->z;
    if (cx < x0) {
        if (cz < z0) {
            if (func_80094C58(x0, z0, x1, z0, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
            if (func_80094C58(x0, z0, x0, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        } else if (z1 < cz) {
            if (func_80094C58(x0, z0, x0, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
            if (func_80094C58(x0, z1, x1, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        } else {
            if (func_80094C58(x0, z0, x0, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        }
    } else if (x1 < cx) {
        if (cz < z0) {
            if (func_80094C58(x0, z0, x1, z0, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
            if (func_80094C58(x1, z0, x1, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        } else if (z1 < cz) {
            if (func_80094C58(x1, z0, x1, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
            if (func_80094C58(x1, z1, x0, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        } else {
            if (func_80094C58(x1, z0, x1, z1, key, &v0, &v1, &v2, &v3)) {
                func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
            }
        }
    } else if (cz < z0) {
        if (func_80094C58(x0, z0, x1, z0, key, &v0, &v1, &v2, &v3)) {
            func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
        }
    } else if (z1 < cz) {
        if (func_80094C58(x0, z1, x1, z1, key, &v0, &v1, &v2, &v3)) {
            func_800949D8(v0, v1, v2, v3, arg4, arg5, key);
        }
    }
}

INCLUDE_ASM("span_1000", func_80095768);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
extern s32 D_auto_802D5BC0;
extern s32 D_auto_802D5BC4;

s32 func_80095C1C(s32 *arg0, s32 arg1) {
    s32 *var_a1;
    s32 *var_t0;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t4;
    s32 var_v1;

    var_a3 = 0;
    var_t4 = 0;
    var_t3 = 0;
    do {
        var_t2 = 0;
        var_t1 = var_t3;
        var_t0 = (var_a3 * 4) + arg0;
loop_2:
        temp_a1 = var_t1 + (arg1 * 0x960);
        if (*(&D_auto_802D5BC0 + temp_a1) != 0x8FFF) {
            temp_a2 = *(&D_auto_802D5BC4 + temp_a1);
            var_v1 = 0;
            if (var_a3 > 0) {
                var_a1 = arg0;
loop_5:
                if (*var_a1 != temp_a2) {
                    var_v1 += 1;
                    var_a1 += 4;
                    if (var_v1 >= var_a3) {
                        goto block_7;
                    }
                    goto loop_5;
                }
            } else {
block_7:
                *var_t0 = temp_a2;
                var_t0 += 4;
                var_a3 += 1;
            }
        }
        var_t2 += 1;
        var_t1 += 8;
        if (var_t2 < 0x64) {
            goto loop_2;
        }
        var_t4 += 1;
        var_t3 += 0x320;
    } while (var_t4 < 3);
    return var_a3;
}
#else
INCLUDE_ASM("span_1000", func_80095C1C);
#endif
INCLUDE_ASM("span_1000", func_80095CDC);
