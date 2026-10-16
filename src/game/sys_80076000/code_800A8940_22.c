#include "sdk/libultra.h"
#include "game/sys_80076000.h"

void func_800AB65C(ListNode *node)
{
    if (node->prev != 0) node->prev->next = node->next;
    if (node->next != 0) node->next->prev = node->prev;
    node->next = 0;
    node->prev = 0;
}
