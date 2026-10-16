#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#pragma once
struct CombatUnit;

extern void *func_8008AD10(u8 group, s32 kind, s32 size);
extern int func_80106D18(int, int, int, int, int, int, int, int, int);

extern unsigned char D_auto_802D5BA0[];
extern unsigned char D_auto_802D5BB7;

s32 func_8008B89C();
u8 func_8009FBE4(struct CombatUnit *unit);
s32 func_800E3460();
s32 func_8008B89C();
u8 func_8009FBE4(struct CombatUnit *unit);
extern s32 func_800E3460(const u8 *arg0);

typedef struct Unknown800917C4 Unknown800917C4;
struct Unknown800917C4 {
    unsigned char pad0[8];
    unsigned short unk8;
    unsigned short unkA;
};

typedef struct E E;
struct E {
    char pad[8];
    unsigned short a;
    unsigned short b;
    char pad2[4];
};

