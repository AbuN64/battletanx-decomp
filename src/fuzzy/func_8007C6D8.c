#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
s32 func_8007C6D8(void) {
    s32 var_v0;
    u32 temp_a0;

    temp_a0 = D_auto_801B4ABC->unk0;
    var_v0 = 0;
    if (temp_a0 < 7U) {
        var_v0 = temp_a0 >= 3U;
    }
    return var_v0;
}
