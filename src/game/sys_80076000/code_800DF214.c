#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_navigation_mesh.h"


s32 func_800DF214(u16 id) {
    s32 kind = D_80135834->kinds[id];

    if (D_80135834->enabled[kind] == 0) {
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

INCLUDE_RODATA("span_1000", D_800743F4);
INCLUDE_RODATA("span_1000", D_800743FC);
INCLUDE_RODATA("span_1000", D_80074404);
INCLUDE_RODATA("span_1000", D_80074414);
INCLUDE_RODATA("span_1000", D_8007441C);
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

#include "shared/bt_types.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

Unknown800DF58C *func_800DF58C(Unknown800DF58C *pool, u16 *freeHead) {
    Unknown800DF58C *node;
    Unknown800DF58C *tail;
    u16 children;
    u16 next;

    node = &pool[*freeHead];
    children = node->value06;
    next = node->value04;
    if (children == 0) {
        *freeHead = next;
    } else {
        u16 *link;
        tail = &pool[children];
        while (*(link = &tail->value04) != 0) {
            tail = &pool[*link];
        }
        *link = next;
        *freeHead = children;
    }
    node->value01 = 1;
    node->value06 = 0;
    node->value04 = 0;
    return node;
}
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

static inline void splice_right_subtree(Unknown800DF6F4_1 *tree, u16 *parentSlot, u16 right, u16 left) {
    if (right == 0) {
        *parentSlot = left;
    } else {
        Unknown800DF6F4 *node = &tree->value00[right];
        u16 *slot;

        while (*(slot = &node->value04) != 0) {
            node = &tree->value00[*slot];
        }
        *slot = left;
        *parentSlot = right;
    }
}

u16 func_800DF6F4(Unknown800DF6F4_1 *tree) {
    u16 dummy;
    u16 *slot;
    u16 *parentSlot;
    Unknown800DF6F4 *node;
    Unknown800DF6F4 *minNode;
    u16 index;
    u16 left;
    u16 right;

    index = 0;
    slot = &tree->value11958;
    dummy = 0;
    node = 0;
    parentSlot = &dummy;
    while (*slot != 0) {
        parentSlot = slot;
        node = &tree->value00[*slot];
        slot = &node->value04;
    }
    if (node != 0) {
        index = *parentSlot;
        minNode = &tree->value00[index];
        right = minNode->value06;
        left = minNode->value04;
        splice_right_subtree(tree, parentSlot, right, left);
        minNode->value01 = 1;
        minNode->value06 = 0;
        minNode->value04 = 0;
    }
    return index;
}
INCLUDE_ASM("span_1000", func_800DF7D0);
INCLUDE_ASM("span_1000", func_800DFA68);
INCLUDE_ASM("span_1000", func_800E004C);
INCLUDE_ASM("span_1000", func_800E031C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

void func_800E055C(s16 arg0) {
    s32 temp_v0;

    D_80135838 = arg0;
    temp_v0 = func_800E09B0(arg0 & 0xFFFF);
    D_8013583C = temp_v0;
    func_800E1648(temp_v0, &D_80328450);
}

INCLUDE_ASM("span_1000", func_800E05A4);
INCLUDE_ASM("span_1000", func_800E0790);
INCLUDE_ASM("span_1000", func_800E0870);
INCLUDE_ASM("span_1000", func_800E0954);
#include "shared/bt_types.h"
#include "span_1000/code_800E0B00.h"
#include "game/sys_80076000.h"
void func_800E097C(s32 arg0) {
    D_80135834->unk20 = arg0;
}

void func_800E098C(u16 index) {
    MeshCorner *corner = &D_80135834->corners[index];
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
    if (id >= D_80135834->vertexCount) {
        return 0;
    }
    if (id == 0) {
        return 0;
    }
    return &D_80135834->vertices[id];
}

void func_800E0A84(u16 *indices, struct PolygonPoint *out) {
    u16 i;

    for (i = 0; i < 4; i++) {
        struct PolygonPoint *vertex;
        struct PolygonPoint *dst;
        u16 index = indices[i];

        if (index >= D_80135834->vertexCount) {
            vertex = 0;
        } else if (index == 0) {
            vertex = 0;
        } else {
            vertex = &D_80135834->vertices[index];
        }
        dst = &out[i];
        dst->x = vertex->x;
        dst->y = vertex->y;
    }
}

