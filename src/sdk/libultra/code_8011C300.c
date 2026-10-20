#include "include_asm.h"

#include "shared/bt_span_1000_code_8011C2B0.h"
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"

struct SlotTable;

struct Slot;






/* Returns the word at offset 0x28 of the 48-byte slot the owner's current
   index names. The index scaled by 48 fixed the slot size, and the addu with
   the scaled offset as its first operand fixed the access as offset-plus-base
   pointer arithmetic. */




int func_8011C300(SlotTable *owner) {
    Slot *slots;

    slots = owner->slots;
    return ((Slot *)(owner->current * sizeof(Slot) + (char *)slots))->unk28;
}

