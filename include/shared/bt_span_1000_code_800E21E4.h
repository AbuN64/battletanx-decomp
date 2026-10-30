#ifndef SHARED_BT_SPAN_1000_CODE_800E21E4_H
#define SHARED_BT_SPAN_1000_CODE_800E21E4_H
#include <ultra64.h>
#include "shared/bt_unit.h"
extern s32 func_800E2620(CombatUnit *unit);


extern s32 func_800E2614(CombatUnit *unit);


extern void func_800E3480(int *p);



















typedef struct DriveCommand { s32 mode; f32 turn, drive; s8 buttons[5]; } DriveCommand;
/* What a unit has picked: a mode, the point it aims at and the unit it follows. */
#include "shared/bt_span_1000_code_8008B1F0.h"
struct CombatUnit;
typedef struct TargetSelection {
    s32 mode;
    f32 *target;
    PointZX point;
    struct CombatUnit *unit;
    s32 value14;
} TargetSelection;
#endif
