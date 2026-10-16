#include "shared/bt_gfx.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007EBA0.h"


void func_800AA168(u16 count, FrameVertexSource *source)
{
    FrameState *record;
    FrameVertex *vertex;
    s32 i;
    u8 *color;
    record = func_8007F060();
    if (record->vertexCount + count >= 0x20) {
        record->overflow = 1;
        return;
    }
    color = record->color;
    vertex = &record->vertices[record->vertexCount];
    for (i = 0; i < count; i++) {
        vertex->ob[0] = source->x;
        vertex->ob[1] = source->y;
        vertex->ob[2] = source->z;
        vertex->tc[0] = source->s << 6;
        vertex->tc[1] = source->t << 6;
        vertex->cn[0] = color[0];
        vertex->cn[1] = color[1];
        vertex->cn[2] = color[2];
        vertex->cn[3] = color[3];
        vertex++;
        source++;
    }
    record->totalVertices += count;
    record->vertexCount += count;
}
