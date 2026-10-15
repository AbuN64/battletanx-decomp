#include "shared/bt_types.h"
extern s32 D_auto_80147040;

int func_800760DC(s32 arg0) {
    D_auto_80147040 = 0;
loop_2:
    if (D_auto_80147040 < arg0) {
        D_auto_80147040 += 1;
        goto loop_2;
    }
}
