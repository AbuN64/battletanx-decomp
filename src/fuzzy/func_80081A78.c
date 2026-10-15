#include "shared/bt_types.h"
extern s32 D_auto_801C9188;
extern s32 D_auto_801C918C;

int func_80081A78(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = (arg0 + 7) & ~7;
    var_v0 = 0;
    if (D_auto_801C9188 >= temp_a0) {
        var_v0 = D_auto_801C918C;
        D_auto_801C9188 -= temp_a0;
        D_auto_801C918C = var_v0 + temp_a0;
    }
    return var_v0;
}
