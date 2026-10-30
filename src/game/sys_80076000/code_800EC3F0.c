#include "include_asm.h"

#include <ultra64.h>
#include "game/sys_80076000.h"


s32 func_800EC3F0(void) {
    return D_8013790C[D_80137904];
}

void func_80077930(s32 arg0, s32 arg1, s32 arg2);
s32 func_800EC410(void) {
    u32 rom;
    s32 i;

    switch (D_80137904) {
    case 1:
        rom = (u32)D_B0334630;
        break;
    case 2:
        rom = (u32)D_B0348DB0;
        break;
    case 4:
        rom = (u32)D_B03747F0;
        break;
    case 5:
        rom = (u32)D_B0380670;
        break;
    case 6:
        rom = (u32)D_B0383CC0;
        break;
    case 7:
        rom = (u32)D_B038BBE0;
        break;
    case 8:
        rom = (u32)D_B03A0820;
        break;
    case 9:
        rom = (u32)D_B03B9630;
        break;
    case 10:
        rom = (u32)D_B03C1550;
        break;
    case 3:
    case 11:
        rom = (u32)D_B0364100;
        break;
    case 0:
    default:
        rom = (u32)D_B0319B30;
        break;
    }
    func_80077930(rom, &D_8033B600, sizeof(DemoHeader));
    D_8033B5F4 = D_8033B600.objectCount * 12 + 0x30;
    D_8033B618 = func_80081A78(D_8033B5F4 * D_8033B600.frameCount + D_8033B600.trailerCount * 12);
    if (D_8033B618 == 0) {
        return -1;
    }
    func_80077930(rom + sizeof(DemoHeader), D_8033B618,
                 D_8033B5F4 * D_8033B600.frameCount + D_8033B600.trailerCount * 12);
    D_8033B5F0 = 0;
    D_8033B624 = 0;
    D_80137900 = 1;
    D_8033B61C = (f32 (*)[3])D_8033B618;
    D_8033B620 = D_8033B618 + D_8033B5F4 * D_8033B600.frameCount;
    for (i = 0; i < D_8033B600.trailerCount; i++) {
    }
    if (D_8033B600.trailerCount == 0) {
        D_8033B624 = -1;
    }
    D_8033B628 = -1;
    func_800ECBA8();
    return 0;
}

INCLUDE_RODATA("span_1000", D_800749E0);
INCLUDE_DATA("span_1000", D_800749E4);
INCLUDE_DATA("span_1000", D_800749E8);
#include "game/sys_80076000.h"


s32 func_800EC644(void) {
    return D_80137900;
}

s32 func_800EC654(void) {
    return (D_80137900 != 0) * 2;
}

s32 func_800EC668(s32 arg0) {
    if (D_80137900 == 0) {
        return 0;
    }
    switch (arg0) {
    case 0:
        return D_8033B608;
    case 1:
        return D_8033B604 - D_8033B608;
    default:
        return 0;
    }
}

s32 func_800EC6BC(s32 arg0, s32 arg1) {
    if (D_80137900 == 0) {
        return 0;
    }
    switch (arg0) {
    case 0:
        return arg1;
    case 1:
        return arg1 + D_8033B608;
    default:
        return 0;
    }
}

f32 *func_800EC700(s32 index) {
    f32 *result;
    if (D_80137900 != 0) {
        result = D_8033B61C[index + 4];
    } else {
        result = 0;
    }
    return result;
}

u8 func_800EC738(s32 kind)
{
    DemoEvent *event;

    if (D_80137900 != 0 && D_8033B624 >= 0) {
        event = &D_8033B620[D_8033B624];
        if (event->frame == D_8033B5F0 && (event->kind & 0x7F) == kind) {
            return event->value;
        }
        return 0;
    }
    return 0;
}

#include "game/sys_80076000.h"
void func_800EC7A8(f32 out[4][4], s32 offset) {
    s32 i;
    s32 j;
    s32 frame;
    f32 (*src)[3];
    s32 last;
    if (D_80137900 != 0) {
        if (offset == 0) {
            out[0][3] = 0;
            out[1][3] = 0;
            out[2][3] = 0;
            out[3][3] = D_800749E0;
            for (i = 0; i < 4; i++) {
                for (j = 0; j < 3; j++) {
                    out[i][j] = D_8033B61C[i][j];
                }
            }
            return;
        }
        frame = D_8033B5F0 + offset;
        last = D_8033B600.frameCount - 1;
        if (frame > last) {
            frame = last;
        }
        src = (f32 (*)[3])(D_8033B618 + frame * D_8033B5F4);
        out[0][3] = 0;
        out[1][3] = 0;
        out[2][3] = 0;
        out[3][3] = D_800749E4;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                out[i][j] = src[i][j];
            }
        }
    }
}

INCLUDE_ASM("span_1000", func_800EC8C4);
#include "game/sys_80076000.h"


void func_800ECB34(void) {
    if (D_8033B628 == -1) {
        D_8033B62C = 0x10;
        D_8033B628 = D_8033B5F0;
    }
}

void *func_800ECB68(s32 index)
{
    void *result;
    if (D_80137900 != 0) {
        result = D_8033B610[index];
    } else {
        result = 0;
    }
    return result;
}

#include "game/sys_80076000.h"


s32 func_800ECB98(void) {
    return D_80137908;
}

void func_800ECBA8(void) {
    switch (D_80137904) {
    case 2:
    case 3:
    case 11:
        D_80137908 = 0x11;
        break;
    case 7:
        D_80137908 = 0x18;
        break;
    }
}
