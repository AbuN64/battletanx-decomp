#include "include_asm.h"

INCLUDE_ASM("span_1000", func_8011BE10);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_8011BD50.h"
#include "shared/bt_span_1000_code_80121F10.h"
#include "shared/bt_types.h"
#include "span_1000/code_80077930.h"
int func_8011C080();
s32 func_801226A0(s32 *, s32);
extern u32 D_auto_A4800000;
extern s32 D_auto_A4800004;
extern s32 D_auto_A4800010;

int func_8011BFD0(s32 arg0, s32 *arg1) {
    if (func_8011C080() != 0) {
        return -1;
    }
    if (arg0 == 1) {
        func_801226A0(arg1, 0x40);
    }
    D_auto_A4800000 = func_80121F10(arg1);
    if (arg0 == 0) {
        D_auto_A4800004 = 0x1FC007C0;
    } else {
        D_auto_A4800010 = 0x1FC007C0;
    }
    if (arg0 == 0) {
        func_801124C0((s32) arg1, 0x40);
    }
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_8011BFD0);
#endif
INCLUDE_DATA("span_1000", D_8011C07C);
