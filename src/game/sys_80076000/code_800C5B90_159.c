#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"


struct PolygonPoint *func_800E0A48(u32 id)
{
    id &= 0xFFFF;
    if (id >= D_auto_80135834->vertexCount) {
        return 0;
    }
    if (id == 0) {
        return 0;
    }
    return &D_auto_80135834->vertices[id];
}

void func_800E0A84(u16 *indices, struct PolygonPoint *out) {
    u16 i;

    for (i = 0; i < 4; i++) {
        struct PolygonPoint *vertex;
        struct PolygonPoint *dst;
        u16 index = indices[i];

        if (index >= D_auto_80135834->vertexCount) {
            vertex = 0;
        } else if (index == 0) {
            vertex = 0;
        } else {
            vertex = &D_auto_80135834->vertices[index];
        }
        dst = &out[i];
        dst->x = vertex->x;
        dst->y = vertex->y;
    }
}
