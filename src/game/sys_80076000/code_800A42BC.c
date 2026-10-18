#include "include_asm.h"

#include "shared/bt_span_1000_code_800A27D0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"

struct Unknown800A42BC;



/* func_800A42BC -- writes the word at 0x010.
 *
 * The write half of the pair whose read half is func_auto_800A42B0, twelve bytes earlier. The store
 * sits in the return's delay slot, so the function is two words with no body ahead of it.
 */



void func_800A42BC(struct Unknown800A42BC *self, int value) {
    self->value = value;
}

