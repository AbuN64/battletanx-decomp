#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800EDB20);
INCLUDE_ASM("span_1000", func_800EDC64);
INCLUDE_ASM("span_1000", func_800EDE64);
INCLUDE_ASM("span_1000", func_800EE000);
INCLUDE_ASM("span_1000", func_800EE164);
INCLUDE_ASM("span_1000", func_800EE28C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800EE4BC(void) {
    D_auto_8033B631 = 0;
    D_auto_8033B630 = 0;
}

INCLUDE_ASM("span_1000", func_800EE4D4);
INCLUDE_ASM("span_1000", func_800EE75C);
INCLUDE_ASM("span_1000", func_800EE8B4);
INCLUDE_ASM("span_1000", func_800EEBEC);
INCLUDE_ASM("span_1000", func_800EED5C);
INCLUDE_ASM("span_1000", func_800EEE58);
INCLUDE_ASM("span_1000", func_800EF020);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"

s32 func_800EF11C(s32 arg0) {
    func_800EF16C(arg0 + 0x18, 0x23, 2);
    return 1;
}

s32 func_800EF144(s32 arg0) {
    func_800EF16C(arg0 + 0x18, 0x20, 0);
    return 1;
}

INCLUDE_ASM("span_1000", func_800EF16C);
