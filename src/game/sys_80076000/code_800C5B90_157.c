#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"




static inline struct PolygonPoint *mesh_vertex(u16 *index)
{
    if (*index >= D_auto_80135834->vertexCount) {
        return 0;
    }
    if (*index == 0) {
        return 0;
    }
    return &D_auto_80135834->vertices[*index];
}
void func_800E18B0(u16 corner, struct PolygonPoint **start, struct PolygonPoint **end)
{
    u16 first;
    u16 second;
    u16 offset;
    u16 next;

    offset = corner % 3;
    next = (offset + 1) % 3 + (corner - offset);
    first = D_auto_80135834->corners[corner].vertex;
    second = D_auto_80135834->corners[next].vertex;
    *start = mesh_vertex(&first);
    *end = mesh_vertex(&second);
}
