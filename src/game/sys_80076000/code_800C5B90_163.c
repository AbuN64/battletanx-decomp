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
