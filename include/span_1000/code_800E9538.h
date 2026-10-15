#include "shared/audio_callbacks.h"
#pragma once

struct ResetState {
    char pad[0x8];
    s32 unk8;
    s32 unkC;
    char pad10[0x8];
    s16 unk18;
    u16 unk1A;
    char pad1C[0x24];
    int field40;
    int field44;
};

