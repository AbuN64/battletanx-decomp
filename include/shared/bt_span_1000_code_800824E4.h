#ifndef UNBAKE_SPAN_1000_CODE_800824E4_H
#define UNBAKE_SPAN_1000_CODE_800824E4_H
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"
extern void func_auto_80085468(void);


extern void func_80085330(void * arg0, int arg1);


extern void func_80085460(void);




/* Scene layout used by visibility collection and model submission. */
typedef struct SceneView {
    f32 forwardZ, forwardX, sideX, sideZ;
    f32 offsetX, offsetZ;
    u8 disableCulling;
    u8 reserved19[3];
    u32 reserved1C;
    f32 z, x;
    u8 mode;
    u8 reserved29[3];
} SceneView;

typedef struct SceneObject {
    u8 flags, mode;
    u16 reserved02;
    u32 kind;
    u32 transform[19];
    u16 model;
    u16 reserved56;
} SceneObject;

typedef struct SceneBound {
    u16 reserved00, object;
    f32 rectangle[4];
    s32 key;
} SceneBound;

typedef struct Scene {
    u8 reserved000[0x564];
    SceneBound *bounds;
    SceneObject *objects;
    void *reserved56C;
    void *modelRefs;
    void *modelGroups;
    void *modelParts;
    void *frames;
    void *parts;
    SceneView views[4];
    s32 boundCount;
    s32 sortedCount;
} Scene;

#endif
