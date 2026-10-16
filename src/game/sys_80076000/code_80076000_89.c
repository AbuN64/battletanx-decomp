#include "shared/bt_types.h"
#include "game/sys_80076000.h"

f32 func_8007B208(s32 *r, s32 value) {
    s32 len = r[1] - r[0];
    value -= r[0];
    if (value >= len) return D_auto_80071100;
    if (len <= 0) return D_auto_80071100;
    if (value < 0) return 0.0f;
    return (f32)value / (f32)len;
}

u64 func_8007B268(void) {
    return D_auto_801257A0;
}
