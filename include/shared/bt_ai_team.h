#ifndef BT_AI_TEAM_H
#define BT_AI_TEAM_H
#include "shared/bt_types.h"
#include "shared/bt_unit.h"
#include "shared/bt_player.h"
typedef struct AiGroup {
    s16 entityIds[3];
    u16 entityCount;
    s16 unitIds[15];
    u16 unitCount;
} AiGroup;
typedef struct AiTeam { AiGroup own, allies; u8 active; } AiTeam;
typedef struct AiScoreContext {
    u16 unitId;
    CombatUnit *unit;
    PlayerRecord *player;
    void *target;
    s32 memberPlay, slotPlay;
} AiScoreContext;
extern void func_800E5328(u16 teamCount, AiTeam *teams);
#endif
