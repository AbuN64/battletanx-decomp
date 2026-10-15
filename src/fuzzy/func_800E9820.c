#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
s32 func_800E9880(s32 arg0, s32 arg1);
s32 func_800E9820(struct ObjectOwner *arg0, s32 arg1) {
    if (!(arg1 & 0x1000)) {
        return 0;
    }
    return func_800E9880(arg0->unk_8, arg1);
}
