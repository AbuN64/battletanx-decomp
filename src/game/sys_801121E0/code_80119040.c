#include "include_asm.h"

INCLUDE_ASM("span_1000", func_80119040);
INCLUDE_ASM("span_1000", func_80119090);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
#include "game/sys_801121E0.h"
extern u8 D_auto_803C7528;

func_801190D4(void) {
    func_801193E0(&D_auto_803C7528, 0, 0);
}
#else
INCLUDE_ASM("span_1000", func_801190D4);
#endif
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_80121F10.h"
#include "shared/bt_types.h"
extern s32 D_auto_80000308;
extern u32 D_auto_A4600000;
extern s32 D_auto_A4600004;
extern s32 D_auto_A4600008;
extern s32 D_auto_A460000C;
extern s32 D_auto_A4600010;

s32 func_80119100(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    if (D_auto_A4600010 & 3) {
        do {

        } while (D_auto_A4600010 & 3);
    }
    D_auto_A4600000 = func_80121F10(arg2);
    D_auto_A4600004 = (D_auto_80000308 | arg1) & 0x1FFFFFFF;
    switch (arg0) {                                 /* irregular */
    case 0:
        D_auto_A460000C = arg3 - 1;
block_8:
        return 0;
    case 1:
        D_auto_A4600008 = arg3 - 1;
        goto block_8;
    default:
        return -1;
    }
}
#else
INCLUDE_ASM("span_1000", func_80119100);
#endif
INCLUDE_ASM("span_1000", func_801191E0);
