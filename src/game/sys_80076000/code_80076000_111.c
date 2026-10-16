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

