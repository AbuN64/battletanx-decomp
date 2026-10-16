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
