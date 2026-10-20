#ifndef UNBAKE_SPAN_1000_CODE_8008F248_H
#define UNBAKE_SPAN_1000_CODE_8008F248_H
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/bt_unit.h"


extern int func_80090F10(void);


extern int func_800907CC(int arg0, int arg1, int arg2, unsigned short arg3, int arg4, int arg5, int arg6, int arg7, signed char arg8);





struct HandlerEffect;
typedef struct HandlerEffect HandlerEffect;
typedef struct HandlerReply HandlerReply;
typedef struct HandlerSender HandlerSender;

struct HandlerReply;

struct HandlerSender;







struct HandlerEffect {
    EffectHeader header;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 unk20;
    u8 unk21;
    u8 unk22;
    u8 unk23;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};
struct HandlerReply {
    s32 code;
    s32 value;
};
struct HandlerSender {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    CombatUnit *unit;
};
extern void func_800916B8(HandlerEffect *arg0, HandlerSender *arg1, int arg2, void *arg3, HandlerReply *arg4);
#endif
