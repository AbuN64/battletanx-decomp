#include "shared/bt_types.h"
extern s16 D_auto_801B4A96;

int func_8007968C(void) {
    s16 *var_v0;
    s32 var_v1;

    var_v1 = 0x1F;
    var_v0 = &D_auto_801B4A96;
    do {
        *var_v0 = 1;
        var_v1 -= 1;
        var_v0 -= 2;
    } while (var_v1 >= 0);
}
