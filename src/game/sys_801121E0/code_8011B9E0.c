#include "include_asm.h"

#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8011B9E0.h"
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"

struct Command;

struct CommandQueueOwner;






/* Builds a 16-byte command whose only set field is the 0x11 type code and
   hands it, with the queue at offset 0x48 of the owner, to the queue
   submitter. The sh fixed the type field as a short and the frame's 16-byte
   local slot fixed the command size. */







void func_8011B9E0(CommandQueueOwner *owner) {
    Command command;

    command.type = 0x11;
    func_8011B60C(&owner->queue, &command, 0);
}

