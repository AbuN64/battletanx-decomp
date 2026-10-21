#include "include_asm.h"

#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"





void func_8010BEFC(EffectKind2B *effect, s32 *result)
{
    s32 lifetime = effect->lifetime;

    if (lifetime != -1) {
        if (lifetime != 0) {
            effect->lifetime = lifetime - 1;
        } else {
            *result = 2;
            return;
        }
    }
    if (effect->mode == 1) {
        effect->value3E += (u32)effect->drift;
    }
    if (effect->mode != 3) {
        effect->blend += effect->blendStep;
        if (effect->blend >= 0x100) {
            effect->currentIndex = effect->nextIndex;
            effect->nextIndex = D_80142B70[effect->nextIndex];
            effect->blend = 0;
        }
    }
}

INCLUDE_DATA("span_1000", D_80075520);
INCLUDE_ASM("span_1000", func_8010BFDC);
INCLUDE_ASM("span_1000", func_8010C450);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A9FC4.h"

void func_8010C9E8(s32 unused, f32 (*v)[3]) {
    f32 one = D_8007558C;
    D_80142CC0 += 0x64;
    func_800A9C20();
    func_800AB0A4(one, one);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(0.0f, one);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(0.0f, 0.0f);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    v++;
    func_800AB0A4(one, 0.0f);
    func_800A9FC4((*v)[0], (*v)[1], (*v)[2]);
    func_800A9CC4();
    func_800AA328(0, 1, 2);
    func_800AA328(0, 2, 3);
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_8010CAE8(Unknown8010CAE8 *obj) {
    void *other = obj;

    if (func_8007DBC4() == 0) {
        if (obj->value0C < 2) {
            func_8010BFDC(obj);
        } else {
            func_8010C450(other);
        }
    }
}
INCLUDE_ASM("span_1000", func_8010CB4C);
