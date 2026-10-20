#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800DDC60(void) {

}

float func_800DDC68(void) {
    f32 temp_fv1;
    f32 var_fv0;

    temp_fv1 = (f32) D_80125858;
    var_fv0 = D_80074394;
    if (D_80074390 < temp_fv1) {
        var_fv0 = temp_fv1 * D_80074398;
    }
    return var_fv0;
}

#include "shared/bt_span_1000_code_800DAD5C.h"
#include "shared/bt_types.h"
#include "span_1000/code_800DDA08.h"
#include "shared/bt_span_1000_code_800D1AD0.h"
#include "game/sys_80076000.h"

struct Shape_func_800DDCA4;




/* func_800DDCA4 -- initialises a header in place: its data pointer to just past the header, four halfwords to zero and the last to 0xF8; returns the header. */


Shape_func_800DDCA4 *func_800DDCA4(Shape_func_800DDCA4 *arg0) {
    arg0->unk0 = arg0->data;
    arg0->unk4 = 0;
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkA = 0;
    arg0->unkC = 0xF8;
    return arg0;
}

u16 func_800DDCCC(U16HistoryQueue *ring, u16 index) {
    if (index < ring->count) {
        return ring->data[(ring->readIndex + index) % ring->capacity];
    }
    return 0;
}

INCLUDE_ASM("span_1000", func_800DDD30);
INCLUDE_ASM("span_1000", func_800DDDA8);
INCLUDE_ASM("span_1000", func_800DDE88);
INCLUDE_ASM("span_1000", func_800DE098);
INCLUDE_ASM("span_1000", func_800DE0C0);
#include "shared/bt_span_1000_code_800D1AD0.h"

s32 func_800DE1B4(U16HistoryQueue *queue, u16 value) {
    u16 index;
    if (queue->count < queue->capacity) {
        if (queue->count + queue->historyCount == queue->capacity) {
            index = queue->oldestIndex;
            queue->oldestIndex = (index + 1) % queue->capacity;
            queue->historyCount--;
        } else {
            index = (queue->readIndex + queue->count) % queue->capacity;
        }
        queue->data[index] = value;
        queue->count++;
        return 1;
    }
    return 0;
}

u16 func_800DE280(U16HistoryQueue *queue) {
    u16 value;
    u16 index;
    u16 next;
    if (queue->count == 0) {
        return 0;
    }
    index = queue->readIndex;
    next = (index + 1) % queue->capacity;
    value = queue->data[index];
    queue->historyCount++;
    queue->count--;
    queue->readIndex = next;
    return value;
}

INCLUDE_ASM("span_1000", func_800DE2FC);
INCLUDE_ASM("span_1000", func_800DE3EC);
INCLUDE_ASM("span_1000", func_800DE664);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_unit.h"


void func_800DEC04(void) {
    s32 var_v1;
    s8 *var_v0;

    var_v1 = 0xBB7;
    var_v0 = &D_8032900F;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
}

void func_800DEC28(u8 *workspace, u16 index, s32 arg2, u16 increment)
{
    if (increment == 0) {
        workspace[index] = 0;
    } else {
        workspace[index]++;
    }
}

void func_800DEC5C(u8 *slots, CombatUnit *skip, AiGroup *group) {
    s32 i;
    CombatUnit *unit;

    if (group == 0) {
        return;
    }
    for (i = 0; i < group->unitCount; i++) {
        unit = func_800A03B8(group->unitIds[i]);
        if (unit->visible) {
            if (unit != skip) {
                if (!(unit->flags & 4)) {
                    if (func_800E3470(unit) == 0) {
                        slots[unit->slot] = 0;
                    }
                }
            }
        }
    }
}

INCLUDE_ASM("span_1000", func_800DED28);
INCLUDE_ASM("span_1000", func_800DEE8C);
