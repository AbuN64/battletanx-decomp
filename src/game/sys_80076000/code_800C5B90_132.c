#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"
f32 func_800E0BC4(f32 *offset)
{
    f32 z;
    f32 x;
    z = offset[1];
    if (!(z > 0.0f)) {
        z = -z;
    }
    x = offset[0];
    if (!(x > 0.0f)) {
        x = -x;
    }
    if (x < z) {
        return z + x * D_auto_80074434 / D_auto_80074438;
    }
    return x + z * D_auto_8007442C / D_auto_80074430;
}
