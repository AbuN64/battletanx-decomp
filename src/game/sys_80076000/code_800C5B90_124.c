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

void func_800DDBCC(void) {
    if (D_auto_80135834 != 0) {
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (9))) = 0;
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (0xA))) = 0;
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (0xB))) = 0;
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (0xE))) = 0;
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (0xD))) = 0;
        (*(s8 *)((s8 *)((*(void **)((s8 *)(D_auto_80135834) + (0x1C)))) + (0xC))) = 0;
    }
}
