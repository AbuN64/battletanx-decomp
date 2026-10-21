#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_types.h"

void func_80086B48(u8 *arg0, f32 arg1) {
    f32 t;
    f32 t2;
    f32 t3;
    u32 v;
    u32 w;
    u32 x;

    t = arg0[0xC] * arg1;
    if (t > 255.0f) {
        v = 255;
    } else {
        v = t;
    }
    t2 = arg0[0xD] * arg1;
    arg0[0xC] = v;
    if (t2 > 255.0f) {
        w = 255;
    } else {
        w = t2;
    }
    t3 = arg0[0xE] * arg1;
    arg0[0xD] = w;
    if (t3 > 255.0f) {
        x = 255;
    } else {
        x = t3;
    }
    arg0[0xE] = x;
}

INCLUDE_RODATA("span_1000", D_800716F8);
INCLUDE_DATA("span_1000", D_800716FC);
INCLUDE_RODATA("span_1000", D_80071700);
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F29F0.h"
extern f32 D_800716F8;
extern f32 D_800716FC;

void func_80086C84(s32 arg0, FrameVertex *arg1, f32 arg2) {
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    FrameVertex *var_a1;

    var_a1 = arg1;
    var_a2 = 0;
    if (arg0 > 0) {
        do {
            temp_fv1 = (f32) var_a1->cn[0] * arg2;
            var_v1 = 0xFF;
            if (!(D_800716F8 < temp_fv1)) {
                if (D_800716FC <= temp_fv1) {
                    var_v1 = (s32) (temp_fv1 - D_800716FC) | 0x80000000;
                } else {
                    var_v1 = (s32) temp_fv1;
                }
            }
            temp_fv1_2 = (f32) var_a1->cn[1] * arg2;
            var_a1->cn[0] = (u8) var_v1;
            if (D_800716F8 < temp_fv1_2) {
                var_v1_2 = 0xFF;
            } else if (D_800716FC <= temp_fv1_2) {
                var_v1_2 = (s32) (temp_fv1_2 - D_800716FC) | 0x80000000;
            } else {
                var_v1_2 = (s32) temp_fv1_2;
            }
            temp_fv1_3 = (f32) var_a1->cn[2] * arg2;
            var_a1->cn[1] = (u8) var_v1_2;
            if (D_800716F8 < temp_fv1_3) {
                var_v0 = 0xFF;
            } else if (D_800716FC <= temp_fv1_3) {
                var_v0 = (s32) (temp_fv1_3 - D_800716FC) | 0x80000000;
            } else {
                var_v0 = (s32) temp_fv1_3;
            }
            var_a1->cn[2] = (u8) var_v0;
            var_a2 += 1;
            var_a1++;
        } while (var_a2 < arg0);
    }
}
#else
INCLUDE_ASM("span_1000", func_80086C84);
#endif
INCLUDE_ASM("span_1000", func_80086DC0);
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

s32 func_80086F3C(Unknown80086F3C_2 *owner, s32 key, s32 value, s32 addRef) {
    Unknown80086F3C_1 *table = owner->value28;
    s32 i;

    for (i = 0; i < table->value936C; i++) {
        if (table->value9370[i].value00 == key) {
            if (addRef != 0) {
                table->value9370[i].value0C++;
            }
            return 0;
        }
    }
    if (table->value936C == 256) {
        return -1;
    }
    table->value9370[table->value936C].value0C = addRef ? 2 : 1;
    table->value9370[table->value936C].value00 = key;
    table->value9370[table->value936C++].value04 = value;
    return 0;
}
#ifdef NON_MATCHING
#include "shared/bt_types.h"
#include "game/sys_8011C210.h"
extern s32 D_0000A374;
extern s32 D_0000A378;
extern s32 D_0000A37C;
extern s32 D_0000A384;

