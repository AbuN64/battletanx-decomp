#include "shared/bt_types.h"
double func_8011EBB8(f64 arg0, s32 *arg2) {
    f64 var_fv0;
    f64 var_fv1;

    *arg2 = 0;
    if (arg0 == 0.0) {
        return arg0;
    }
    if (arg0 > 0.0) {
        var_fv0 = arg0;
    } else {
        var_fv0 = -arg0;
    }
    if (var_fv0 >= 1.0) {
        do {
            var_fv0 *= 0.5;
            *arg2 += 1;
        } while (var_fv0 >= 1.0);
    }
    if (var_fv0 < 0.5) {
        do {
            var_fv0 *= 2.0;
            *arg2 -= 1;
        } while (var_fv0 < 0.5);
    }
    if (arg0 > 0.0) {
        var_fv1 = var_fv0;
    } else {
        var_fv1 = -var_fv0;
    }
    return var_fv1;
}
