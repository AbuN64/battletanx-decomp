#include "shared/bt_types.h"
#include "game/sys_80076000.h"
s32 func_800E289C(s32 from, s32 to) {
    to -= from;
    if (to > 0) {
        if (to > 0x8000) {
            return to - 0xFFFF;
        }
        return to;
    }
    if (to < -0x8000) {
        return to + 0xFFFF;
    }
    return to;
}
