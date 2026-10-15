#include "shared/audio_callbacks.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"
#pragma once

struct Unknown800E349C {
    unsigned char unk_000[0x9C];
    int word_09C;
    int word_0A0;
    unsigned char unk_0A4[0x344 - 0xA4];
    short half_344;
    unsigned char unk_346[2];
    unsigned char byte_348;
    unsigned char unk_349;
    unsigned char byte_34A;
};

s32 func_800E52A0();

typedef struct Obj Obj;
struct Obj {
    char pad0[0x34C];
    void *unk_34C;
    char pad350[0x358 - 0x350];
    unsigned char unk_358;
};

