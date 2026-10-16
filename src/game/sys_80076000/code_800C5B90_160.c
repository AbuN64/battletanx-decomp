#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_types.h"
#include "shared/bt_unit.h"



static inline void clear_unit_pairing(UnitPairing *p) {
    p->flags[0] = 0;
    p->flags[1] = 0;
    p->flags[2] = 0;
    p->flags[3] = 0;
    p->value = 0;
    p->state = 0;
}
static inline void restart_paired_unit(CombatUnit *unit) {
    func_800E986C(unit, 0x1002, 1.0f);
    unit->startTick = func_8007B1DC();
}
void func_800E5BA0(s32 arg0, s32 arg1) {
    s16 i;
    u16 j;

    if (arg0 != 0) {
        i = 0;
        do {
            CombatUnit *unit = func_800A03B8(i);
            if (unit->visible != 0) {
                unit->value34A = 1;
            }
            i++;
        } while (i < 20);
    }
    if (arg1 != 0) {
        i = 0;
        do {
            func_800E986C(func_800A03B8(i), 0x1002, 0);
            i++;
        } while (i < 20);
    }
    j = 0;
    if (D_auto_8033B448 != 0) {
        do {
            UnitPairing *p = &D_auto_8033AAE8[j];
            if (p->connected != 0) {
                if (arg0 != 0) {
                    func_800E56B0(p);
                }
            } else if (arg1 != 0) {
                CombatUnit *a = func_800A03B8(p->first);
                CombatUnit *b = func_800A03B8(p->second);
                if (a->visible == 0) {
                    clear_unit_pairing(p);
                } else if (((a->flags & 4) && (b->flags & 4)) ||
                           (func_auto_800E3470(a) != 0 && func_auto_800E3470(b) != 0)) {
                    clear_unit_pairing(p);
                    p->flags[0] = 1;
                    p->flags[3] = 1;
                } else {
                    func_800E56B0(p);
                    if (p->flags[1] != 0) {
                        restart_paired_unit(a);
                        restart_paired_unit(b);
                    }
                }
            }
            j++;
        } while (j < D_auto_8033B448);
    }
}
