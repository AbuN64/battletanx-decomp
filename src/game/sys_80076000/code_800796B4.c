#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"
#include "game/sys_8011C210.h"
#include "span_1000/code_8007963C.h"
int func_8011C300(SlotTable *owner);
s32 func_800796B4(s16 value)
{
    func_8011CB90(D_80150380, value);
    return func_8011C300(D_80150380) != 0;
}

INCLUDE_ASM("span_1000", func_800796F0);
