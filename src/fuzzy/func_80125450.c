#include "shared/bt_types.h"
s32 func_80125450(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_v0;

    if (arg0 < arg2) {
        return 0;
    }
    if (arg2 < arg0) {
        return 2;
    }
    var_v0 = 0;
    if (arg1 >= arg3) {
        var_v0 = 2;
        if (arg3 >= arg1) {
            return 1;
        }
    }
    return var_v0;
}
