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
extern AiTeam D_8033A980[];
/* The per-unit AI state: its team, player and unit, the unit's selection and callback queue. */
typedef struct AiUnitContext {
    AiTeam *team;
    PlayerRecord *player;
    CombatUnit *unit;
    s32 *selection;
    u32 *queue;
    s32 mode;
    s16 unitId;
    s16 playerId;
    u8 teamId;
    u8 reserved1D[3];
    f32 value20;
    u8 reserved24[0x1C];
    s32 value40;
    s32 value44;
} AiUnitContext;
#endif
