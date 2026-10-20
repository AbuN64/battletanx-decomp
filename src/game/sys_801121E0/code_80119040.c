#include "include_asm.h"

INCLUDE_ASM("span_1000", func_80119040);
INCLUDE_ASM("span_1000", func_80119090);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
#include "game/sys_801121E0.h"
extern u8 D_803C7528;

func_801190D4(void) {
    func_801193E0(&D_803C7528, 0, 0);
}
#else
INCLUDE_ASM("span_1000", func_801190D4);
#endif
INCLUDE_ASM("span_1000", func_80119100);
INCLUDE_ASM("span_1000", func_801191E0);
