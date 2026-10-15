#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800E27E4(u16 angle, u16 reference) {
    u16 delta;
    if (angle > reference) {
        delta = angle - reference;
        return delta < 0x8000;
    }
    delta = reference - angle;
    return delta > 0x8000;
}
