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