s32 func_80087054(struct Slot *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    temp_t0 = arg0->unk28;
    var_a0 = 0;
    if (*(temp_t0 + &D_0000A374) > 0) {
        var_v1 = temp_t0;
loop_2:
        if (*(var_v1 + &D_0000A378) != arg1) {
            var_a0 += 1;
            var_v1 += 0x10;
            if (var_a0 >= *(temp_t0 + &D_0000A374)) {
                goto block_10;
            }
            goto loop_2;
        }
        if (arg3 == 0) {
            return 0;
        }
        *(var_v1 + &D_0000A384) = *(var_v1 + &D_0000A384) + 1;
        return 0;
    }
block_10:
    temp_v1 = *(temp_t0 + &D_0000A374);
    if (temp_v1 == 0x708) {
        return -1;
    }
    if (arg3 != 0) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    *(temp_t0 + (temp_v1 * 0x10) + &D_0000A384) = var_v0;
    *(temp_t0 + (*(temp_t0 + &D_0000A374) * 0x10) + &D_0000A378) = arg1;
    temp_v1_2 = *(temp_t0 + &D_0000A374);
    *(temp_t0 + &D_0000A374) = temp_v1_2 + 1;
    *(temp_t0 + (temp_v1_2 * 0x10) + &D_0000A37C) = arg2;
    return 0;
}
#else
INCLUDE_ASM("span_1000", func_80087054);
#endif
INCLUDE_ASM("span_1000", func_8008716C);
s32 func_800874F4(Unknown800874F4_1 *bank, s32 group, s32 hold)
{
    Unknown800874F4 *state = bank->value28;
    s32 refs;
    s32 i;

    if (group >= 600) {
        return -1;
    }
    refs = state->value1028[group].value00;
    if (refs == 0) {
        state->value1028[group].value00 = (hold != 0) ? 2 : 1;
        for (i = 0; i < bank->value14[group].value00; i++) {
            if (func_8008716C(bank, bank->value14[group].value02 + i, hold) < 0) {
                return -1;
            }
        }
        return 0;
    }
    if (hold != 0) {
        state->value1028[group].value00 = refs + 1;
        for (i = 0; i < bank->value14[group].value00; i++) {
            if (func_8008716C(bank, bank->value14[group].value02 + i, hold) < 0) {
                return -1;
            }
        }
    }
    return 0;
}
s32 func_80087634(Unknown80087634_1 *bank, s32 set, s32 hold)
{
    Unknown80087634 *state = bank->value28;
    s32 refs;
    s32 i;

    if (set >= 450) {
        return -1;
    }
    refs = state->value0C[set].value00;
    if (refs == 0) {
        state->value0C[set].value00 = (hold != 0) ? 2 : 1;
        for (i = 0; i < bank->value0C[set].value00; i++) {
            if (func_800874F4(bank, bank->value0C[set].value02 + i, hold) < 0) {
                return -1;
            }
        }
        return 0;
    }
    if (hold != 0) {
        state->value0C[set].value00 = refs + 1;
        for (i = 0; i < bank->value0C[set].value00; i++) {
            if (func_800874F4(bank, bank->value0C[set].value02 + i, hold) < 0) {
                return -1;
            }
        }
    }
    return 0;
}
s32 func_80087798(Unknown80087798_3 *bank, s32 group) {
    Unknown80087798_2 *state = bank->value28;
    s32 i;

    if (group >= 64) {
        return -1;
    }
    if (state->valueE20[group].value00 != 0) {
        return 0;
    }
    state->valueE20[group].value00 = 1;
    for (i = 0; i < bank->value10[group].value00; i++) {
        if (func_80087634(bank, bank->value10[group].value02 + i, 0) < 0) {
            return -1;
        }
    }
    return 0;
}
INCLUDE_ASM("span_1000", func_8008785C);
#include "shared/bt_span_1000_code_8007A470.h"

