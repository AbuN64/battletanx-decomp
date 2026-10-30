#include "include_asm.h"

INCLUDE_ASM("span_1000", func_8011BE10);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_8011BD50.h"
#include "shared/bt_span_1000_code_80121F10.h"
#include <ultra64.h>
#include "span_1000/code_80077930.h"
int __osSiDeviceBusy();
extern u32 D_A4800000;
extern s32 D_A4800004;
extern s32 D_A4800010;

int __osSiRawStartDma(s32 arg0, s32 *arg1) {
    if (__osSiDeviceBusy() != 0) {
        return -1;
    }
    if (arg0 == 1) {
        osWritebackDCache(arg1, 0x40);
    }
    D_A4800000 = osVirtualToPhysical(arg1);
    if (arg0 == 0) {
        D_A4800004 = 0x1FC007C0;
    } else {
        D_A4800010 = 0x1FC007C0;
    }
    if (arg0 == 0) {
        osInvalDCache((s32) arg1, 0x40);
    }
    return 0;
}
#else
INCLUDE_ASM("span_1000", __osSiRawStartDma);
#endif
INCLUDE_DATA("span_1000", D_8011C07C);
