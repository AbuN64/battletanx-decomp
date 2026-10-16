#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800DAD60(void) {
    s32 i;
    s32 fill = ' ';
    u8 *cursor;
    D_auto_80328420 = 0;
    D_auto_80328424 = 0;
    D_auto_80328440 = -1;
    D_auto_8032843C = 0;
    D_auto_8032843A = 0;
    D_auto_80328428 = 0;
    for (i = 9, cursor = &D_auto_80328430[9]; i >= 0; i--, cursor--) {
        *cursor = fill;
    }
}
