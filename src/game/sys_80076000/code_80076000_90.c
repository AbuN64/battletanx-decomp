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
        f32 divisor = D_auto_80071BAC;

        if (arg10 < 0) {
            divisor = D_auto_80071BB0;
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
        rotation = D_auto_80071B6C;
        inverse = D_auto_80071B6C;
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

