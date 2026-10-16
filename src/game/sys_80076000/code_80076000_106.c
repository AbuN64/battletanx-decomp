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
