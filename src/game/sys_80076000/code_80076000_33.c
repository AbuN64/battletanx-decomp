#include "game/sys_80076000.h"
#include "shared/bt_types.h"

void func_80086B48(u8 *arg0, f32 arg1) {
    f32 t;
    f32 t2;
    f32 t3;
    u32 v;
    u32 w;
    u32 x;

    t = arg0[0xC] * arg1;
    if (t > 255.0f) {
        v = 255;
    } else {
        v = t;
    }
    t2 = arg0[0xD] * arg1;
    arg0[0xC] = v;
    if (t2 > 255.0f) {
        w = 255;
    } else {
        w = t2;
    }
    t3 = arg0[0xE] * arg1;
    arg0[0xD] = w;
    if (t3 > 255.0f) {
        x = 255;
    } else {
        x = t3;
    }
    arg0[0xE] = x;
}
