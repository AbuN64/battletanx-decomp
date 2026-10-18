#include "include_asm.h"

#include "shared/bt_gfx.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"

void func_800A9C20(void)
{
    FrameState *record = func_8007F060();
    record->firstVertex = record->vertexCount;
    record->totalVertices = 0;
}

INCLUDE_ASM("span_1000", func_800A9C48);
