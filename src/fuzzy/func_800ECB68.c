#include "game/sys_80076000.h"
#include "shared/bt_types.h"
extern s32 D_auto_8033B610;

s32 func_800ECB68(s32 arg0) {
    if (D_auto_80137900 != 0) {
        return *(&D_auto_8033B610 + (arg0 * 4));
    }
    return 0;
}
