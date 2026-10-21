#include "include_asm.h"

INCLUDE_ASM("span_1000", func_80077B10);
INCLUDE_ASM("span_1000", func_80077C78);
INCLUDE_ASM("span_1000", func_80077E94);
INCLUDE_ASM("span_1000", func_80078634);
#include "game/sys_80076000.h"
#include "shared/bt_camera.h"
void func_80078654(AttachedCamera *camera, Vec3f *offset) {
    camera->previousOffset = camera->eyeOffset;
    camera->eyeOffset = offset;
    camera->blend = 0;
    func_80077E94(camera);
}

void func_80078680(AttachedCamera *camera, Vec3f *offset) {
    camera->previousOffset = camera->eyeOffset;
    camera->eyeOffset = offset;
    camera->blend = 64;
    func_80077E94(camera);
}

#include "shared/bt_types.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800786B0(Unknown800786B0 *record, s32 value) { record->value10 = value; record->value14 = 0; func_80077E94(record); }
INCLUDE_ASM("span_1000", func_800786D4);
INCLUDE_ASM("span_1000", func_800786F4);
void func_80078764(Unknown80078764 *camera, f32 eyeX, f32 eyeY, f32 eyeZ, f32 atX, f32 atY, f32 atZ) {
    func_80113460(camera->value48, eyeX, eyeY, eyeZ, atX, atY, atZ, 0.0f, D_800710B4, 0.0f);
    camera->value88 = 0;
    camera->value30 = eyeX;
    camera->value34 = eyeY;
    camera->value38 = eyeZ;
    camera->value24 = atX;
    camera->value28 = atY;
    camera->value2C = atZ;
}
#include "game/sys_80076000.h"
#include "shared/bt_camera.h"
void func_80078814(AttachedCamera *camera) {
    f32 zero = 0.0f;
    camera->floor = -1000;
    camera->count = 0;
    camera->motion.z = zero;
    camera->motion.y = zero;
    camera->motion.x = zero;
}

INCLUDE_ASM("span_1000", func_80078834);
INCLUDE_ASM("span_1000", func_800788EC);
void func_80078CF8(Unknown80078CF8 *record, s32 unused, Unknown80078CF8_1 *source, void *target)
{
    switch (record->value0C) {
    case 0:
    case 2:
    case 3:
        func_800A7650(target);
        func_800A7744(target, record->value14, 0, record->value10, record->value0E);
        break;
    case 1:
        func_800EC7A8(target, source->value04);
        break;
    }
}
void func_80078D90(Unknown80078CF8 *record, s32 unused, s32 enabled,
                                       Unknown80078CF8_1 *source, void *target)
{
    if (enabled == 1) {
        switch (record->value0C) {
        case 0:
        case 2:
        case 3:
            func_800A7650(target);
            func_800A7744(target, record->value14, 0, record->value10, record->value0E);
            break;
        case 1:
            func_800EC7A8(target, source->value04);
            break;
        }
    }
}
INCLUDE_ASM("span_1000", func_80078E2C);
INCLUDE_ASM("span_1000", func_80078E30);
