#include "include_asm.h"

#include "game/sys_80076000.h"
#include "span_1000/code_800E9538.h"
f32 func_800E9538(struct ResetState *context)
{
    if (func_800E2D40(context->unk8)) {
        return 1.0f;
    }
    return 0.0f;
}

INCLUDE_RODATA("span_1000", D_80074888);
INCLUDE_RODATA("span_1000", D_8007488C);
INCLUDE_DATA("span_1000", D_80074890);
INCLUDE_RODATA("span_1000", D_80074894);
INCLUDE_DATA("span_1000", D_80074898);
INCLUDE_RODATA("span_1000", D_8007489C);
INCLUDE_RODATA("span_1000", D_800748A4);
INCLUDE_DATA("span_1000", D_800748AC);
INCLUDE_ASM("span_1000", func_800E9570);
