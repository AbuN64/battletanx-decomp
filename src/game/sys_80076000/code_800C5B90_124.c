#include "shared/bt_types.h"
#include "game/sys_80076000.h"
u32 func_800DDB94(void)
{
    u8 previous = D_auto_80135820;
    u8 current = previous + 1;
    u32 result;
    D_auto_80135820 = current;
    if (current < 241) {
        result = (previous + 16) & 0xFF;
    } else {
        result = 15;
    }
    return result;
}
