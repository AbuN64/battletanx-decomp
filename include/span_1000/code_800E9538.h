#include "shared/audio_callbacks.h"
#pragma once

struct ResetState {
    void *team;
    void *owner;
    void *unk8;
    s32 unkC;
    void *stack;
    s32 kind;
    s16 unk18;
    u16 unk1A;
    u8 teamIndex;
    f32 params[8];
    int field40;
    int field44;
};

