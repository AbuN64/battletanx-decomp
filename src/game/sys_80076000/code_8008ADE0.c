#include "include_asm.h"

#include <ultra64.h>
s32 func_8008ADE0(s32 arg0) {
    switch (arg0) {
    case 2:
    case 4:
    case 12:
    case 13:
    case 17:
    case 24:
    case 27:
    case 29:
    case 30:
    case 34:
        return 0;
    default:
        return 1;
    }
}

INCLUDE_DATA("span_1000", D_800719E4);
INCLUDE_ASM("span_1000", func_8008AE18);
INCLUDE_ASM("span_1000", func_8008AFE4);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B030(EffectSlot *node)
{
    s16 oldHead;

    oldHead = D_802C13E0;
    D_802C13E0 = node - D_802C3A30;
    node->header.next = oldHead;
}

INCLUDE_ASM("span_1000", func_8008B080);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B1F0(void) {
    s16 index;
    s32 next;

    for (index = D_802C13E2; index != -1; index = next) {
        next = D_802C3A30[index].header.next;
        D_802C3A30[index].header.next = D_802C13F4;
        D_802C13F4 = index;
        D_802C13E2 = next;
    }
    for (index = D_802C13F6; index != -1; index = next) {
        next = D_802C3A30[index].header.next;
        D_802C3A30[index].header.next = D_802C3A28;
        D_802C3A28 = index;
        D_802C13F6 = next;
    }
}

INCLUDE_ASM("span_1000", func_8008B2C8);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"



