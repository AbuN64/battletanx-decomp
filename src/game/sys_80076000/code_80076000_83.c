#include "shared/bt_span_1000_code_800824E4.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "span_1000/code_8007EBA0.h"





static inline void submit_level_object(Scene *level, SceneObject *obj, s32 view)
{
    switch (obj->kind) {
    case 0:
        func_800824E4(level, obj->model, 0, obj->transform, 0, ((((obj)->flags & 0xF) < 14) ? ((obj)->flags & 0xF) : ((obj)->flags & 0xF) - 16), view);
        break;
    case 0x1C:
        func_800824E4(level, obj->model, 0, obj->transform, 6, ((((obj)->flags & 0xF) < 14) ? ((obj)->flags & 0xF) : ((obj)->flags & 0xF) - 16), view);
        break;
    case 0x1D:
        func_800827AC(level, obj->model, 0, obj->transform, 2, 6, ((((obj)->flags & 0xF) < 14) ? ((obj)->flags & 0xF) : ((obj)->flags & 0xF) - 16), view);
        break;
    default:
        func_800824E4(level, obj->model, 0, obj->transform, 2, ((((obj)->flags & 0xF) < 14) ? ((obj)->flags & 0xF) : ((obj)->flags & 0xF) - 16), view);
        break;
    }
}
void func_80083F04(Scene *level)
{
    s32 view[4][2];
    s32 modes[4];
    s32 slots[256];
    s32 objectCount;
    s32 groupCount;
    SceneObject *objects;
    SceneBound *groups;
    SceneBound *group;
    SceneObject *obj;
    s32 views;
    s32 i;
    s32 g;
    s32 k;
    s32 count;
    s32 flags;
    f32 *rect;
    s32 zoneFlags;
    func_8009491C();
    i = 0;
    views = func_8007AAA0();
    objectCount = level->boundCount;
    groupCount = level->sortedCount;
    groups = level->bounds;
    objects = level->objects;
    for (i = 0; i < views; i++) {
        view[i][0] = level->views[i].x;
        view[i][1] = level->views[i].z;
        modes[i] = level->views[i].mode;
    }
    for (g = 0; g < groupCount; g++) {
        group = &groups[g];
        obj = &objects[group->object];
        for (i = 0; i < views; i++) {
            if (modes[i] == 0) {
                zoneFlags = obj->mode;
                if ((zoneFlags & 0x80) && ((obj->flags >> (i + 4)) & 1)) {
                    func_800953AC(group->rectangle[0], group->rectangle[1], group->rectangle[2], group->rectangle[3], zoneFlags & ~0x80,
                                                  group->object, i);
                }
            } else {
                zoneFlags = obj->mode;
                if (!(zoneFlags & 0x80)) {
                    continue;
                }
                zoneFlags &= ~0x80;
                if (zoneFlags >= 2 && ((obj->flags >> (i + 4)) & 1)) {
                    func_800953AC(group->rectangle[0], group->rectangle[1], group->rectangle[2], group->rectangle[3], zoneFlags, group->object,
                                                  i);
                }
            }
        }
    }
    for (i = 0; i < views; i++) {
        count = func_80095C1C(slots, i);
        for (k = 0; k < count; k++) {
            obj = &objects[slots[k]];
            func_800824E4(level, obj->model, 0, obj->transform, 2, ((((obj)->flags & 0xF) < 14) ? ((obj)->flags & 0xF) : ((obj)->flags & 0xF) - 16), i);
        }
    }
    for (g = 0; g < groupCount; g++) {
        group = &groups[g];
        obj = &objects[group->object];
        rect = group->rectangle;
        for (i = 0; i < views; i++) {
            if (modes[i] == 0) {
                flags = obj->mode;
                if (!(flags & 0x80) && ((obj->flags >> (i + 4)) & 1)) {
                    if (func_80095F30(rect[0], rect[1], rect[2], rect[3], flags & ~0x80, i)) {
                        submit_level_object(level, obj, i);
                    }
                }
            } else {
                flags = obj->mode;
                if ((!(flags & 0x80) || (flags & ~0x80) == 1) && ((obj->flags >> (i + 4)) & 1)) {
                    if (func_80095F30(rect[0], rect[1], rect[2], rect[3], flags & ~0x80, i)) {
                        submit_level_object(level, obj, i);
                    }
                }
            }
        }
    }
    for (g = groupCount; g < objectCount; g++) {
        group = &groups[g];
        obj = &objects[group->object];
        if (obj->flags == 0) {
            continue;
        }
        rect = group->rectangle;
        for (i = 0; i < views; i++) {
            if (!((obj->flags >> (i + 4)) & 1)) {
                continue;
            }
            if (func_80095F30(rect[0], rect[1], rect[2], rect[3], obj->mode & 0x7F, i)) {
                submit_level_object(level, obj, i);
            }
        }
    }
}
