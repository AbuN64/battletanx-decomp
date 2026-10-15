#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
s32 func_800E2D40(s32);
extern f32 D_auto_80074884;

f32 func_800E9538(struct ObjectOwner *arg0) {
    f32 var_fv0;

    var_fv0 = D_auto_80074884;
    if (func_800E2D40(arg0->unk_8) == 0) {
        var_fv0 = 0.0f;
    }
    return var_fv0;
}
