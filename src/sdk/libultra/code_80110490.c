#include "include_asm.h"

#ifdef NON_MATCHING
#include <ultra64.h>
extern u32 D_80145DA8;
extern s32 D_A4500008;
extern s32 D_A4500010;
extern s32 D_A4500014;

int osAiSetFrequency(s32 arg0) {
    s32 var_a2;
    u32 temp_a1;

    temp_a1 = (u32) (((f32) D_80145DA8 / (f32) arg0) + 0.5f);
    if (temp_a1 < 0x84U) {
        return -1;
    }
    var_a2 = (temp_a1 / 66U) & 0xFF;
    if (var_a2 >= 0x11) {
        var_a2 = 0x10;
    }
    D_A4500010 = temp_a1 - 1;
    D_A4500014 = var_a2 - 1;
    D_A4500008 = 1;
    return (s32) D_80145DA8 / (s32) temp_a1;
}
#else
INCLUDE_ASM("span_1000", osAiSetFrequency);
#endif
INCLUDE_ASM("span_1000", osAiSetNextBuffer);
