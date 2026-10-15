#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_types.h"
void * func_800E4A38(void) {
    s32 temp_s0;
    s32 var_s1;

    var_s1 = 0;
loop_1:
    temp_s0 = var_s1 & 0xFFFF;
    if (temp_s0 < func_8007AAB0()) {
        D_auto_8033AAC8[temp_s0] = 1;
        var_s1 += 1;
        goto loop_1;
    }
}
