#ifndef BT_PATH_SEARCH_H
#define BT_PATH_SEARCH_H
#include "shared/bt_types.h"
typedef struct PathSearchNode {
    u8 active, closed;
    u16 parent, left, right;
    f32 cost, total;
    f32 position[2];
} PathSearchNode;
typedef struct PathSearch {
    PathSearchNode nodes[3001];
    u16 root;
} PathSearch;
#endif
