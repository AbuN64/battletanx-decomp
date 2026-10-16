#include "shared/bt_gfx.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "game/sys_80076000.h"
extern void *func_8007F060(void);
void func_800A9F80(s32 s, s32 t) {
    FrameState *frame = func_8007F060();
    frame->s = s << 6;
    frame->t = t << 6;
}

void func_800A9FC4(f32 x, f32 y, f32 z) {
    u16 count;
    FrameState *frame;
    FrameVertex *vertex;
    frame = func_8007F060();
    count = frame->vertexCount;
    if (count == 32) {
        frame->overflow = 1;
        return;
    }
    vertex = &frame->vertices[count];
    vertex->ob[0] = x;
    vertex->ob[1] = y;
    vertex->ob[2] = z;
    vertex->tc[0] = frame->s;
    vertex->tc[1] = frame->t;
    vertex->cn[0] = frame->color[0];
    vertex->cn[1] = frame->color[1];
    vertex->cn[2] = frame->color[2];
    vertex->cn[3] = frame->color[3];
    frame->totalVertices++;
    frame->vertexCount++;
}

void func_800AA098(FrameVertexInput *source) {
    u16 index;
    FrameState *frame;
    FrameVertex *vertex;

    frame = func_8007F060();
    index = frame->vertexCount;
    if (index == 32) {
        frame->overflow = 1;
        return;
    }
    vertex = &frame->vertices[index];
    vertex->ob[0] = source->position[0];
    vertex->ob[1] = source->position[1];
    vertex->ob[2] = source->position[2];
    vertex->tc[0] = source->s << 6;
    vertex->tc[1] = source->t << 6;
    vertex->cn[0] = frame->color[0];
    vertex->cn[1] = frame->color[1];
    vertex->cn[2] = frame->color[2];
    vertex->cn[3] = frame->color[3];
    frame->totalVertices++;
    frame->vertexCount++;
}
