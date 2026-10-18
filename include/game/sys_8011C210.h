#ifndef GAME_SYS_8011C210_H
#define GAME_SYS_8011C210_H

#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_80091A60.h"
#pragma once

extern void func_8011B60C(unsigned char *, short *, int);

#include "shared/bt_common_types_d507c48987bb.h"
#pragma once

typedef struct Command Command;
typedef struct CommandQueueOwner CommandQueueOwner;
struct Command {
    short type;
    char pad2[0xE];
};
struct CommandQueueOwner {
    char pad0[0x48];
    struct CommandQueue queue;
};

#pragma once

extern unsigned char D_803C75C8[];

#pragma once

typedef struct SlotTable SlotTable;
typedef struct Slot Slot;
struct SlotTable {
    char pad0[0x3C];
    int current;
    struct Slot *slots;
};
struct Slot {
    char pad0[0x28];
    int unk28;
    char pad2C[0x4];
};

#include "sdk/libultra.h"
#pragma once

typedef struct ObjectNode ObjectNode;
typedef struct ObjectOwner ObjectOwner;
struct ObjectNode {
    struct ObjectOwner *owner;
    char pad04[0x1A - 0x04];
    short unk_1A;
    char pad1C[0x38 - 0x1C];
    int unk_38;
    struct ChainNode *head;
    struct ChainNode *tail;
    char pad44[0x48 - 0x44];
    int unk_48;
};
struct ObjectOwner {
    char pad0[0x8];
    void (*unk_8)(struct ObjectOwner *, int, void *);
};

#pragma once

struct CallbackRecord {
    int unk0;
    int (*unk4)();
    int (*unk8)();
    short unkC;
    short unkE;
    int unk10;
};

#endif
