#ifndef UNBAKE_SHARED_GFX_H
#define UNBAKE_SHARED_GFX_H
#include "shared/bt_types.h"

typedef union Gfx {
    struct { u32 w0; u32 w1; } words;
    u64 force_structure_alignment;
} Gfx;

typedef struct FrameVertex {
    s16 ob[3];
    u16 flag;
    s16 tc[2];
    u8 cn[4];
} FrameVertex;
struct FrameTexture { u16 fmt, siz, width, height, masks, maskt; };
typedef struct FrameState {
    Gfx *main;
    Gfx *overlay;
    Gfx *auxiliary;
    FrameVertex *vertices;
    s32 (*matrices)[4][4];
    u16 overflow;
    u16 firstVertex;
    u16 totalVertices;
    s16 s, t;
    u8 color[4];
    Gfx *overlayBranch;
    struct FrameTexture *texture;
    u16 vertexCount;
} FrameState;


typedef struct ViewMatrix {
    f32 matrix[4][4];
    s32 (*fixed)[4][4];
} ViewMatrix;
typedef struct DrawItem {
    Gfx *displayList;
    u32 matrixAddress;
    Gfx *commands;
    struct DrawItem *next;
} DrawItem;
typedef struct DrawGroup {
    Gfx *displayList;
    DrawItem *perPlayer[4];
    struct DrawGroup *next;
} DrawGroup;

#endif
