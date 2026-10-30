#include "include_asm.h"

#include "shared/bt_span_1000_code_80094704.h"
#include <ultra64.h>















#include "span_1000/code_80094704.h"




/* Extracts and transforms values from data tables, storing the results in global variables. */
ButtonState *func_80096784(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    u16 temp_v0;
    u16 temp_v1_2;
    ButtonBinding *temp_a2;
    s32 *output_value;

    temp_v1 = D_802E17A8[arg0] * 6;
    temp_a2 = (ButtonBinding *)((s8 *)D_802E17D8 + temp_v1);
    temp_v0 = temp_a2->buttons;
    temp_v1_2 = ((ButtonBinding *)((s8 *)D_802E17B8 + temp_v1))->buttons;
    temp_a1 = temp_v0 | ((u32) (temp_v0 & 0xF00) >> 8) | ((temp_v0 & 0xF) << 8);
    temp_a0 = temp_v1_2 | ((u32) (temp_v1_2 & 0xF00) >> 8) | ((temp_v1_2 & 0xF) << 8);
    output_value = &D_802D8144;
    *output_value = temp_a1;
    D_802D8148 = temp_a1 & ~temp_a0;
    D_802D814C = temp_a0 & ~temp_a1;
    ((ButtonState *)(output_value - 1))->mode = temp_a2->mode;
    D_802D8141 = temp_a2->channel;
    return (ButtonState *)(output_value - 1);
}

