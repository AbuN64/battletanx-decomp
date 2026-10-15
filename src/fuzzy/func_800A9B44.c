#include "shared/bt_types.h"
int func_800A9B44(s32 arg0) {
    s32 var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = 0;
    var_v1 = arg0 + 4;
    do {
        temp_v0 = *var_v1;
        var_v1 += 1;
        var_a1 += temp_v0;
    } while ((s32) var_v1 < (arg0 + 0x100));
    return var_a1;
}
