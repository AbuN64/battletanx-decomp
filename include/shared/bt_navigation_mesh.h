#ifndef BT_NAVIGATION_MESH_H
#define BT_NAVIGATION_MESH_H
#include "shared/bt_span_1000_code_80091A60.h"
typedef struct MeshCorner { u16 vertex; u16 neighbor; } MeshCorner;
typedef struct NavigationMesh {
    u8 *end;
    u8 *section04;
    u16 vertexCount;
    u16 cellCount;
    struct PolygonPoint *vertices;
    MeshCorner *corners;
    MeshCorner *triangles;
    u8 *kinds;
    u8 *enabled;
    s32 unk20;
} NavigationMesh;
extern NavigationMesh *D_auto_80135834;
#endif
