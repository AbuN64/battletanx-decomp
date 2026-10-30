#include "include_asm.h"

#include "shared/bt_span_1000_code_8011C150.h"
#include <ultra64.h>
#include "sdk/libultra.h"
#include "shared/bt_span_1000_code_8011D6D0.h"

struct ListNode;




/* func_8011C150 -- unlinks one node from a doubly linked list, skipping either update when that
 * neighbour is absent. The two words the cartridge loads from the node are its previous and next
 * pointers, and each neighbour's opposite link is written back through the other.
 */


void func_8011C150(ListNode *node) {
    if (node->prev != 0) {
        node->prev->next = node->next;
    }
    if (node->next != 0) {
        node->next->prev = node->prev;
    }
}

struct ListNode;




/* Links a node in ahead of a list node: the new node takes the list node's
 * predecessor as its own and becomes that predecessor's successor.
 * Both links are words, at 0x0 for the predecessor and 0x4 for the successor. The
 * predecessor is read twice because writing the new node's own 0x0 may alias it, which
 * is what the second lw of 0x0($a1) says. */



void func_8011C180(ListNode *node, ListNode *list) {
    node->prev = list->prev;
    node->next = list;
    if (list->prev != 0) {
        list->prev->next = node;
    }
    list->prev = node;
}

void func_8011C1A4(s32 arg0) {
    if (D_80145E10 != 0) {
        func_8011D6D0(arg0);
        D_80145E10 = 0;
    }
}

void func_8011C1DC(s32 arg0, s32 arg1) {
    if (D_80145E10 == 0) {
        D_80145E10 = arg0;
        func_8011DFE0(arg0, arg1);
    }
}

