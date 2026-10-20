#include "include_asm.h"

#ifdef NON_MATCHING
#include "shared/bt_types.h"
extern u8 D_801257C4;
extern u8 D_801257C5;
extern u8 D_801257C6;

unsigned char func_8007D430(u8 arg0, u8 arg1, u8 arg2) {
    u8 sp0;
    u8 sp1;
    u8 sp2;

    sp0 = arg0;
    sp1 = arg1;
    sp2 = arg2;
    D_801257C4 = sp0;
    D_801257C5 = sp1;
    D_801257C6 = sp2;
}
#else
INCLUDE_ASM("span_1000", func_8007D430);
#endif
INCLUDE_ASM("span_1000", func_8007D48C);
INCLUDE_ASM("span_1000", func_8007D4E8);
INCLUDE_ASM("span_1000", func_8007D850);
INCLUDE_ASM("span_1000", func_8007D998);
INCLUDE_ASM("span_1000", func_8007DBC4);
INCLUDE_ASM("span_1000", func_8007DC5C);
INCLUDE_DATA("span_1000", D_8007E138);
