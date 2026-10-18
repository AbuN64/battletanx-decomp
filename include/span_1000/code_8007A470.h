#include "shared/audio_callbacks.h"
#pragma once

typedef struct S S;
struct S {
    u32 unk0;
    s32 unk4;
    s32 unk8;
    char padC[0x1F8];
    int unk204;
};
extern S *D_801B4ABC;

