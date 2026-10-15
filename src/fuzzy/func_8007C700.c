#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
#include "span_1000/code_800A51E8.h"
s32 func_8007C700(void) {
    s32 var_v0;
    u32 temp_a0;

    temp_a0 = D_auto_801B4ABC->unk0;
    var_v0 = 0;
    if (temp_a0 < 8U) {
        var_v0 = temp_a0 >= 3U;
    }
    return var_v0;
}
