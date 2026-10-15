#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
f32 func_800E95A8(s32 startTime)
{
    s32 elapsed = func_8007B1DC() - startTime;
    if (elapsed >= 9000) {
        return D_auto_80074890;
    }
    return (f32)elapsed / D_auto_8007488C;
}
