#ifndef BT_PLAYER_H
#define BT_PLAYER_H
#include "shared/bt_gfx.h"
#include "shared/bt_camera.h"
/* Four 0x348-byte player records; initialized by the player setup routine. */
typedef struct PlayerRecord {
    s16 unitIds[5];
    u16 reserved00A;
    s32 id;
    s32 state;
    u8 value014, value015;
    u16 type;
    s32 active, value01C;
    s16 selectedUnit;
    u8 count, value023, value024, value025;
    u16 value026;
    s32 counter, value02C, value030, kills;
    u8 maxUnits, reserved039;
    u16 roundKills, value03C;
    s16 value03E, value040, value042;
    u16 soundMode, reserved046;
    AttachedCamera camera;
    s32 value0EC;
    u8 value0F0, reserved0F1[3];
    s32 value0F4, value0F8, value0FC;
    ViewMatrix matrix;
    f32 value144, value148;
    s32 value14C;
    f32 transform[4][4];
    f32 aggressiveness, intelligence;
    s32 timerRange[2];
    f32 railSpeed;
    u8 reverseRail, value1A5, isAi, reserved1A7;
    u16 objectiveId;
    s16 linkedId;
    u16 killCount;
    u8 team, chainActive;
    f32 z, x;
    void *group;
    u8 value1BC, value1BD, value1BE, soundClass;
    u32 controlFlags[5];
    u8 reserved1D4[0x30];
    u8 locked, reserved205[3];
    s32 value208, value20C, value210, value214;
    s32 messageColor, messageExpireTick;
    char messageLine0[32], messageLine1[32];
    u8 reserved260[0xA0];
    s32 respawnTick, respawnDelay;
    u8 value308, value309;
    u16 reserved30A;
    s32 value30C;
    f32 offense, defense, resurrection, aiSpeed, aiFireRate;
    f32 railFireRate, offRailFireRate, railSpeedTuning, aggressivenessTuning, intelligenceTuning;
    s16 gunDamage[4], gunFireRate[4];
} PlayerRecord;

#endif
