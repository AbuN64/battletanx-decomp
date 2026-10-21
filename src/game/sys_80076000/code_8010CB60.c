#include "include_asm.h"

#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "span_1000/code_8008F4EC.h"










s32 func_8010CB60(EffectKind2DParams *params)
{
    EffectKind2D *effect;
    u8 phase;

    effect = func_8008AD10(1, 0x2D, 0x3C);
    if (effect == 0) {
        return -1;
    }
    effect->value0C = params->value00;
    effect->value18 = params->value0C;
    effect->value1C = params->value10;
    effect->value20 = params->value14;
    effect->value24 = params->value18;
    effect->value28 = params->value1C;
    effect->value2C = params->value20;
    phase = func_800F38F4() & 7;
    effect->value30 = phase;
    effect->value32 = 0x80;
    effect->value31 = (phase + 1) % D_80142CD0;
    effect->value34 = func_800F38F4();
    effect->value35 = func_800F38F4();
    effect->value36 = 0;
    effect->value38 = 0x80;
    return 0;
}

#include "shared/bt_types.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8010CC44(EffectKind2D *effect) {
    s32 timer;
    u16 phase;

    timer = effect->value24;
    if (timer != -1) {
        if (timer != 0) {
            effect->value24 = timer - 1;
        }
    }
    if (effect->value32 > 0) {
        effect->value32 -= func_800F38F4() & 1;
        if (effect->value32 < 0) {
            effect->value32 = 0;
        }
    }
    effect->value34++;
    effect->value35++;
    phase = effect->value36 + effect->value38;
    effect->value36 = phase;
    if (phase >= 0x100) {
        effect->value30++;
        effect->value31++;
        effect->value30 = effect->value30 % D_80142CD0;
        effect->value36 = 0;
        effect->value31 = effect->value31 % D_80142CD0;
    }
}
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
void func_8010CD4C(EffectKind2D *quad, f32 *center, f32 corners[4][3]) {
    u16 angle = quad->value18;
    f32 cosValue = func_800F3B40(angle);
    f32 dz = quad->value28 * -func_800F3AE0(angle);
    f32 h = quad->value2C;
    f32 dx = quad->value28 * cosValue;

    corners[0][2] = corners[3][2] = center[2] + dz;
    corners[0][0] = corners[3][0] = center[0] + dx;
    corners[1][2] = corners[2][2] = center[2] - dz;
    corners[1][0] = corners[2][0] = center[0] - dx;
    corners[0][1] = corners[1][1] = center[1] - h;
    corners[2][1] = corners[3][1] = center[1] + h;
}

INCLUDE_ASM("span_1000", func_8010CE24);
void func_8010D388(Unknown8010D388 *line) {
    f32 pos[3];
    f32 c;
    f32 step;
    f32 s;
    f32 dx;
    f32 dz;
    s32 i;

    i = 0;
    c = func_800F3B40(line->value18);
    s = func_800F3AE0(line->value18);
    step = line->value28 + line->value28;
    dz = step * -s;
    dx = step * c;
    pos[2] = line->value14 - dz * line->value20 / D_800755A0;
    pos[0] = line->value0C - dx * line->value20 / D_800755A0;
    pos[1] = line->value10;
    for (; i < line->value20; i++) {
        func_8010CE24(line, pos);
        pos[2] += dz;
        pos[0] += dx;
    }
}
INCLUDE_ASM("span_1000", func_8010D480);
INCLUDE_ASM("span_1000", func_8010D59C);
INCLUDE_DATA("span_1000", D_8010D844);