void func_80087D30(Unknown80087D30_6 *ctx, s32 player, u32 *slots) {
    u32 swap[2][4];
    Unknown80087D30 *rec;
    Unknown80087D30_1 *group;
    Unknown80087D30_1 *groups;
    Unknown80087D30_2 *node;
    Unknown80087D30_3 *material;
    Unknown80087D30_4 *entry;
    Unknown80087D30_5 *texture;
    s32 n = 0;
    s32 i = 0;
    s32 g;
    s32 idx;
    s32 a;
    s32 b;
    s32 c;

    for (; i < func_8007AAA0(); i++) {
        if (slots[i] >= 9) {
            continue;
        }
        idx = slots[i] + 0x30;
        material = &ctx->value0C[ctx->value00[player].value2DC + idx];
        entry = &ctx->value14[material->value02];
        texture = &ctx->value18[entry->value02];
        swap[1][n] = texture->value00;
        material = &ctx->value0C[ctx->value00[player].value2DC + 0x3C];
        entry = &ctx->value14[material->value02];
        if (entry->value00 != 4) {
            return;
        }
        texture = &ctx->value18[entry->value02 + D_801260A0[i]];
        swap[0][n++] = texture->value00;
    }
    if (n == 0) {
        return;
    }
    for (i = 0; i < n; i++) {
    }
    rec = &ctx->value00[player];
    for (g = 0; g < rec->value27C; g++) {
        groups = ctx->value04;
        group = (rec->value280 != -1) ? &groups[g + 1] : &groups[g];
        for (a = 0; a < group->value00; a++) {
            node = &ctx->value08[a + group->value02];
            material = &ctx->value0C[node->value18];
            for (b = 0; b < material->value00; b++) {
                entry = &ctx->value14[material->value02 + b];
                for (c = 0; c < entry->value00; c++) {
                    texture = &ctx->value18[entry->value02 + c];
                    for (i = 0; i < n; i++) {
                        if (texture->value00 == swap[0][i]) {
                            texture->value00 = swap[1][i];
                        }
                    }
                }
            }
        }
    }
}
s32 func_80088004(Unknown80088004_2 *owner, s32 id) {
    Unknown80088004_1 *table = owner->value28;
    s32 i;

    for (i = 0; i < table->value936C; i++) {
        if (table->value9370[i].value00 == id) {
            return i;
        }
    }
    return 0;
}
s32 func_8008805C(Unknown8008805C_2 *handle, s32 key) {
    Unknown8008805C_1 *owner = handle->value28;
    s32 i;

    for (i = 0; i < owner->valueA374; i++) {
        if (owner->valueA378[i].value00 == key) {
            return i;
        }
    }
    return 0;
}
INCLUDE_ASM("span_1000", func_800880B4);
s32 func_80088280(Unknown80088280_2 *src, Unknown80088280_3 *dst, s32 index)
{
    s32 slot;
    Unknown80088280 *in;
    Unknown80088280 *out;
    s32 i;

    slot = src->value28->value11404++;
    out = &dst->value574[slot];
    in = &src->value14[index];
    out->value00 = in->value00;
    out->value02 = func_800880B4(src, dst, in->value02);
    for (i = 1; i < out->value00; i++) {
        func_800880B4(src, dst, in->value02 + i);
    }
    return slot;
}
static inline s32 copy_group(Unknown80088280_2 *src, Unknown80088280_3 *dst, s32 index)
{
    s32 slot;
    Unknown80088280 *in;
    Unknown80088280 *out;
    s32 i;

    slot = src->value28->value11404++;
    out = &dst->value574[slot];
    in = &src->value14[index];
    out->value00 = in->value00;
    out->value02 = func_800880B4(src, dst, in->value02);
    for (i = 1; i < out->value00; i++) {
        func_800880B4(src, dst, in->value02 + i);
    }
    return slot;
}

s32 func_80088360(Unknown80088280_2 *src, Unknown80088280_3 *dst, s32 index)
{
    s32 slot;
    Unknown80088360 *in;
    Unknown80088360 *out;
    s32 i;

    slot = src->value28->value11400++;
    out = &dst->value570[slot];
    in = &src->value0C[index];
    out->value04 = in->value04;
    out->value06 = in->value06;
    out->value08 = in->value08;
    out->value0A = in->value0A;
    out->value00 = in->value00;
    out->value02 = copy_group(src, dst, in->value02);
    for (i = 1; i < out->value00; i++) {
        copy_group(src, dst, in->value02 + i);
    }
    return slot;
}
