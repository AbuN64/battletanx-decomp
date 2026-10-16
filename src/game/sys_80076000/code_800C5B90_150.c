#include "game/sys_80076000.h"
#include "shared/bt_types.h"



s32 func_800D9024(void)
{
    s32 count = 0;
    s32 value;
    s32 i;

    for (value = 0; value < 4; value++) {
        for (i = 0; i < 4; i++) {
            if (D_auto_80328400[i] == value) {
                count++;
                break;
            }
        }
    }
    return count;
}

