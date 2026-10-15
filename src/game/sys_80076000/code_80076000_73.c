#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800862B4(void)
{
    s32 value = D_auto_80125858;
    if (value >= 1801) {
        D_auto_80125858 = value - 100;
        D_auto_801C9174 = (value - 100) * (value - 100);
    }
}

void func_800862E8(void) {
    if (D_auto_80125858 < func_80086AE8()) {
        D_auto_80125858 += 50;
        D_auto_801C9174 = D_auto_80125858 * D_auto_80125858;
    }
}
