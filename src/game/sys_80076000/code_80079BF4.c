#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "span_1000/code_8007963C.h"


void func_80079BF4(s16 arg0) {
    func_8011B9A0(D_80150350, (s32) arg0);
}

INCLUDE_ASM("span_1000", func_80079C20);
