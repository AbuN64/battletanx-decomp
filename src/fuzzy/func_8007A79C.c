#include "shared/bt_types.h"
extern s32 D_auto_80150398;
extern u8 D_auto_80152F80;
extern s32 D_auto_80152F84;
extern s32 *D_auto_80152F88;
extern s32 func_8007A7E0;

int func_8007A79C(u8 **arg0) {
    if (D_auto_80152F80 == 0) {
        D_auto_80152F88 = &D_auto_80150398;
        D_auto_80152F84 = 0;
        D_auto_80152F80 = 1;
    }
    *arg0 = &D_auto_80152F80;
    return &func_8007A7E0;
}
