#ifndef SHARED_BT_SPAN_1000_CODE_800E21E4_H
#define SHARED_BT_SPAN_1000_CODE_800E21E4_H
#include "shared/bt_types.h"
#include "shared/bt_unit.h"
extern int func_800E2620(CombatUnit *unit);


extern int func_800E2614(CombatUnit *unit);


extern void func_800E3480(int *p);



struct func_800E34B4_S1_Shared800E34B4;
typedef struct func_800E34B4_S1_Shared800E34B4 func_800E34B4_S1_Shared800E34B4;
typedef union func_800E34B4_S1_U8_Shared800E34B4 func_800E34B4_S1_U8_Shared800E34B4;
typedef struct func_800E34B4_S2_Shared800E34B4 func_800E34B4_S2_Shared800E34B4;

union func_800E34B4_S1_U8_Shared800E34B4;

struct func_800E34B4_S2_Shared800E34B4;














union func_800E34B4_S1_U8_Shared800E34B4 {
    u8 v0;
    f32 v1;
};
struct func_800E34B4_S2_Shared800E34B4 {
    char pad0[0x24];
    f32 unk24;
    char pad24[0x4];
    f32 unk2C;
};
struct func_800E34B4_S1_Shared800E34B4 {
    s32 unk0;
    void * unk4;
    func_800E34B4_S1_U8_Shared800E34B4 unk8;
    f32 unkC;
    void * unk10;
    s32 unk14;
};
typedef struct DriveCommand { s32 mode; f32 turn, drive; s8 buttons[5]; } DriveCommand;
#endif
