#include "include_asm.h"

#include "shared/bt_span_1000_code_80094704.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
/* func_80096760 -- returns 0. The cartridge keeps the entry point; its caller takes the zero. */

int func_80096760(void) {
    return 0;
}

void *func_80096768(s32 index)
{
    return D_80125D50 + index * 68;
}

