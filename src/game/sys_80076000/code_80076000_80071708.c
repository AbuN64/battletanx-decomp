#include "include_asm.h"

#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800F29F0.h"
s32 func_80088590(s32 kind) {
    if (D_auto_80134E68 != 0) {
        switch (kind) {
            case 5:
            case 6:
            case 7:
            case 9:
            case 10:
            case 13:
            case 14:
            case 16:
                switch (func_800F38F4() % 11) {
                    case 0:
                    case 1:
                    case 2:
                        return 0;
                    case 3:
                    case 4:
                        return 3;
                    case 5:
                    case 6:
                        return 2;
                    case 7:
                        return 4;
                    case 8:
                        return 8;
                    case 9:
                        return 12;
                    case 10:
                        return 15;
                }
                break;
        }
    }
    return kind;
}

INCLUDE_DATA("span_1000", D_80071764);
INCLUDE_ASM("span_1000", func_80088670);
INCLUDE_ASM("span_1000", func_80088CF0);
