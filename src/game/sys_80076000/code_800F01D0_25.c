#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800F1BB4(f32 *origin, u8 byte0, u8 byte1, u8 byte2) {
    f32 range = D_auto_80074DE0;
    f32 offset = D_auto_80074DE4;
    f32 position[3];
    s32 i;
    for (i = 0; i < 15; i++) {
        position[0] = origin[0] + func_800F3880(range) - offset;
        position[1] = origin[1] + func_800F3880(range) - offset;
        position[2] = origin[2] + func_800F3880(range) - offset;
        func_800F195C(origin, position, 12, 0, byte0, byte1, byte2);
    }
}
