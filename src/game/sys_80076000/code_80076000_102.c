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
