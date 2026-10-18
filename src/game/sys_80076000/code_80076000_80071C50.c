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
INCLUDE_ASM("span_1000", func_8008FB1C);
INCLUDE_ASM("span_1000", func_8008FC9C);
INCLUDE_ASM("span_1000", func_8008FD6C);
#include "game/sys_80076000.h"
#include "shared/bt_types.h"
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
#include "shared/bt_audio_callbacks.h"
#include "shared/bt_types.h"
#include "shared/bt_common_draft_fields_func_800907CC_us.h"
#include "span_1000/code_8008F4EC.h"

/* func_8008AD10: types.abi.declared: reuse existing C; propagated semantic conflicts remain named */
/* func_80106D18: types.abi.declared: reuse existing C; propagated semantic conflicts remain named; types.abi.draft_words: complete O32 argument slots, including caller stack operands */

/* types.abi.stack_argument: func_80106D18: stack16: all mapped call sites prove the operand */
/* types.abi.stack_argument: func_80106D18: stack20: all mapped call sites prove the operand */
/* types.abi.stack_argument: func_80106D18: stack24: all mapped call sites prove the operand */
                                                  /* size = 0x50 */

s32 func_800907CC(s32 arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s8 arg8) {
    void *temp_v0;

    temp_v0 = func_8008AD10(0, 0x12, 0x20);
    if (temp_v0 == 0) {
        return -1;
    }
    ((struct Measured_func_800907CC_us_f88949686c7b *)(temp_v0))->value = arg0;
    ((struct Measured_func_800907CC_us_180d010f5e65 *)(temp_v0))->value = arg8;
    ((struct Measured_func_800907CC_us_fc8673a50ef1 *)(temp_v0))->value = func_80106D18((s32) temp_v0, arg1, arg2, arg4, arg5, arg6, arg7, (arg8 & 1) ? 0x20 : 0xF95F, arg3 & 0xFFFF);
    ((struct Measured_func_800907CC_us_7cc74cb35a88 *)(temp_v0))->value = arg1;
    ((struct Measured_func_800907CC_us_95b7c07a1977 *)(temp_v0))->value = arg2;
    ((struct Measured_func_800907CC_us_a9e1f6880f69 *)(temp_v0))->value = 0;
    return 0;
}

INCLUDE_ASM("span_1000", func_800908CC);
INCLUDE_ASM("span_1000", func_800908F0);
INCLUDE_ASM("span_1000", func_80090A0C);
INCLUDE_ASM("span_1000", func_80090B1C);
INCLUDE_ASM("span_1000", func_80090BE0);
