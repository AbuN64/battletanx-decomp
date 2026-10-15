#include "shared/bt_span_1000_code_8011EB90.h"
#include "shared/bt_types.h"
#include "sdk/libultra.h"
#include "game/sys_8011C210.h"

struct Heap;
struct ChainNode;






struct ObjectNode;

struct ObjectOwner;






/* func_8011ECA4 -- dispatches a command code on one object: code 3 appends the argument to the
 * object's node list (tail at 0x40, head at 0x3C), code 4 and code 9 set status fields and forward
 * the literal code to the parent's handler at parent+0x8, code 1 replaces the parent pointer, and
 * anything else just forwards the code unchanged. The sh at 0x1A fixes that field as a halfword and
 * the sw stores fix 0x38/0x48 as words; the calls go through jalr, so the handler is a pointer.
 */






int func_8011ECA4(ObjectNode *self, int cmd, void *arg) {
    switch (cmd) {
    case 3:
        if (self->tail != 0) {
            self->tail->next = (struct ChainNode *)arg;
        } else {
            self->head = (struct ChainNode *)arg;
        }
        self->tail = (struct ChainNode *)arg;
        break;
    case 4:
        self->unk_38 = 1;
        self->unk_48 = 0;
        self->unk_1A = 1;
        if (self->owner != 0) {
            self->owner->unk_8(self->owner, 4, arg);
        }
        break;
    case 9:
        self->unk_48 = 1;
        if (self->owner != 0) {
            self->owner->unk_8(self->owner, 9, arg);
        }
        break;
    case 1:
        self->owner = (ObjectOwner *)arg;
        break;
    default:
        if (self->owner != 0) {
            self->owner->unk_8(self->owner, cmd, arg);
        }
        break;
    }
    return 0;
}
