#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_80105750(void **displayList, char *text) {
    u8 ch;
    while ((ch = *text++) != 0) {
        if ((u32)(ch - '0') < 10) {
            D_auto_803B75A9 = 1;
        } else {
            D_auto_803B75A9 = 0;
        }
        func_8010647C(displayList, ch);
    }
    D_auto_803B75A9 = 0;
}

INCLUDE_ASM("span_1000", func_801057DC);
INCLUDE_ASM("span_1000", func_8010595C);
INCLUDE_ASM("span_1000", func_80105A50);
INCLUDE_ASM("span_1000", func_80105B48);
