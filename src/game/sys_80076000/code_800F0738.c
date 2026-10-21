#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_unit.h"
#include "span_1000/code_8008F4EC.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
static inline void release_gate(EffectKind21 *effect)
{
    SceneObject *object = &func_800821C0()->objects[effect->slot];
    if ((object->flags & 15) == 15) object->flags &= 240;
    func_8008B89C(effect);
}
void func_800F0738(EffectKind21 *effect, void *sender, void *input, void *output)
{
    struct QueryResult *message = sender;
    s32 *result = output;
    CombatUnit *unit;
    s32 now;
    switch (message->kind) {
    case 2:
    case 12:
    case 22:
    case 34:
        if (effect->flags & 4) break;
        effect->flags |= 2;
        release_gate(effect);
        *result = 0;
        break;
    case 0:
        if (effect->hits != 0) {
            unit = message->object;
            unit->value3D0 -= 6.0;
            if (effect->hits & 1) unit->value3D4 -= 2.0f;
            else unit->value3D4 += 2.0f;
            effect->hits--;
            if (effect->hits == 0) func_80106CCC(effect->motion, 0x10);
            *result = 0;
            break;
        }
        if (effect->count == 0) {
            release_gate(effect);
            effect->flags |= 4;
            func_800821C0()->objects[effect->slot].flags &= 15;
            now = D_801B4AA8;
            if (effect->lastTick + 10 < now) {
                *result = 5;
                effect->lastTick = now;
                break;
            }
        } else {
            now = D_801B4AA8;
            if (effect->lastTick + 10 < now) {
                *result = 4;
                effect->lastTick = now;
                break;
            }
        }
        *result = 1;
        break;
    default:
        *result = 1;
        break;
    }
}

INCLUDE_RODATA("span_1000", D_80074D20);
INCLUDE_DATA("span_1000", D_80074D28);
INCLUDE_ASM("span_1000", func_800F0958);
INCLUDE_ASM("span_1000", func_800F09D0);
INCLUDE_ASM("span_1000", func_800F0B60);
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
void func_800F0CF0(EffectKind21 *effect, void *sender, u32 message, void *input, PositionReport *report)
{
    SceneObject *object;
    switch (message) {
    case 0:
        func_800F0738(effect, sender, input, report);
        return;
    case 2:
        if (!(effect->flags & 4)) {
            report->valid = 1;
            object = &func_800821C0()->objects[effect->slot];
            report->x = object->x;
            report->z = object->z;
        }
        return;
    case 3:
        func_800F09D0(effect, 0, input, 0);
        return;
    case 7:
        func_800F0B60(effect, sender, input);
        break;
    }
}

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800F0DE0(EffectKind0C *effect, s32 *state)
{
    f32 remaining = effect->remaining - D_80074D20;
    s32 sound;

    effect->remaining = remaining;
    if (remaining <= 0.0f) {
        sound = effect->sound;
        if (sound != -1) {
            func_800796F0(sound, 0);
        }
        *state = 2;
    }
}

INCLUDE_ASM("span_1000", func_800F0E4C);
INCLUDE_ASM("span_1000", func_800F0FD8);
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "span_1000/code_8008F4EC.h"





s32 func_800F15A0(f32 *pos, s16 value18, s8 value1A, s16 value1C, s32 value20, s32 value24,
                         s32 value28, s32 value2C)
{
    EffectKind0D *effect;

    effect = func_8008AD10(1, 0xD, sizeof(EffectKind0D));
    if (effect == 0) {
        return -1;
    }
    effect->value0C = pos[0];
    effect->value10 = pos[1];
    effect->value14 = pos[2];
    effect->value18 = value18;
    effect->value1A = value1A;
    effect->value1C = value1C;
    effect->value20 = value20;
    effect->value24 = value24;
    effect->value28 = value28;
    effect->value2C = value2C;
    return 1;
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800F1670(Unknown800F1670 *spawn, s32 *state)
{
    if (spawn->value2C == 0) {
        func_800F0FD8(spawn->value0C, spawn->value18, spawn->value1A, spawn->value1C, spawn->value20,
                      spawn->value24, spawn->value28, 1);
        *state = 2;
        return;
    }
    spawn->value2C--;
}
#include "game/sys_80076000.h"
void func_800F16E4(EffectKind23 *effect, s32 *state)
{
    effect->age--;
    if (effect->age == 0) {
        *state = 2;
    }
}

INCLUDE_ASM("span_1000", func_800F1708);
INCLUDE_ASM("span_1000", func_800F195C);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
void func_800F1BB4(f32 *origin, u8 byte0, u8 byte1, u8 byte2) {
    f32 range = D_80074DE0;
    f32 offset = D_80074DE4;
    f32 position[3];
    s32 i;
    for (i = 0; i < 15; i++) {
        position[0] = origin[0] + func_800F3880(range) - offset;
        position[1] = origin[1] + func_800F3880(range) - offset;
        position[2] = origin[2] + func_800F3880(range) - offset;
        func_800F195C(origin, position, 12, 0, byte0, byte1, byte2);
    }
}

INCLUDE_ASM("span_1000", func_800F1CA0);
s32 func_800F1DC4(Unknown800F1DC4 *a, Unknown800F1DC4 *b, s32 arg2, s32 arg3, u8 arg4)
{
    Unknown800F1DC4_1 *effect = func_8008AD10(1, 0x24, 0x28);

    if (effect == 0) {
        return -1;
    }
    effect->value0C = *a;
    effect->value18 = *b;
    effect->value24 = arg2;
    effect->value25 = arg3;
    effect->value26 = arg4;
    return 0;
}
#include "shared/bt_span_1000_code_800F29F0.h"

void func_800F1E74(Unknown800F1DC4 *origin) {
    Unknown800F1DC4 velocity;
    Unknown800F1E74 *effect;
    f64 scale;
    f32 sinPitch;
    u16 yaw;
    u16 pitch;
    s8 red;
    s8 green;
    s8 blue;
    s32 i;

    scale = D_80074DF8;
    for (i = 1; i < 7; i++) {
        yaw = func_800F38F4() % 65535;
        pitch = func_800F38F4() & 0x1FFF;
        sinPitch = func_800F3AE0(pitch);
        velocity.value00 = sinPitch * scale * func_800F3AE0(yaw);
        velocity.value04 = func_800F3B40(pitch) * scale;
        velocity.value08 = sinPitch * scale * func_800F3B40(yaw);
        red = (i & 1) ? -6 : 0;
        green = (i & 2) ? -6 : 0;
        blue = (i & 4) ? -6 : 0;
        effect = func_8008AD10(1, 0x24, 0x28);
        if (effect != 0) {
            effect->value0C = *origin;
            effect->value18 = velocity;
            effect->value24[0] = red;
            effect->value24[1] = green;
            effect->value24[2] = blue;
        }
    }
}
