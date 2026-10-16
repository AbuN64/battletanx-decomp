#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F29F0.h"

void func_800902BC(f32 *arg0, s32 count) {
    s32 i;
    s32 angleX;
    s32 angleY;
    s32 angleZ;
    s32 spin;

    for (i = 0; i < count; i++) {
        angleX = (func_800F38F4() % 1280) & 0xFFFF;
        angleY = (func_800F38F4() % 1280) & 0xFFFF;
        angleZ = (func_800F38F4() % 1280) & 0xFFFF;
        spin = (func_800F38F4() % 65535) & 0xFFFF;
        func_8008F6F4(arg0, 0, 0, 0, angleX, angleY, angleZ, spin, 0x2000, 0,
                          D_auto_80071CE8, 0, 0, 0x12);
    }
}
