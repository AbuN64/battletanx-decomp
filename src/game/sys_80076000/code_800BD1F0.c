#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800BD1F0(void) {
    D_80327C30 = 0xFF;
    D_80327D2C = 0;
}

INCLUDE_ASM("span_1000", func_800BD20C);
INCLUDE_ASM("span_1000", func_800BD994);
INCLUDE_ASM("span_1000", func_800BDEF8);
INCLUDE_ASM("span_1000", func_800BE45C);
INCLUDE_ASM("span_1000", func_800BE99C);
INCLUDE_ASM("span_1000", func_800BFDB4);
