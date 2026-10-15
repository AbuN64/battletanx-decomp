#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007963C.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007963C.h"
/* func_80079A5C -- unless the handle is -1, sets it and then the float value on the object D_auto_80150380 holds. */

void func_80079A5C(int a, float b) {
    if (a != -1) {
        func_8011CB90(D_auto_80150380, a);
        func_8011CB00(D_auto_80150380, b);
    }
}

s32 func_80079AB4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != -1) {
        func_8011CB90(D_auto_80150380, (s16) arg0);
        var_v0 = func_8011CAA0(D_auto_80150380, arg1 & 0xFF);
    }
    return var_v0;
}
