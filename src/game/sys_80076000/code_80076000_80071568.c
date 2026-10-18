#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
const char *func_800863F4(u32 level) {
    switch (level) {
        case 0:
            return "Cinematic";
        case 1:
            return "Bronx";
        case 2:
            return "Tunnel";
        case 3:
            return "TimesSquare";
        case 4:
            return "NyBridge";
        case 5:
            return "NyBonus";
        case 6:
            return "Highway";
        case 7:
            return "Lakeshore";
        case 8:
            return "StateSt";
        case 9:
            return "ChBonus";
        case 10:
            return "Desert";
        case 11:
            return "Area51";
        case 12:
            return "FremontSt";
        case 13:
            return "LvBonus";
        case 14:
            return "SfBridge";
        case 15:
            return "Wharf";
        case 16:
            return "QZone";
        case 17:
            return "SfBonus";
        case 18:
            return "MPWharf";
        case 19:
            return "MPMissile";
        case 20:
            return "Spare1";
        case 21:
            return "Spare2";
        case 22:
            return "Spare3";
        case 23:
            return "Spare4";
        case 24:
            return "Test1";
        case 25:
            return "Test2";
        case 26:
            return "Test3";
        case 27:
            return "Test4";
    }
    return 0;
}

INCLUDE_DATA("span_1000", D_800716D8);
INCLUDE_ASM("span_1000", func_800865E0);
#include "shared/bt_types.h"
#include "span_1000/code_8007A470.h"
#include "game/sys_80076000.h"
s16 func_80086AE8(void)
{
    return D_auto_80125A30[func_8007AAF4()->unk4];
}

INCLUDE_ASM("span_1000", func_80086B1C);
