#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800ECB34(void) {
    if (D_auto_8033B628 == -1) {
        D_auto_8033B62C = 0x10;
        D_auto_8033B628 = D_auto_8033B5F0;
    }
}

void *func_800ECB68(s32 index)
{
    void *result;
    if (D_auto_80137900 != 0) {
        result = D_auto_8033B610[index];
    } else {
        result = 0;
    }
    return result;
}
