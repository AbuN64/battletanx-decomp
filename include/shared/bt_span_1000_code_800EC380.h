#ifndef UNBAKE_SPAN_1000_CODE_800EC380_H
#define UNBAKE_SPAN_1000_CODE_800EC380_H
#include "shared/bt_types.h"










struct func_800ED810_S1_Shared800ED810;
typedef struct func_800ED810_S1_Shared800ED810 func_800ED810_S1_Shared800ED810;



struct func_800ED810_S1_Shared800ED810 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x14 - 0xC - sizeof(f32)];
    f32 unk14;
    char pad14[0x1C - 0x14 - sizeof(f32)];
    u8 unk1C;
};
/* Header shared by demo loading, playback and frame interpolation. */
typedef struct DemoHeader {
    s32 frameCount, objectCount, value08, trailerCount, value10, value14;
} DemoHeader;
typedef struct DemoEvent {
    s16 frame;
    u8 kind, value;
    s32 x, z;
} DemoEvent;
#endif

