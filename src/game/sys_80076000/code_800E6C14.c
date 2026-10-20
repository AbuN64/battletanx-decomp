#include "include_asm.h"
#include "shared/bt_ai_team.h"

#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"

/* func_800E6C14 -- stores the context's float at 0x20, as an unsigned integer, into its player's word at 0x14C, and returns -1. */
int func_800E6C14(AiUnitContext *context) {
    context->player->value14C = (u32) context->value20;
    return -1;
}

