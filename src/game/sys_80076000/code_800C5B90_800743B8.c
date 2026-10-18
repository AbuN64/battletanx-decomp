#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"


s32 func_800DF214(u16 id) {
    s32 kind = D_auto_80135834->kinds[id];

    if (D_auto_80135834->enabled[kind] == 0) {
        return 0;
    }
    if (kind >= 15) {
        return 1;
    }
    switch (kind) {
    case 0:
        return 0;
    case 5:
        return 1;
    case 13:
        return func_8007C6D8() != 0;
    case 6:
        return 2;
    case 14:
        return (func_8007C6D8() != 0) << 1;
    case 4:
        return 3;
    case 12:
        return func_8007C6D8() ? 3 : 0;
    }
    return 4;
}

INCLUDE_RODATA("span_1000", R_800743F4);
INCLUDE_RODATA("span_1000", R_800743FC);
INCLUDE_RODATA("span_1000", R_80074404);
INCLUDE_RODATA("span_1000", R_80074414);
INCLUDE_RODATA("span_1000", R_8007441C);
INCLUDE_ASM("span_1000", func_800DF2DC);
INCLUDE_ASM("span_1000", func_800DF3A0);
INCLUDE_ASM("span_1000", func_800DF4E8);
#include "game/sys_80076000.h"
#include "shared/bt_path_search.h"

u16 *func_800DF55C(PathSearchNode *pool, PathSearchNode *record)
{
    u16 *link;

    while ((link = &record->left), *link != 0) {
        record = &pool[*link];
    }
    return link;
}

INCLUDE_ASM("span_1000", func_800DF58C);
#include "game/sys_80076000.h"
#include "shared/bt_path_search.h"

s32 func_800DF60C(PathSearch *tree, u16 id) {
    s32 removed = 0;
    u16 *link = &tree->root;
    f32 key = tree->nodes[id].total;

    for (;;) {
        u16 index = *link;

        if (index == id) {
            PathSearchNode *node = &tree->nodes[index];
            u16 right = node->right;
            u16 left = node->left;

            if (right == 0) {
                *link = left;
            } else {
                u16 *slot;
                PathSearchNode *last = &tree->nodes[right];

                while (*(slot = &last->left) != 0) {
                    last = &tree->nodes[*slot];
                }
                *slot = left;
                *link = right;
            }
            removed = 1;
            node->closed = 1;
            node->right = 0;
            node->left = 0;
            break;
        }
        if (index == 0) {
            break;
        }
        if (key <= tree->nodes[index].total) {
            link = &tree->nodes[index].left;
        } else {
            link = &tree->nodes[index].right;
        }
    }
    return removed;
}

INCLUDE_ASM("span_1000", func_800DF6F4);
INCLUDE_ASM("span_1000", func_800DF7D0);
INCLUDE_ASM("span_1000", func_800DFA68);
INCLUDE_ASM("span_1000", func_800E004C);
INCLUDE_ASM("span_1000", func_800E031C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

void func_800E055C(s16 arg0) {
    s32 temp_v0;

    D_auto_80135838 = arg0;
    temp_v0 = func_800E09B0(arg0 & 0xFFFF);
    D_auto_8013583C = temp_v0;
    func_800E1648(temp_v0, &D_auto_80328450);
}

INCLUDE_ASM("span_1000", func_800E05A4);
INCLUDE_ASM("span_1000", func_800E0790);
INCLUDE_ASM("span_1000", func_800E0870);
INCLUDE_ASM("span_1000", func_800E0954);
#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
#include "game/sys_80076000.h"
void func_800E097C(s32 arg0) {
    D_auto_80135834->unk20 = arg0;
}

void func_800E098C(u16 index) {
    MeshCorner *corner = &D_auto_80135834->corners[index];
    corner->vertex = 0;
    corner->neighbor = 0;
}

INCLUDE_ASM("span_1000", func_800E09B0);
INCLUDE_ASM("span_1000", func_800E09F4);
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

