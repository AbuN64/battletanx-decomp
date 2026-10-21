#include "include_asm.h"

#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_8008F4EC.h"
s32 func_8009FB8C(CombatUnit *unit) {
    s32 var_v0;

    var_v0 = 0;
    if (unit->value10 == 0) {
        var_v0 = 1;
        if (unit->value98 == 0) {
            var_v0 = 0;
            if ((D_801B4AA8 - 0x5A) >= unit->value4B0) {
                if (unit->value0C != 0) {
                    return (D_801B4AA8 - 0x2D) < unit->value4B4;
                }
                var_v0 = 1;
                return var_v0;
            }
            return var_v0;
        }
        return var_v0;
    }
    return var_v0;
}

u8 func_8009FBE4(CombatUnit *unit) {
    PlayerRecord *player = func_800A6688(unit->player);
    return player->team;
}

#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800F29F0.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

u16 func_8009FC0C(Unknown8009FC0C *unit) {
    f32 x = unit->value38C;
    f32 z = unit->value390;
    f32 length;
    f32 cosine;
    u16 angle;

    if (x == 0.0f && z == 0.0f) {
        return 0;
    }
    length = sqrtf(x * x + z * z);
    cosine = z / length;
    if (x < 0.0f) {
        angle = -func_800F3BE4(cosine);
    } else {
        angle = func_800F3BE4(cosine);
    }
    return angle;
}
u16 func_8009FCD0(Unknown8009FCD0 *vec) {
    f32 x = vec->value14;
    f32 z = vec->value18;
    f32 length;
    f32 cosine;
    u16 angle;

    if ((x == 0.0f) & (z == 0.0f)) {
        return 0;
    }
    length = sqrtf(x * x + z * z);
    cosine = z / length;
    if (x < 0.0f) {
        angle = -func_800F3BE4(cosine);
    } else {
        angle = func_800F3BE4(cosine);
    }
    return angle;
}
INCLUDE_ASM("span_1000", func_8009FD94);
INCLUDE_ASM("span_1000", func_8009FEE0);
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_8008011C.h"

s32 func_800A0134(Unknown800A75EC *entity)
{
    void *session = func_800821C0();
    s32 i;
    s32 j;
    s32 offset;
    Unknown800A0134 *point;

    for (i = 0; i < func_8007AAB0(); i++) {
        j = 0;
        offset = ((entity->value04 + i) % func_8007AAB0()) * 0x3C;
        do {
            point = (Unknown800A0134 *) ((u8 *) session + offset);
            if (func_8009FEE0(entity, point->value280, point->value284, point->value288) >= 0) {
                return 1;
            }
            j++;
            offset += 0xC;
        } while (j < 5);
    }
    return -1;
}
INCLUDE_ASM("span_1000", func_800A0218);
INCLUDE_ASM("span_1000", func_800A037C);
#include "game/sys_80076000.h"
#include "shared/bt_unit.h"
void func_800A0380(void) {
    s32 i;
    for (i = 0; i < 20; i++) {
        D_802D8180[i].active = 0;
        D_802D8180[i].visible = 0;
    }
}

INCLUDE_ASM("span_1000", func_800A03B8);
INCLUDE_DATA("span_1000", D_800A03F8);
