#include "shared/bt_span_1000_code_800824E4.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"


static inline void draw_scene_object(Scene *scene, SceneObject *object, s32 view)
{
    switch (object->kind) {
    case 0:
        func_800824E4(scene, object->model, 0, object->transform, 0,
            ((object->flags & 15) < 14) ? (object->flags & 15) : (object->flags & 15) - 16, view);
        break;
    case 28:
        func_800824E4(scene, object->model, 0, object->transform, 6,
            ((object->flags & 15) < 14) ? (object->flags & 15) : (object->flags & 15) - 16, view);
        break;
    case 29:
        func_800827AC(scene, object->model, 0, object->transform, 2, 6,
            ((object->flags & 15) < 14) ? (object->flags & 15) : (object->flags & 15) - 16, view);
        break;
    default:
        func_800824E4(scene, object->model, 0, object->transform, 2,
            ((object->flags & 15) < 14) ? (object->flags & 15) : (object->flags & 15) - 16, view);
        break;
    }
}

void func_80083394(Scene *scene)
{
    s32 positions[4][2];
    s32 state[4] = {0, 0, 0, 0};
    s32 modes[4];
    s32 limits[4][2];
    s32 ids[256];
    s32 views, count, sorted;
    SceneObject *objects;
    SceneBound *bounds;
    SceneBound *bound;
    SceneObject *object;
    s32 key, minimum, finished, group, view, index, found;
    f32 *rectangle;

    finished = 0;
    minimum = 1000000;
    if (D_auto_801C9178 != D_auto_80125858) {
        D_auto_801C9178 = D_auto_80125858;
        D_auto_801C9174 = D_auto_80125858 * D_auto_80125858;
        func_800A5EB0(D_auto_80125858);
    }
    view = 0;
    func_8009491C();
    views = func_8007AAA0();
    count = scene->boundCount;
    sorted = scene->sortedCount;
    bounds = scene->bounds;
    objects = scene->objects;
    for (view = 0; view < views; view++) {
        positions[view][0] = scene->views[view].x;
        positions[view][1] = scene->views[view].z;
        limits[view][0] = positions[view][0] - D_auto_80125858 - 450;
        limits[view][1] = positions[view][0] + D_auto_80125858 + 450;
        if (limits[view][0] < minimum) minimum = limits[view][0];
        modes[view] = scene->views[view].mode;
    }
    for (group = 0; group < sorted && bounds[group].key < minimum; group++) {}
    for (; group < sorted; group++) {
        bound = &bounds[group];
        key = bound->key;
        object = &objects[bound->object];
        for (view = 0; view < views; view++) {
            if (state[view] == 0 && key >= limits[view][0])
                state[view] = modes[view] != 0 ? 2 : 1;
            switch (state[view]) {
            case 1:
                if (limits[view][1] < key) {
                    state[view] = 3;
                    if (++finished == views) goto collected;
                    continue;
                }
                if (!(object->mode & 128)) continue;
                if (!((object->flags >> (view + 4)) & 1)) continue;
            func_80095768(bound->rectangle[0], bound->rectangle[1], bound->rectangle[2], bound->rectangle[3],
                object->mode & ~128, bound->object, view, D_auto_80125858, D_auto_801C9174);
                break;
            case 2:
                if (limits[view][1] < key) {
                    state[view] = 3;
                    if (++finished == views) goto collected;
                    continue;
                }
                if (!(object->mode & 128)) continue;
                if ((object->mode & ~128) < 2) continue;
                if (!((object->flags >> (view + 4)) & 1)) continue;
            func_80095768(bound->rectangle[0], bound->rectangle[1], bound->rectangle[2], bound->rectangle[3],
                object->mode & ~128, bound->object, view, D_auto_80125858, D_auto_801C9174);
                break;
            default:
                continue;
            }
        }
    }
collected:
    for (view = 0; view < views; view++) {
        found = func_80095C1C(ids, view);
        for (index = 0; index < found; index++) {
            object = &objects[ids[index]];
            func_800824E4(scene, object->model, 0, object->transform, 2,
                ((object->flags & 15) < 14) ? (object->flags & 15) : (object->flags & 15) - 16, view);
        }
    }
    finished = 0;
    state[0] = 0;
    state[1] = 0;
    state[2] = 0;
    state[3] = 0;
    for (group = 0; group < sorted && bounds[group].key < minimum; group++) {}
    for (; group < sorted; group++) {
        bound = &bounds[group];
        key = bound->key;
        object = &objects[bound->object];
        rectangle = bound->rectangle;
        for (view = 0; view < views; view++) {
            if (state[view] == 0 && key >= limits[view][0])
                state[view] = modes[view] != 0 ? 2 : 1;
            switch (state[view]) {
            case 1:
                if (limits[view][1] < key) {
                    state[view] = 3;
                    if (++finished == views) goto unsorted;
                    continue;
                }
                if (object->mode & 128) continue;
                if (!((object->flags >> (view + 4)) & 1)) continue;
                if (func_800962B4(rectangle[0], rectangle[1], rectangle[2], rectangle[3],
                    object->mode & ~128, view, D_auto_80125858, D_auto_801C9174))
                    draw_scene_object(scene, object, view);
                break;
            case 2:
                if (limits[view][1] < key) {
                    state[view] = 3;
                    if (++finished == views) goto unsorted;
                    continue;
                }
                if ((object->mode & 128) && (object->mode & ~128) != 1) continue;
                if (!((object->flags >> (view + 4)) & 1)) continue;
                if (func_800962B4(rectangle[0], rectangle[1], rectangle[2], rectangle[3],
                    object->mode & ~128, view, D_auto_80125858, D_auto_801C9174))
                    draw_scene_object(scene, object, view);
                break;
            }
        }
    }
unsorted:
    finished = 0;
    state[0] = 0;
    state[1] = 0;
    state[2] = 0;
    state[3] = 0;
    for (group = sorted; group < count && bounds[group].key < minimum; group++) {}
    for (; group < count; group++) {
        bound = &bounds[group];
        object = &objects[bound->object];
        if (!object->flags) continue;
        key = bound->key;
        rectangle = bound->rectangle;
        for (view = 0; view < views; view++) {
            switch (state[view]) {
            case 0:
                if (key < limits[view][0]) continue;
                state[view] = 1;
            case 1:
                if (limits[view][1] < key) {
                    state[view] = 3;
                    if (++finished == views) return;
                    continue;
                }
                if (!((object->flags >> (view + 4)) & 1)) continue;
                if (func_800962B4(rectangle[0], rectangle[1], rectangle[2], rectangle[3],
                    object->mode & 127, view, D_auto_80125858, D_auto_801C9174))
                    draw_scene_object(scene, object, view);
                break;
            }
        }
    }
}
