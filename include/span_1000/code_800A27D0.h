#include "shared/bt_types.h"
#include "shared/audio_callbacks.h"
#pragma once
#include "shared/bt_camera.h"

s32 func_800A27D0();
s32 func_800A2A44();
s32 func_800A2C38();

typedef struct A A;
struct A {
    char pad[0xB0];
    float b0;
    char pad2[4];
    float b8;
};
struct Unknown800A42BC {
    int unk_000[4];
    int value;
};

s32 func_800A6AB4();

struct Unknown800A4D1C {
    int unk_000[130];
    int countdown;
};

s32 func_80078634();
void func_80078680(AttachedCamera *camera, Vec3f *offset);

