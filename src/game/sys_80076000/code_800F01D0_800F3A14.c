#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800F3A14(s32 arg0) {
    D_80139610 = arg0;
}

INCLUDE_ASM("span_1000", func_800F3A24);
