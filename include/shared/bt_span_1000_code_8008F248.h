#ifndef SHARED_BT_SPAN_1000_CODE_8008F248_H
#define SHARED_BT_SPAN_1000_CODE_8008F248_H
#include <ultra64.h>
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/bt_unit.h"


extern int func_80090F10(void);


extern s32 func_800907CC(s32 arg0, s32 arg1, s32 arg2, unsigned short arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, signed char arg8);





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
extern void func_800916B8(HandlerEffect *arg0, HandlerSender *arg1, s32 arg2, void *arg3, HandlerReply *arg4);
#endif
