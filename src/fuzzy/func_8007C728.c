#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
int func_8007C728(void) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = D_auto_801B4ABC->unk0;
    if (temp_v1 < 5U) {
        var_v0 = 1;
        if ((temp_v1 < 3U) && (temp_v1 != 0)) {
            return 0;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    if (temp_v1 == 6) {
        var_v0 = 1;
    }
    return var_v0;
}
