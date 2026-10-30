#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "span_1000/code_8008F4EC.h"

static inline s32 spawn_effect_kind_08(Vec3f *position, Vec3f *direction, s16 arg2, s16 arg3, u16 arg4, f32 scale, s32 arg6,
                         u8 arg7, f32 arg8, s32 arg9)
{
    EffectKind08 *effect;

    effect = func_8008AD10(1, 8, 0x40);
    if (effect == 0) {
        return -1;
    }
    effect->position = *position;
    effect->velocity = *direction;
    effect->scale = scale;
    effect->value24 = arg2;
    effect->value26 = arg3;
    effect->value28 = arg4;
    effect->value30 = arg6;
    effect->value34 = arg7;
    effect->value38 = arg9;
    effect->value3C = arg8;
    effect->velocity.x *= scale;
    effect->velocity.y *= scale;
    effect->velocity.z *= scale;
    return 0;
}
void func_8008F040(Vec3f *position, s32 count, f32 scale, s32 arg3) {
    Vec3f dir;
    f32 horizontal;
    u16 yaw;
    u16 pitch;
    u16 rx;
    u16 ry;
    u16 rz;
    s32 i;

    for (i = 0; i < count; i++) {
        yaw = func_800F38F4() % 0xFFFF;
        pitch = func_800F38F4() & 0x1FFF;
        horizontal = func_800F3AE0(pitch);
        dir.x = horizontal * 9.0f * func_800F3B40(yaw);
        dir.y = func_800F3B40(pitch) * 9.0f;
        dir.z = horizontal * 9.0f * func_800F3AE0(yaw);
        rx = func_800F38F4() % 0xFFFF;
        ry = func_800F38F4() % 0xFFFF;
        rz = func_800F38F4() % 0xFFFF;
        spawn_effect_kind_08(position, &dir, rx, ry, rz, scale, arg3, 0, 1.0f, 0);
    }
}

INCLUDE_RODATA("span_1000", D_80071C58);
INCLUDE_RODATA("span_1000", D_80071C64);
INCLUDE_RODATA("span_1000", D_80071C68);
INCLUDE_RODATA("span_1000", D_80071C6C);
INCLUDE_DATA("span_1000", D_80071C70);
INCLUDE_ASM("span_1000", func_8008F248);
#include "game/sys_80076000.h"
void func_8008F4EC(f32 *max, f32 *min, FrameVertex *vertices, s32 count) {
    s32 i;

    for (i = 0; i < count; i++) {
        if (vertices[i].ob[0] < min[0]) {
            min[0] = vertices[i].ob[0];
        }
        if (vertices[i].ob[1] < min[1]) {
            min[1] = vertices[i].ob[1];
        }
        if (vertices[i].ob[2] < min[2]) {
            min[2] = vertices[i].ob[2];
        }
        if (max[0] < vertices[i].ob[0]) {
            max[0] = vertices[i].ob[0];
        }
        if (max[1] < vertices[i].ob[1]) {
            max[1] = vertices[i].ob[1];
        }
        if (max[2] < vertices[i].ob[2]) {
            max[2] = vertices[i].ob[2];
        }
    }
}

INCLUDE_ASM("span_1000", func_8008F5D4);
INCLUDE_ASM("span_1000", func_8008F6F4);
#include <ultra64.h>
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8008FB1C(Unknown8008FB1C *d, s32 *state) {
    u8 flags;

    if (d->value40 & 8) {
        if (!(func_800F38F4() & 0xF)) {
            d->value24[0] = -d->value24[0];
            d->value24[2] = -d->value24[2];
        }
    } else {
        d->value24[1] -= D_80071CDC;
    }
    flags = d->value40;
    d->value0C[0] += d->value24[0];
    d->value0C[1] += d->value24[1];
    d->value0C[2] += d->value24[2];
    if (flags & 2) {
        d->value40 = flags ^= 4;
        if (flags & 4) {
            func_800ED8C0(d->value0C, (flags & 0x10) ? 0x19 : 0x15);
        }
    }
    if ((!(d->value24[1] < 0.0f) || (!(d->value40 & 1) && ((d->value40 & 0xA) || (func_800F38F4() & 7)))) && (d->value0C[1] > 0.0f)) {
        d->value30[0] += d->value36[0];
        d->value30[1] += d->value36[1];
        d->value30[2] += d->value36[2];
        return;
    }
    *state = 2;
}
#include "shared/bt_span_1000_code_8008011C.h"

