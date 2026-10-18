#ifndef SDK_LIBULTRA_H
#define SDK_LIBULTRA_H

#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_80091A60.h"
#pragma once

extern unsigned char D_803C4DC0;

extern int D_803C4D80[];

extern void func_801112A8(int);

#pragma once

typedef struct Ctx Ctx;

typedef struct Header Header;

struct Ctx {
    char pad_0[4];
    int unk_4;
    int unk_8;
    unsigned char unk_C[0x20];
    char pad_2c[0x65 - 0x2C];
    unsigned char unk_65;
};

struct Header {
    int unk_0;
    int unk_4;
    unsigned long long unk_8;
    unsigned long long unk_10;
    unsigned short unk_18;
    unsigned char unk_1A;
    unsigned char unk_1B;
    unsigned short unk_1C;
    unsigned short unk_1E;
};

extern int func_8011609C(Ctx *ctx);

extern int func_80112130(void);

extern int func_80114190(int a, int b, int mode, unsigned char *buf);

extern int func_80113E10(int a, int b, unsigned short page, void *buf, int mode);

extern void func_8011540C(Header *h, unsigned short *a, unsigned short *b);


#pragma once

typedef struct Dest Dest;

typedef struct Src Src;

struct Dest {
    char unk0[8];
    int unk8;
    int unkC;
    char unk10[0xA];
    short unk1A;
};

struct Src {
    int unk0;
    int unk4;
    char unk8[4];
    short unkC;
};

#include "span_1000/code_800A6864.h"
#pragma once

struct Node {
    struct Shape_func_80119B60 *src;
    short h4;
    unsigned char pad6;
    unsigned char b7;
    unsigned char b8;
    unsigned char b9;
    unsigned char padA[6];
};

struct Owner {
    unsigned char pad0[0x60];
    struct Node *nodes;
};

struct Shape_func_80119B60 {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char pad3[9];
    short hC;
};

typedef struct Entry Entry;

typedef struct Shape_func_80119BB4 Shape_func_80119BB4;

struct Entry {
    char unk0[4];
    short unk4;
    unsigned char unk6;
    unsigned char unk7;
    unsigned char unk8;
    unsigned char unk9;
    unsigned char unkA;
    unsigned char unkB;
    float unkC;
};

struct Shape_func_80119BB4 {
    char unk0[0x60];
    struct Entry *entries;
};

struct Heap {
    unsigned char unk_000[0x64];
    struct ChainNode *used;
    struct ChainNode *last;
    struct ChainNode *free;
};

struct ChainNode {
    struct ChainNode *next;
};

struct Shape_func_800A72C8 {
    char pad[0x98];
    N *head;
};

struct B {
    char pad0[0x60];
    struct Elem *unk60;
};

struct Elem {
    char pad0[7];
    unsigned char unk7;
    char pad8[8];
};

struct Shape_func_8011A134 {
    char pad0[0x20];
    struct C *unk20;
    char pad24[0xD];
    unsigned char unk31;
};

#pragma once

struct Accum {
    int unk_00;
    int unk_04;
    int unk_08;
    int unk_0C;
    int unk_10;
};

struct Shape_func_8011B7BC {
    unsigned char unk_00[0x1C];
};

#pragma once

typedef struct Shape_func_8011E3F0 Shape_func_8011E3F0;

struct Shape_func_8011E3F0 {
    char unk0[0x14];
    int unk14;
    int unk18;
};

extern void func_80121434(void);

extern void func_80121400(void);

struct CallbackRecord;

extern void func_8011F7F0(struct CallbackRecord *arg0, int (*arg1)(), int (*arg2)(), int arg3);

extern void func_80120390(void);

extern void func_80120360(void);

#include "shared/bt_types.h"
#pragma once

typedef struct ListNode ListNode;

extern void func_8011C180(struct ListNode *, struct ListNode *);

struct ListNode {
    struct ListNode *prev;
    struct ListNode *next;
};

struct ListNode;

extern s32 D_80145E10;

extern void func_8011DFE0(s32, s32);

#endif
