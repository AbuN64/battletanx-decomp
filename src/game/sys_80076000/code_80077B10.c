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

INCLUDE_ASM("span_1000", func_800786B0);
INCLUDE_ASM("span_1000", func_800786D4);
INCLUDE_ASM("span_1000", func_800786F4);
INCLUDE_ASM("span_1000", func_80078764);
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
INCLUDE_ASM("span_1000", func_80078CF8);
INCLUDE_ASM("span_1000", func_80078D90);
INCLUDE_ASM("span_1000", func_80078E2C);
INCLUDE_ASM("span_1000", func_80078E30);
