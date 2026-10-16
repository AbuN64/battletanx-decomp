#include "shared/bt_span_1000_code_8008B1F0.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007963C.h"







int func_8010874C(void * arg0, float * arg1, int arg2, void * arg3, void * arg4);


void func_800F3490(GrenadeEffect *e, s32 *status)
{
    f32 next[3];
    PointZX start;
    PointZX end;
    SegmentHit hit;
    f32 dot;

    start.x = e->x;
    start.z = e->z;
    if (--e->timer == 0) {
        func_800ED8C0(&e->x, 0x1A);
        func_800902BC(&e->x, 4);
        func_8009F958(e, &start, 100.0f, 22.0f, e->owner);
        func_80085B4C(5, e->x, e->z);
        *status = 2;
    }
    e->vy -= 2.0f;
    e->spin += 0x800;
    next[0] = e->x + e->vx;
    next[2] = e->z + e->vz;
    e->y += e->vy;
    if (e->y <= 15.0f) {
        e->vx -= e->vx * 0.15f;
        e->vz -= e->vz * 0.15f;
        e->vy = -e->vy * 0.8f;
        e->y = 15.0f;
    } else {
        e->vx -= e->vx * 0.01f;
        e->vz -= e->vz * 0.01f;
    }
    start.x = e->x;
    start.z = e->z;
    end.x = next[0];
    end.z = next[2];
    if (func_8010874C(&start, &end, 0x10, &hit, e->ignore)) {
        dot = hit.normalX * -e->vx + hit.normalZ * -e->vz;
        e->vx = ((dot * hit.normalX + e->vx) * 2.0f - e->vx) * (func_800F3880(0.6f) + 0.7f);
        e->vz = ((dot * hit.normalZ + e->vz) * 2.0f - e->vz) * (func_800F3880(0.6f) + 0.7f);
        e->vx -= e->vx * 0.6f;
        e->vz -= e->vz * 0.6f;
        e->ignore = 0;
        e->spin = -e->spin;
        if (e->vy > 5.0f) {
            func_80079A5C(func_80085B4C(0x1A, e->x, e->z), 2.0f);
        }
    } else {
        e->x = next[0];
        e->z = next[2];
    }
}