void func_8008B48C(void)
{
    s32 index;
    EffectSlot *effect;

    for (index = D_802C13F4; index != -1; index = D_802C3A30[index].header.next) {
        effect = &D_802C3A30[index];
        if (D_802C3800[effect->header.kind].draw) {
            D_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_802C3A28; index != -1; index = D_802C3A30[index].header.next) {
        effect = &D_802C3A30[index];
        if (D_802C3800[effect->header.kind].draw) {
            D_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_802C13E2; index != -1; index = D_802C3A30[index].header.next) {
        effect = &D_802C3A30[index];
        if (D_802C3800[effect->header.kind].draw) {
            D_802C3800[effect->header.kind].draw(effect);
        }
    }
    for (index = D_802C13F6; index != -1; index = D_802C3A30[index].header.next) {
        effect = &D_802C3A30[index];
        if (D_802C3800[effect->header.kind].draw) {
            D_802C3800[effect->header.kind].draw(effect);
        }
    }
}

INCLUDE_ASM("span_1000", func_8008B66C);
INCLUDE_ASM("span_1000", func_8008B89C);
INCLUDE_ASM("span_1000", func_8008B9E8);
INCLUDE_ASM("span_1000", func_8008C09C);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/audio_callbacks.h"
#include "span_1000/code_8008B48C.h"



              /* size 0x0 */


void func_8008C2DC(s32 arg0) {
    D_802C13F0 = arg0;
}

INCLUDE_ASM("span_1000", func_8008C2EC);
INCLUDE_ASM("span_1000", func_8008C6F0);
INCLUDE_ASM("span_1000", func_8008C8D0);
INCLUDE_ASM("span_1000", func_8008C9E4);
INCLUDE_ASM("span_1000", func_8008CDB0);
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8008CE74(Unknown8008CE9C *effect, Unknown8010DAA0_1 *contact, s32 unused, s32 *result)
{
    switch (contact->value08) {
    case 2:
    case 0x16:
        *result = 0;
        effect->value1C = 0;
        break;
    }
}
void func_8008CE9C(Unknown8008CE9C *effect, Unknown8010DAA0_1 *contact, s32 event, s32 data, s32 *result)
{
    if (event != 0) {
        return;
    }
    switch (contact->value08) {
    case 2:
    case 0x16:
        *result = 0;
        effect->value1C = 0;
        break;
    }
}
INCLUDE_ASM("span_1000", func_8008CECC);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008011C.h"
s32 func_8008CED0(void)
{
    u8 *context;
    u8 *table;
    u8 *group;
    u8 *entry;
    context = func_800821C0();
    table = *(u8 **)(context + 0x570) + D_802D5A36 * 0xC;
    group = *(u8 **)(context + 0x574) + *(u16 *)(table + 2) * 4;
    entry = *(u8 **)(context + 0x578) + *(u16 *)(group + 2) * 0xC;
    return *(s32 *)(context + 0x580) + *(s32 *)(entry + 4) * 8;
}

INCLUDE_ASM("span_1000", func_8008CF40);
INCLUDE_ASM("span_1000", func_8008D588);
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

s32 func_8008D660(f32 *pos, f32 *pairA, f32 *pairB, s16 value28, u8 value2D,
                                u8 value2C, u16 value2E, u16 value30, s32 value34, u8 value32)
{
    Unknown8008D660 *effect;

    effect = func_8008AD10(1, 2, sizeof(Unknown8008D660));
    if (effect == 0) {
        return -1;
    }
    effect->value32 = value32;
    effect->value2E = value2E;
    effect->value30 = value30;
    effect->value0C = pos[0];
    effect->value10 = pos[1];
    effect->value14 = pos[2];
    effect->value1C = pairA[1];
    effect->value18 = pairA[0];
    effect->value24 = pairB[1];
    effect->value20 = pairB[0];
    effect->value2C = value2C;
    effect->value28 = value28;
    effect->value2A = 0x70;
    effect->value2D = value2D;
    effect->value34 = value34;
    return 0;
}
INCLUDE_ASM("span_1000", func_8008D768);
INCLUDE_ASM("span_1000", func_8008DDCC);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A7ABC.h"
#include "span_1000/code_8008F4EC.h"









EffectKind16 *func_8008DF2C(Vec3f *pos, f32 speed, u16 angle, s8 arg3, u8 arg4, u16 arg5, u8 useLocalPoints,
                                   Vec3f *start, Vec3f *end, s32 arg9, s16 arg10)
{
    EffectMatrix16 rotation;
    EffectMatrix16 inverse;
    Vec3f startOffset;
    Vec3f endOffset;
    EffectKind16 *e;

    e = func_8008AD10(1, 0x16, 0x48);
    if (e == 0) {
        return 0;
    }
    e->value20 = arg5;
    e->pos.x = pos->x;
    e->pos.y = pos->y;
    e->pos.z = pos->z;
    if (arg10 != 0) {
        f32 divisor = D_80071BAC;

        if (arg10 < 0) {
            divisor = D_80071BB0;
        }
        e->speed = speed / divisor;
    } else {
        e->speed = speed;
    }
    e->value25 = arg4;
    e->angle = angle;
    e->value22 = arg10 ? 8000 : 400;
    e->value26 = arg3;
    e->value27 = 1;
    e->value24 = 1;
    e->value1E = 0;
    e->value40 = arg9;
    e->value44 = arg10;
    e->value46 = arg10 != 0;
    if (useLocalPoints) {
        rotation = D_80071B6C;
        inverse = D_80071B6C;
        func_800A82B8(&rotation, &inverse, ~(e->value1E * 3));
        func_800A841C(&inverse, &rotation, e->angle);
        func_800A81F0(rotation.m, inverse.m);
        startOffset.x = start->x - e->pos.x;
        startOffset.y = start->y - e->pos.y;
        startOffset.z = start->z - e->pos.z;
        endOffset.x = end->x - e->pos.x;
        endOffset.y = end->y - e->pos.y;
        endOffset.z = end->z - e->pos.z;
        func_800A7BE8(&inverse, &startOffset, &e->localStart);
        func_800A7BE8(&inverse, &endOffset, &e->localEnd);
    }
    return e;
}

void func_8008E1BC(Unknown8008E1BC *record, s32 unused1, s32 unused2, void *target)
{
    Unknown8008E1BC_1 matrix;

    func_800A76A0(target, record->value0C);
    func_800A82B8(target, &matrix, ~(record->value1E * 3) & 0xFFFF);
    func_800A841C(&matrix, target, record->value1C);
}
void func_8008E228(Unknown8008E1BC *record, s32 unused, s32 enabled,
                                       s32 unused3, void *target)
{
    Unknown8008E1BC_1 matrix;

    if (enabled == 1) {
        func_800A76A0(target, record->value0C);
        func_800A82B8(target, &matrix, ~(record->value1E * 3) & 0xFFFF);
        func_800A841C(&matrix, target, record->value1C);
    }
}
INCLUDE_ASM("span_1000", func_8008E29C);
INCLUDE_ASM("span_1000", func_8008E480);
INCLUDE_ASM("span_1000", func_8008EBA0);
