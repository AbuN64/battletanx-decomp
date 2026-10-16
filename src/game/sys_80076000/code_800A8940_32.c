#include "game/sys_80076000.h"
#include "shared/bt_gbi.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
void func_800A9CC4(void)
{
    FrameState *frame;
    Gfx *command;
    FrameVertex *vertices;
    u32 count;
    u32 first;

    frame = func_8007F060();
    if (frame->overflow == 0) {
        command = frame->overlay;
        count = frame->totalVertices;
        first = frame->firstVertex;
        frame->overlay = command + 1;
        vertices = frame->vertices;
        gSPVertexF3DEX(command, &vertices[first], count, 0);
    }
}
