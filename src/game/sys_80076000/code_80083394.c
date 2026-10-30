#include "include_asm.h"

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
    if (D_801C9178 != D_80125858) {
        D_801C9178 = D_80125858;
        D_801C9174 = D_80125858 * D_80125858;
        func_800A5EB0(D_80125858);
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
        limits[view][0] = positions[view][0] - D_80125858 - 450;
        limits[view][1] = positions[view][0] + D_80125858 + 450;
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
                object->mode & ~128, bound->object, view, D_80125858, D_801C9174);
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
                object->mode & ~128, bound->object, view, D_80125858, D_801C9174);
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
                    object->mode & ~128, view, D_80125858, D_801C9174))
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
                    object->mode & ~128, view, D_80125858, D_801C9174))
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
                    object->mode & 127, view, D_80125858, D_801C9174))
                    draw_scene_object(scene, object, view);
                break;
            }
        }
    }
}

INCLUDE_DATA("span_1000", D_800714E8);
#include "shared/bt_span_1000_code_800824E4.h"
#include <ultra64.h>
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

INCLUDE_ASM("span_1000", func_8008463C);
#include "game/sys_80076000.h"
static inline s32 within_radius(f32 px, f32 py, f32 x, f32 y) {
    f32 dy = y - py;
    f32 dx = x - px;
    s32 inside = 0;
    if (dy * dy + dx * dx < (f32)D_801C9174) inside = 1;
    return inside;
}
s32 func_80084778(Scene *scene, f32 (*quad)[2])
{
    s32 i = 0;
    u8 mask = 0;
    s32 count = func_8007AAA0();
    s32 j;
    SceneView *view;
    while (i < count) {
        j = 0;
        view = &scene->views[i];
        for (; j < 4; j++) {
            if (within_radius(quad[j][0], quad[j][1], view->z, view->x)) {
                if (func_800942A8(quad, 4, view) == 0) mask |= 1 << i;
                break;
            }
        }
        i++;
    }
    return mask;
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

u8 func_8008488C(Unknown8008488C_1 *table, f32 x, f32 y, f32 radius) {
    u8 mask = 0;
    s32 count = func_8007AAA0();
    s32 i;
    s32 j;

    for (i = 0; i < count; i++) {
        Unknown8008488C *point;

        j = 0;
        point = &table->value584[i];
        for (; j < 4; j++) {
            f32 dx = point->value24 - x;
            f32 dy = point->value20 - y;
            s32 inRange = 0;

            if (dx * dx + dy * dy < D_801C9174) {
                inRange = 1;
            }
            if (inRange) {
                if (func_800941E0(x, y, radius, point) == 0) {
                    mask |= 1 << i;
                }
                break;
            }
        }
    }
    return mask;
}
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
void func_800849B0(Scene *level, s32 arg1, void *arg2, s32 arg3, s32 arg4, u8 mask) {
    s32 i = 0;
    s32 count = func_8007AAA0();
    for (; i < count; i++) {
        if ((mask >> i) & 1) {
            func_800824E4(level, arg1, arg2, 0, arg3, arg4, i);
        }
    }
}

INCLUDE_ASM("span_1000", func_80084A74);
INCLUDE_ASM("span_1000", func_80084B90);
#include "game/sys_80076000.h"
static inline s32 level_point_in_radius(f32 y, f32 x, SceneView *view) {
    f32 dy = view->x - y;
    f32 dx = view->z - x;
    if (dy * dy + dx * dx < (f32)D_801C9174) return 1;
    return 0;
}
void func_80084CC4(Scene *scene, s32 model, void *matrix, void *anchor, s32 layer, s32 phase, f32 *pos, f32 radius)
{
    f32 y;
    s32 count = func_8007AAA0();
    s32 i;
    SceneView *view;
    for (i = 0; i < count; i++) {
        y = pos[1];
        view = &scene->views[i];
        if (level_point_in_radius(y, pos[0], view) && func_800941E0(pos[1], pos[0], radius, view) == 0) {
            func_800824E4(scene, model, matrix, anchor, layer, phase, i);
        }
    }
}

INCLUDE_ASM("span_1000", func_80084DF4);
#include "game/sys_80076000.h"

void func_80084F4C(void *table, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6,
                              s32 a7) {
    func_80082D60(table, a1, a2, a3, a4, a5, a6, a7, 0xF);
}

INCLUDE_ASM("span_1000", func_80084F90);
#include "shared/bt_gfx.h"
#include "game/sys_80076000.h"
void func_80085290(Gfx *list, s32 count, s32 offset) {
    s32 i;
    for (i = 0; i < count; i++) {
        if (list[i].words.w0 == 0xB8000000) {
            break;
        }
        if ((*(u8 *)&list[i]) == 0x04) {
            list[i].words.w1 += offset;
        }
    }
}

void func_800852E0(Gfx *commands, s32 count, s32 offset) {
    s32 i;
    for (i = 0; i < count; i++) {
        if (commands[i].words.w0 == 0xB8000000) {
            break;
        }
        if ((*(u8 *)&commands[i]) == 0xFD) {
            commands[i].words.w1 += offset;
        }
    }
}

#include "shared/bt_span_1000_code_800824E4.h"
/* Original packets use the classic F3DEX command encoding. */
#undef F3DEX_GBI_2

#include "span_1000/code_800824E4.h"


                          /* unable to generate initializer: unknown type */







/* unable to generate initializer: unknown type */

/* Rewrites matching display-list entries using the paired lookup tables. */
void func_80085330(void *arg0, s32 arg1) {
    s32 *var_a1;
    s32 *var_a2;
    s32 temp_t1;
    s32 var_t0;
    Gfx *var_a0;
    Gfx *var_a3;
    Gfx *base_a1;
    Gfx *base_a2;
    s32 magic;
    s32 replacement0;
    s32 replacement4;

    var_a0 = arg0;
    if (arg1 > 0) {
        /* FAKEMATCH: copy the command constant to steer its load before the loop bound. */
        magic = (u32)G_ENDDL << 24;
        base_a1 = (Gfx *)&D_80125860;
        base_a2 = (Gfx *)&D_801258D8;
        temp_t1 = (s32)((arg1 << 3) + (u32)var_a0);
loop_2:
        if (var_a0->words.w0 != magic) {
            var_t0 = 0;
            var_a3 = var_a0;
            var_a2 = (s32 *)base_a2;
            var_a1 = (s32 *)base_a1;
            do {
                if (((((Gfx *)(var_a1))->words.w0) == var_a3->words.w0) && ((((Gfx *)(var_a1))->words.w1) == var_a3->words.w1)) {
                    replacement0 = ((Gfx *)var_a2)->words.w0;
                    replacement4 = ((Gfx *)var_a2)->words.w1;
                    var_a3->words.w0 = replacement0; /* GBI_RAW: computed opcode; operand can spill across parameter boundaries; runtime lookup packet copy. */
                    var_a3->words.w1 = replacement4; /* GBI_RAW: computed opcode; operand can spill across parameter boundaries; runtime lookup packet copy. */
                }
                var_a2 = (s32 *)((Gfx *)var_a2 + 1);
                var_t0 += 1;
                var_a1 = (s32 *)((Gfx *)var_a1 + 1);
            } while (var_t0 < 0xF);
            var_a0 = var_a0 + 1;
            if ((s32) var_a0 < temp_t1) {
                goto loop_2;
            }
        }
    }
}

INCLUDE_ASM("span_1000", func_800853C8);
#include "shared/bt_span_1000_code_800824E4.h"

/* func_80085460 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_80085460(void) {
}

/* func_80085468 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_80085468(void) {
}

INCLUDE_ASM("span_1000", func_80085470);
INCLUDE_ASM("span_1000", func_80085978);
INCLUDE_ASM("span_1000", func_80085B4C);
INCLUDE_ASM("span_1000", func_80085C68);
INCLUDE_ASM("span_1000", func_80085D84);
INCLUDE_ASM("span_1000", func_80085DE4);
INCLUDE_ASM("span_1000", func_80085E18);
#include "game/sys_80076000.h"
void func_800862B4(void)
{
    s32 value = D_80125858;
    if (value >= 1801) {
        D_80125858 = value - 100;
        D_801C9174 = (value - 100) * (value - 100);
    }
}

void func_800862E8(void) {
    if (D_80125858 < func_80086AE8()) {
        D_80125858 += 50;
        D_801C9174 = D_80125858 * D_80125858;
    }
}

