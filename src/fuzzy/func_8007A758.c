#include "shared/bt_types.h"
int func_80110480();
extern s32 D_auto_80125778;

void func_8007A758(void) {
    if (((func_80110480() >> 2) == 0) && (D_auto_80125778 == 0)) {
        D_auto_80125778 = 0;
    }
}
