#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800E0B00.h"
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

void func_800DDBCC(void)
{
    if (D_auto_80135834 != 0) {
        D_auto_80135834->enabled[9] = 0;
        D_auto_80135834->enabled[10] = 0;
        D_auto_80135834->enabled[11] = 0;
        D_auto_80135834->enabled[14] = 0;
        D_auto_80135834->enabled[13] = 0;
        D_auto_80135834->enabled[12] = 0;
    }
}
