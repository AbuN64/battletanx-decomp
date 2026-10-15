#pragma once

typedef struct L L;
typedef struct N N;
struct L {
    char pad[0x10];
    N *head;
};
struct N {
    char pad0[0xC];
    u8 unkC;
    char padD[3];
    s32 unk10;
    char pad14[0x10];
    s32 unk24;
    char pad28[4];
    struct N *next;
};

typedef struct C C;
typedef struct Shape_func_800A72C8 Shape_func_800A72C8;
struct C {
    char pad[0xC];
    unsigned char c;
};

typedef struct Unknown800A76A0 Unknown800A76A0;
struct Unknown800A76A0 {
    unsigned char pad0[0x30];
    float unk30;
    float unk34;
    float unk38;
};

