#ifndef UNBAKE_SPAN_1000_CODE_800A27D0_H
#define UNBAKE_SPAN_1000_CODE_800A27D0_H
#include "shared/bt_types.h"
#include "shared/bt_callback_control.h"
#include "shared/bt_callback_word.h"
extern unsigned char func_800A42C4(CallbackWord * arg0);



struct func_800A2EA4_S1_Shared800A2EA4;
typedef struct func_800A2EA4_S1_Shared800A2EA4 func_800A2EA4_S1_Shared800A2EA4;
typedef struct func_800A2EA4_S2_Shared800A2EA4 func_800A2EA4_S2_Shared800A2EA4;

struct func_800A2EA4_S2_Shared800A2EA4;

struct FuncA3D30Table_Shared800A3D30;
typedef struct FuncA3D30Table_Shared800A3D30 FuncA3D30Table_Shared800A3D30;
typedef struct func_800A3D30_S1_Shared800A3D30 func_800A3D30_S1_Shared800A3D30;
typedef struct func_800A3D30_S2_Shared800A3D30 func_800A3D30_S2_Shared800A3D30;

struct func_800A3D30_S1_Shared800A3D30;

struct func_800A3D30_S2_Shared800A3D30;

struct FuncA3D30Table_Shared800A3D30 {
    s32 value[3];
};


extern int func_auto_800A42B0(int arg0);


extern void func_800A3D30(void *arg0);


extern void func_800A4A64(int arg0, void * arg1, int arg2, int arg3);









struct func_800A3D30_S1_Shared800A3D30 {
    char pad0[0x20];
    s16 unk20;
    char pad20[0x22];
    u16 unk44;
    u16 reserved_46;
    unsigned char data[1];
};
struct func_800A3D30_S2_Shared800A3D30 {
    char pad0[1];
    u8 unk1;
    char pad1[0x18 - 2];
    s32 unk18;
    char pad18[0x504 - 0x1C];
    s32 unk504;
};
struct func_800A2EA4_S1_Shared800A2EA4 {
    s8 unk0;
    char pad0[0x4 - 0x0 - sizeof(s8)];
    f32 unk4;
    f32 unk8;
};
struct func_800A2EA4_S2_Shared800A2EA4 {
    char pad0[0x1C];
    f32 unk1C;
    f32 unk20;
};






#endif
