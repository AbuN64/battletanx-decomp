#include "game/sys_80076000.h"
#include "shared/bt_types.h"
int func_800ECBA8(void) {
    s32 var_v0;

    if (D_auto_80137904 != 7) {
        if ((u32) D_auto_80137904 < 8U) {
            if ((u32) D_auto_80137904 < 4U) {
                var_v0 = 0x11;
                if ((u32) D_auto_80137904 >= 2U) {
                    goto block_8;
                }
            }
        } else {
            var_v0 = 0x11;
            if (D_auto_80137904 == 0xB) {
                goto block_8;
            }
        }
    } else {
        var_v0 = 0x18;
block_8:
        D_auto_80137908 = var_v0;
    }
}