void func_8008FC9C(Unknown8008FC9C_1 *obj) {
    Unknown8008FC9C xf = D_80071C04;
    s32 session;

    if (obj->value44 != 0) {
        session = func_800821C0();
        func_800A86E4(&xf, obj->value18, obj->value0C, obj->value34, obj->value32, obj->value30);
        func_80085978(session, obj->value44, &xf, obj->value0C, obj->value3C);
    }
}
INCLUDE_ASM("span_1000", func_8008FD6C);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"

void func_800902BC(f32 *arg0, s32 count) {
    s32 i;
    s32 angleX;
    s32 angleY;
    s32 angleZ;
    s32 spin;

    for (i = 0; i < count; i++) {
        angleX = (func_800F38F4() % 1280) & 0xFFFF;
        angleY = (func_800F38F4() % 1280) & 0xFFFF;
        angleZ = (func_800F38F4() % 1280) & 0xFFFF;
        spin = (func_800F38F4() % 65535) & 0xFFFF;
        func_8008F6F4(arg0, 0, 0, 0, angleX, angleY, angleZ, spin, 0x2000, 0,
                          D_80071CE8, 0, 0, 0x12);
    }
}

INCLUDE_ASM("span_1000", func_80090428);
INCLUDE_ASM("span_1000", func_800905D8);
#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "span_1000/code_8008F4EC.h"

/* func_8008AD10: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
/* func_80106D18: types.abi.declared: reuse existing C; propagated semantic conflicts remain named; types.abi.draft_words: complete O32 argument slots, including caller stack operands */

/* types.abi.stack_argument: func_80106D18: stack16: all mapped call sites prove the operand */
/* types.abi.stack_argument: func_80106D18: stack20: all mapped call sites prove the operand */
/* types.abi.stack_argument: func_80106D18: stack24: all mapped call sites prove the operand */
                                                  /* size = 0x50 */

s32 func_800907CC(s32 arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s8 arg8) {
    EffectKind12 *effect;

    effect = func_8008AD10(0, 0x12, 0x20);
    if (effect == 0) {
        return -1;
    }
    effect->value14 = arg0;
    effect->value1D = arg8;
    effect->value18 = func_80106D18((s32) effect, arg1, arg2, arg4, arg5, arg6, arg7, (arg8 & 1) ? 0x20 : 0xF95F, arg3 & 0xFFFF);
    effect->value0C = arg1;
    effect->value10 = arg2;
    effect->value1C = 0;
    return 0;
}

void func_800908CC(Unknown800908CC *effect, void *unused1, void *unused2, Unknown800A0908_1 *report)
{
    report->value00 = 1;
    report->value08 = effect->value0C;
    report->value04 = effect->value10;
}
void func_800908F0(Unknown800908F0 *entity, s32 unused, f32 *target) {
    f32 dx = target[1] - (f32)entity->value0C;
    f32 dz = target[0] - (f32)entity->value10;

    if ((dx != 0.0f) | (dz != 0.0f)) {
        entity->value1C = 1;
        if (-dx < 0.0f) {
            entity->value1E = -func_800F3BE4(-dz / sqrtf(dx * dx + dz * dz));
        } else {
            entity->value1E = func_800F3BE4(-dz / sqrtf(dx * dx + dz * dz));
        }
    }
    entity->value1D |= 8;
    func_8008B89C(entity);
}
void func_80090A0C(Unknown80090A0C *mover, s32 unused, Unknown80090A0C_1 *point) {
    f32 dy = point->value04 - (f32)mover->value0C;
    f32 dx = point->value00 - (f32)mover->value10;
    s16 heading;

    if (dy != 0.0f || dx != 0.0f) {
        mover->value1C = 1;
        if (-dy < 0.0f) {
            heading = -func_800F3BE4(-dx / sqrtf(dy * dy + dx * dx));
        } else {
            heading = func_800F3BE4(-dx / sqrtf(dy * dy + dx * dx));
        }
        mover->value1E = heading;
    }
    func_8008B89C(mover);
}
INCLUDE_ASM("span_1000", func_80090B1C);
INCLUDE_ASM("span_1000", func_80090BE0);
