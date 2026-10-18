#include "include_asm.h"

#ifdef NON_MATCHING
#include "shared/bt_types.h"
extern s32 D_auto_A4500004;

int func_80110480(void) {
    return D_auto_A4500004;
}
#else
INCLUDE_ASM("span_1000", func_80110480);
#endif
INCLUDE_DATA("span_1000", D_8011048C);
