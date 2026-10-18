#ifndef BT_CAMERA_H
#define BT_CAMERA_H
#include "shared/bt_gfx.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
typedef struct AttachedCamera {
    EffectHeader header;
    Vec3f *eyeOffset, *previousOffset;
    u8 blend;
    EffectHeader *anchor;
    s32 anchorArg;
    f32 fraction;
    Vec3f at, eye, up;
    ViewMatrix view;
    u16 roll;
    s32 floor, count;
    Vec3f motion;
} AttachedCamera;
extern Vec3f *D_80126128[2][3];
extern Vec3f *D_80126140[2][3];
extern void func_800786D4(AttachedCamera *camera, s32 mode);
#endif
