#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800E52A0);
INCLUDE_ASM("span_1000", func_800E5328);
#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E5328.h"
#include "game/sys_80076000.h"

struct Rec;



/* Clears five bytes and one word of a record: the bytes at 0x4..0x7, the word at
 * 0x8, and last the byte at 0x3.
 * sb fixes 0x3..0x7 as single bytes and sw fixes 0x8 as a 32-bit field. */



void func_800E566C(struct Rec *r) {
    r->b = 0;
    r->c = 0;
    r->d = 0;
    r->e = 0;
    r->f = 0;
    r->a = 0;
}

void func_800E5688(UnitPairing *pair, u8 first, u8 second, u8 connected)
{
    pair->first = first;
    pair->second = second;
    pair->connected = connected;
    pair->flags[0] = 0;
    pair->flags[1] = 0;
    pair->flags[2] = 0;
    pair->flags[3] = 0;
    pair->value = 0;
    pair->state = 0;
}

INCLUDE_ASM("span_1000", func_800E56B0);
INCLUDE_ASM("span_1000", func_800E5A70);
INCLUDE_ASM("span_1000", func_800E5AB0);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"
#include "shared/bt_unit.h"



static inline void clear_unit_pairing(UnitPairing *p) {
    p->flags[0] = 0;
    p->flags[1] = 0;
    p->flags[2] = 0;
    p->flags[3] = 0;
    p->value = 0;
    p->state = 0;
}
static inline void restart_paired_unit(CombatUnit *unit) {
    func_800E986C(unit, 0x1002, 1.0f);
    unit->startTick = func_8007B1DC();
}
void func_800E5BA0(s32 arg0, s32 arg1) {
    s16 i;
    u16 j;

    if (arg0 != 0) {
        i = 0;
        do {
            CombatUnit *unit = func_800A03B8(i);
            if (unit->visible != 0) {
                unit->value34A = 1;
            }
            i++;
        } while (i < 20);
    }
    if (arg1 != 0) {
        i = 0;
        do {
            func_800E986C(func_800A03B8(i), 0x1002, 0);
            i++;
        } while (i < 20);
    }
    j = 0;
    if (D_8033B448 != 0) {
        do {
            UnitPairing *p = &D_8033AAE8[j];
            if (p->connected != 0) {
                if (arg0 != 0) {
                    func_800E56B0(p);
                }
            } else if (arg1 != 0) {
                CombatUnit *a = func_800A03B8(p->first);
                CombatUnit *b = func_800A03B8(p->second);
                if (a->visible == 0) {
                    clear_unit_pairing(p);
                } else if (((a->flags & 4) && (b->flags & 4)) ||
                           (func_800E3470(a) != 0 && func_800E3470(b) != 0)) {
                    clear_unit_pairing(p);
                    p->flags[0] = 1;
                    p->flags[3] = 1;
                } else {
                    func_800E56B0(p);
                    if (p->flags[1] != 0) {
                        restart_paired_unit(a);
                        restart_paired_unit(b);
                    }
                }
            }
            j++;
        } while (j < D_8033B448);
    }
}

INCLUDE_ASM("span_1000", func_800E5DE4);
#include "shared/bt_unit.h"
#include "game/sys_80076000.h"
void func_800E5F30(CombatUnit *unit)
{
    f32 point[2];
    s32 flag;
    point[1] = unit->position[0];
    flag = 1;
    point[0] = unit->position[2];
    func_800E5FA8(unit, &unit->state, point, &flag,
        func_800E9880(unit, 0x1004), func_800E9880(unit, 0x1005));
}

INCLUDE_ASM("span_1000", func_800E5FA8);
#include "shared/bt_unit.h"
#include "game/sys_80076000.h"
void func_800E6340(CombatUnit *unit, s32 *flags)
{
    f32 point[2];
    point[1] = unit->position[0];
    point[0] = unit->position[2];
    func_800E5FA8(unit, &unit->state, point, flags,
        func_800E9880(unit, 0x1004), func_800E9880(unit, 0x1005));
    func_800E5FA8(unit, &unit->secondaryState, point, 0,
        func_800E9880(unit, 0x1006), func_800E9880(unit, 0x1007));
}

INCLUDE_ASM("span_1000", func_800E63F4);
#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "span_1000/code_8008F4EC.h"

EffectKind11 *func_800E66BC(u16 id, AiTeam *arg)
{
    EffectKind11 *effect;

    if (func_800EC644() != 0) {
        return 0;
    }
    effect = func_8008AD10(1, 0xB, 0x10);
    if (effect == 0) {
        return 0;
    }
    func_800E5328(id, arg);
    D_8033B44A = 1;
    D_8033B44C = 0;
    D_8033AAE0 = 0;
    effect->active = 1;
    return effect;
}

INCLUDE_ASM("span_1000", func_800E6754);
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_800E9538.h"
s32 func_800E6970(struct ResetState *context)
{
    PlayerRecord *player = context->owner;
    func_800E3980(context->unkC, context->unk18, player->objectiveId, 1);
    return -1;
}

#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

s32 func_800E69A4(struct ResetState *arg0) {
    func_800E3980(arg0->unkC, arg0->unk18, arg0->unk1A, 1);
    return -1;
}

INCLUDE_ASM("span_1000", func_800E69D4);
INCLUDE_ASM("span_1000", func_800E6A30);
#include "shared/bt_span_1000_code_800E5328.h"

s32 func_800E6A70(void) {
    return -1;
}

INCLUDE_ASM("span_1000", func_800E6A78);
INCLUDE_ASM("span_1000", func_800E6AAC);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
#include "span_1000/code_800E9538.h"

s32 func_800E6B14(struct ResetState *arg0) {
    func_800E3554(arg0->unkC + 0x18, arg0->unk18);
    return -1;
}

INCLUDE_ASM("span_1000", func_800E6B3C);
INCLUDE_ASM("span_1000", func_800E6BBC);
INCLUDE_ASM("span_1000", func_800E6BF0);
