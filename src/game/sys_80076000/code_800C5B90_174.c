#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800E0B00.h"



s32 func_800E2D40(void *arg)
{
    CombatUnit *member = arg;
    f32 distance;

    switch ((u32)member->state) {
    case 6:
        distance = func_800E1A20(member, member->targetPoint);
        break;
    case 7:
        distance = func_800E1A20(member, member->targetPoint);
        break;
    case 5:
        distance = func_800E0D54(member->position, member->leader->position);
        break;
    default:
        distance = D_auto_800745D0;
        break;
    }
    return distance < member->status;
}

