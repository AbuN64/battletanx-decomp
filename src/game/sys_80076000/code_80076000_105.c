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
