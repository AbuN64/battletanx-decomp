#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void *func_8007A79C(u8 **state)
{
    u8 *initialized;
    initialized = &D_80152F80;
    if (*initialized == 0) {
        D_80152F88 = &D_80150398;
        D_80152F84.firstUsed = 0;
        *initialized = 1;
    }
    *state = initialized;
    return func_8007A7E0;
}

INCLUDE_ASM("span_1000", func_8007A7E0);
