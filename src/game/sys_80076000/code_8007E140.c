#include "include_asm.h"

#include "shared/audio_callbacks.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8007C700.h"



              /* size 0x0 */

void func_8007E140(void *arg0) {
    D_801257D0 = arg0;
}

INCLUDE_ASM("span_1000", func_8007E150);
INCLUDE_ASM("span_1000", func_8007E18C);
INCLUDE_ASM("span_1000", func_8007E1E4);
INCLUDE_ASM("span_1000", func_8007E248);
INCLUDE_ASM("span_1000", func_8007E320);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
#include "shared/bt_records.h"
#include "shared/bt_externs.h"

u32 func_8007E41C(s32 source, u8 flags, u16 perspNorm) {
    Unknown8007E41C_1 *state = D_801257D0;
    u32 matrix;

    matrix = 0;
    if (state->valueE8 < ((Unknown8007E41C *)(state->valueD0 * sizeof(Unknown8007E41C) + (u8 *)state->valueA0))->value04 + 0xC000) {
        u32 *cmd;
        u32 *normCmd;

        normCmd = state->valueD8;
        state->valueD8 = normCmd + 2;
        normCmd[0] = 0xBC00000E;
        normCmd[1] = perspNorm;
        func_801146A0(source, state->valueE8);
        cmd = state->valueD8;
        state->valueD8 = cmd + 2;
        cmd[0] = (flags << 16) | 0x01000040;
        cmd[1] = state->valueE8 - 0x80000000;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    }
    return matrix;
}
u32 func_8007E4F4(u32 source, u8 flags, u16 perspNorm)
{
    Unknown8007E41C_1 *state = D_801257D0;
    u32 matrix = 0;

    if (state->valueE8 < ((Unknown8007E41C *)(state->valueD0 * sizeof(Unknown8007E41C) + (u8 *)state->valueA0))->value04 + 0xC000) {
        u32 *cmd;
        u32 *persp;

        persp = state->valueDC;
        state->valueDC = persp + 2;
        persp[0] = 0xBC00000E;
        persp[1] = perspNorm;
        func_801146A0(source, state->valueE8);
        cmd = state->valueDC;
        state->valueDC = cmd + 2;
        cmd[0] = (flags << 16) | 0x01000040;
        cmd[1] = state->valueE8 - 0x80000000;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    }
    return matrix;
}
INCLUDE_ASM("span_1000", func_8007E5CC);
void func_8007E694(Unknown8007E694_1 *matrix, u8 params) {
    Unknown8007E694 *ctx = D_801257D0;
    Unknown8007E41C *bank = &ctx->value90[ctx->valueD0];
    u32 addr = matrix->value40;
    u32 *cmd;

    if (addr == 0) {
        if (ctx->valueE8 >= bank->value14 + 0xC000) {
            return;
        }
        func_801146A0(matrix, ctx->valueE8);
        addr = ctx->valueE8;
        matrix->value40 = addr;
        ctx->valueE8 += 0x40;
    }
    cmd = ctx->valueDC;
    ctx->valueDC = cmd + 2;
    cmd[0] = (params << 16) | 0x01000040;
    cmd[1] = addr - 0x80000000;
}
void func_8007E75C(Unknown8007E75C_1 *source, u8 flags) {
    Unknown8007E75C *state = D_801257D0;
    Unknown8007E41C *bank = &state->value90[state->valueD0];
    u32 matrix = source->value40;
    u32 *cmd;

    if (matrix == 0) {
        if (state->valueE8 >= bank->value14 + 0xC000) {
            return;
        }
        func_801146A0(source, state->valueE8);
        matrix = state->valueE8;
        source->value40 = matrix;
        state->valueE8 += 0x40;
    }
    cmd = state->valueD8;
    state->valueD8 = cmd + 2;
    cmd[0] = (flags << 16) | 0x01000040;
    cmd[1] = matrix - 0x80000000;
}
void func_8007E824(Unknown8007E694_1 *matrix, u8 params) {
    u32 addr = matrix->value40;
    Unknown8007E694 *ctx = D_801257D0;
    Unknown8007E41C *bank = &ctx->value90[ctx->valueD0];
    u32 *cmd;

    if (addr == 0) {
        if (ctx->valueE8 >= bank->value14 + 0xC000) {
            return;
        }
        func_801146A0(matrix, ctx->valueE8);
        addr = ctx->valueE8;
        matrix->value40 = addr;
        ctx->valueE8 += 0x40;
    }
    cmd = ctx->valueDC;
    ctx->valueDC = cmd + 2;
    cmd[0] = (params << 16) | 0x01000040;
    cmd[1] = addr - 0x80000000;
}
INCLUDE_ASM("span_1000", func_8007E8EC);
void func_8007E9C8(Unknown8007E9C8_1 *proj, u16 perspNorm) {
    Unknown8007E9C8 *state = D_801257D0;
    Unknown8007E41C *bank = &state->value90[state->valueD0];
    u32 matrix = proj->value40;
    u32 *cmd;
    u32 *cmd2;

    if (matrix == 0) {
        if (state->valueE8 >= bank->value14 + 0xC000) {
            return;
        }
        func_801146A0(proj, state->valueE8);
        matrix = state->valueE8;
        proj->value40 = matrix;
        state->valueE8 += 0x40;
    }
    cmd = state->valueDC;
    state->valueDC = cmd + 2;
    cmd[0] = 0xBC00000E;
    cmd[1] = perspNorm;
    cmd2 = state->valueDC;
    state->valueDC = cmd2 + 2;
    cmd2[0] = 0x01030040;
    cmd2[1] = matrix - 0x80000000;
}
INCLUDE_ASM("span_1000", func_8007EAA4);
INCLUDE_ASM("span_1000", func_8007EB04);
INCLUDE_ASM("span_1000", func_8007EB64);
INCLUDE_ASM("span_1000", func_8007EBA0);
void func_8007EBDC(u32 matrix, u8 flags, u16 perspNorm)
{
    Unknown8007EBDC *state = D_801257D0;
    u32 *cmd;
    u32 *cmd2;

    cmd = state->valueD8;
    state->valueD8 = cmd + 2;
    cmd[0] = 0xBC00000E;
    cmd[1] = perspNorm;
    cmd2 = state->valueD8;
    state->valueD8 = cmd2 + 2;
    cmd2[0] = (flags << 16) | 0x01000040;
    cmd2[1] = matrix - 0x80000000;
}
u32 func_8007EC38(u32 source, u8 flags) {
    Unknown8007E41C_1 *state = D_801257D0;
    u32 matrix;
    u32 cursor;

    cursor = state->valueE8;
    matrix = 0;
    if (((Unknown8007E41C *)(state->valueD0 * sizeof(Unknown8007E41C) + (u8 *)state->valueA0))->value04 + 0xC000 > cursor) {
        u32 *cmd;

        func_801146A0(source, cursor);
        cmd = state->valueD8;
        state->valueD8 = cmd + 2;
        cmd[0] = (flags << 16) | 0x01000040;
        cmd[1] = state->valueE8 - 0x80000000;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    }
    return matrix;
}
u32 func_8007ECE8(s32 source, s32 flags)
{
    u32 matrix = 0;
    u32 cursor;
    u32 *command;
    Unknown8007ECE8 *state;

    state = D_801257D0;
    do {
        cursor = state->valueE8;
        if (cursor >= (u32)(((Unknown8007E41C *)((state->valueD0 * sizeof(Unknown8007E41C)) + (u32)state + 0x90))->value14 + 0xC000)) {
            break;
        }
        func_801146A0(source, cursor);
        command = state->valueDC;
        state->valueDC = command + 2;
        command[0] = ((flags & 0xFF) << 16) | 0x01000040;
        command[1] = state->valueE8 - 0x80000000U;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    } while (0);
    return matrix;
}
u32 func_8007ED98(s32 source, s32 flags)
{
    u32 matrix = 0;
    u32 cursor;
    u32 *command;
    Unknown8007ECE8 *state;

    state = D_801257D0;
    do {
        cursor = state->valueE8;
        if (cursor >= (u32)(((Unknown8007E41C *)((state->valueD0 * sizeof(Unknown8007E41C)) + (u32)state + 0x90))->value14 + 0xC000)) {
            break;
        }
        func_801146A0(source, cursor);
        command = state->valueD8;
        state->valueD8 = command + 2;
        command[0] = ((flags & 0xFF) << 16) | 0x01000040;
        command[1] = state->valueE8 - 0x80000000U;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    } while (0);
    return matrix;
}
u32 func_8007EE48(u32 source, u8 flags) {
    Unknown8007E41C_1 *state = D_801257D0;
    u32 matrix;
    u32 cursor;

    cursor = state->valueE8;
    matrix = 0;
    if (((Unknown8007E41C *)(state->valueD0 * sizeof(Unknown8007E41C) + (u8 *)state->valueA0))->value04 + 0xC000 > cursor) {
        u32 *cmd;

        func_801146A0(source, cursor);
        cmd = state->valueDC;
        state->valueDC = cmd + 2;
        cmd[0] = (flags << 16) | 0x01000040;
        cmd[1] = state->valueE8 - 0x80000000;
        matrix = state->valueE8;
        state->valueE8 = matrix + 0x40;
    }
    return matrix;
}
INCLUDE_ASM("span_1000", func_8007EEF8);
INCLUDE_ASM("span_1000", func_8007EF1C);
INCLUDE_ASM("span_1000", func_8007EF40);
INCLUDE_ASM("span_1000", func_8007EF64);
INCLUDE_ASM("span_1000", func_8007EFB8);
INCLUDE_ASM("span_1000", func_8007F00C);
#include "shared/bt_types.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8007EBA0.h"



              /* size 0x0 */

void *func_8007F030(void) {
    return D_801257D0 + 0xD8;
}

INCLUDE_ASM("span_1000", func_8007F040);
#include "shared/bt_types.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8007EBA0.h"

void *func_8007F060(void) {
    return D_801257D0 + 0xD8;
}

INCLUDE_ASM("span_1000", func_8007F070);
INCLUDE_ASM("span_1000", func_8007F204);
INCLUDE_ASM("span_1000", func_8007F29C);
INCLUDE_ASM("span_1000", func_8007F2A0);
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "shared/bt_types.h"












#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "span_1000/code_8007EBA0.h"


                                /* extern */
                                /* extern */
                                /* extern */
                         /* extern */
                         /* extern */
                         /* extern */
                        /* extern */
                           /* extern */

/* Initialize resources and game objects. */
void func_8007FF68(void) {
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_s1;
    PlayerRecord *player;
    AttachedCamera *camera;
    temp_v0 = func_8007AAA0();
    var_s1 = 0;
    if (temp_v0 > 0) {
        do {
            player = func_800A6688(var_s1 & 0xFFFF);
            camera = func_800A424C(player);
            var_s1 += 1;
            camera->view.fixed = 0;
            player->matrix.fixed = 0;
        } while ((var_s1 & 0xFFFF) < temp_v0);
    }
    temp_v0_4 = func_800821C0();
    if (temp_v0_4 != 0) {
        func_8008228C(temp_v0_4);
        if (func_80081A30() & 0xFF) {
            func_80083394(temp_v0_4);
            return;
        }
        func_80083F04(temp_v0_4);
    }
}

#include "shared/bt_types.h"
#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "shared/bt_span_1000_code_800F45C8.h"
#include "shared/bt_gfx.h"
#undef F3DEX_GBI_2

#include "shared/bt_gbi.h"
#include "span_1000/code_8007EBA0.h"
#include "game/sys_80076000.h"




s32 func_8008001C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    u32 next;
    D_801B6C00 = (void *)(D_801B4C00 + (D_801257F5 << 10));
    if (arg4) {
        func_800F4DFC(&D_801B6C00, 0x22, 0x13, 0xFC, 0x72,
                      arg0 & 0xFF, arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    } else {
        func_800F4DFC(&D_801B6C00, 0, 0, 0x140, 0xF0,
                      arg0 & 0xFF, arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    }
    gSPEndDisplayList(D_801B6C00++);
    func_8007EF40((s32)(D_801B4C00 + (D_801257F5 << 10)));
    next = (D_801257F5 + 1) & 7;
    D_801257F5 = next;
    return next;
}

void func_8008011C(u8 red, u8 green, u8 blue, u8 alpha, s32 viewport)
{
    Gfx *command;

    D_801B6C00 = (Gfx *)(D_801B4C00 + D_801257F5 * 0x400);
    switch (func_8007AAA0()) {
    case 1:
        func_800F4DFC(&D_801B6C00, 0, 0, 320, 240, red, green, blue, alpha);
        break;
    case 2:
        switch (viewport) {
        case 0:
            func_800F4DFC(&D_801B6C00, 0, 0, 320, 119, red, green, blue, alpha);
            break;
        case 1:
            func_800F4DFC(&D_801B6C00, 0, 121, 320, 240, red, green, blue, alpha);
            break;
        }
        break;
    case 3:
        switch (viewport) {
        case 0:
            func_800F4DFC(&D_801B6C00, 0, 0, 320, 119, red, green, blue, alpha);
            break;
        case 1:
            func_800F4DFC(&D_801B6C00, 0, 121, 159, 240, red, green, blue, alpha);
            break;
        case 2:
            func_800F4DFC(&D_801B6C00, 161, 121, 320, 240, red, green, blue, alpha);
            break;
        }
        break;
    case 4:
        switch (viewport) {
        case 0:
            func_800F4DFC(&D_801B6C00, 0, 0, 159, 119, red, green, blue, alpha);
            break;
        case 1:
            func_800F4DFC(&D_801B6C00, 161, 0, 320, 119, red, green, blue, alpha);
            break;
        case 2:
            func_800F4DFC(&D_801B6C00, 0, 121, 159, 240, red, green, blue, alpha);
            break;
        case 3:
            func_800F4DFC(&D_801B6C00, 161, 121, 320, 240, red, green, blue, alpha);
            break;
        }
        break;
    }
    command = D_801B6C00++;
    gSPEndDisplayListF3D(command);
    func_8007EF40(D_801B4C00 + D_801257F5 * 0x400);
    D_801257F5 = (D_801257F5 + 1) & 7;
}

INCLUDE_ASM("span_1000", func_800803A4);
#include "game/sys_80076000.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008011C.h"

void func_8008054C(u8 arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    D_801257F0 = arg0;
    D_801257F1 = arg1;
    D_801257F2 = arg2;
    D_801257F3 = arg3;
    D_801257F4 = arg4;
}

void func_80080580(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = arg4 * 4;
    D_801257E0[temp_v0] = arg0;
    D_801257E1[temp_v0] = arg1;
    D_801257E2[temp_v0] = arg2;
    D_801257E3[temp_v0] = arg3;
}

unsigned char *func_800805C0(void) {
    return &D_801B6C20;
}

/*
 * Returns the constant 0x12320.  The value is built with lui plus ori into
 * $v0, which is how a 32-bit integer constant too large for one immediate is
 * loaded, so the return type is int rather than anything narrower.
 */

int func_800805D0(void) {
    return 0x12320;
}

INCLUDE_ASM("span_1000", func_800805DC);
#include "shared/bt_gbi.h"
#include "shared/bt_gfx.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"
Gfx *func_8008067C(Gfx *src, s32 count, Gfx *next) {
    Gfx *dst;
    if (D_80125800 + count + 1 > 0x400) {
        return next;
    } else {
        s16 used = D_80125800;
        D_80125800 += count + 1;
        dst = &D_801C2F40[D_80125802][used];
        bcopy(src, dst, count * sizeof(Gfx));
        {
            Gfx *g = dst + count;
            _GBI_CMD(g, 0x06010000, (u32)next);
        }
        return dst;
    }
}

INCLUDE_ASM("span_1000", func_80080728);
INCLUDE_ASM("span_1000", func_80080910);
#include "game/sys_80076000.h"
#include "span_1000/code_8007EBA0.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A27D0.h"
void func_80080AA8(s32 layer, ViewMatrix *views, u16 *perspNorms)
{
    s32 lastPlayer;
    u32 lastMatrix;
    s32 playerCount;
    s32 bucketIndex;
    DrawGroup *group;
    DrawItem *item;
    Gfx *lastCommands;
    s32 player;

    lastPlayer = -1;
    lastMatrix = 0;
    playerCount = func_8007AAA0();
    for (bucketIndex = 0; bucketIndex < 32; bucketIndex++) {
        for (group = D_801C0840[layer][bucketIndex]; group != 0; group = group->next) {
            lastCommands = 0;
            func_8007EEF8(group->displayList);
            for (player = 0; player < playerCount; player++) {
                for (item = group->perPlayer[player]; item != 0; item = item->next) {
                    if (player != lastPlayer) {
                        func_8007EEF8(func_800A42A4(func_800A6688((u16)player)));
                        lastPlayer = player;
                        func_8007E8EC(&views[player], perspNorms[player]);
                    }
                    if (item->matrixAddress != lastMatrix) {
                        func_8007EB64(item->matrixAddress, 2);
                        lastMatrix = item->matrixAddress;
                    }
                    if (item->commands != lastCommands && item->commands != 0) {
                        func_8007EF64(1, item->commands);
                        lastCommands = item->commands;
                    }
                    func_8007EEF8(item->displayList);
                }
            }
        }
    }
}

INCLUDE_ASM("span_1000", func_80080C60);
INCLUDE_ASM("span_1000", func_80080EEC);
INCLUDE_ASM("span_1000", func_80081788);
#include "game/sys_80076000.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
void func_80081934(void)
{
    s32 count = func_8007AAA0();
    u16 i;
    for (i = 0; i < count; i++) {
        PlayerRecord *player = func_800A6688(i);
        func_800A424C(player);
        memcpy(D_801C9058[i].matrix, player->matrix.matrix, sizeof(player->matrix.matrix));
        D_801C9058[i].fixed = 0;
    }
    func_80080C60(0, D_801C9058, D_801C9050);
}

#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_types.h"
#include "game/sys_80076000.h"

s32 func_80081A30(void) {
    return (s32) D_80125854;
}

              /* size 0x0 */

void func_80081A40(s32 arg0) {
    D_80125854 = (u8) arg0;
}

int func_80081A50(void) {
    D_801C918C = D_801C9190;
    D_801C9188 = 0xF8240;
}

u8 *func_80081A78(s32 size)
{
    u8 *result;
    size = (size + 7) & ~7;
    if (D_801C9188 < size) {
        return 0;
    }
    result = D_801C918C;
    D_801C9188 -= size;
    D_801C918C = result + size;
    return result;
}

#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008011C.h"



              /* size 0x0 */


s32 func_80081AC0(void) {
    return D_80125850;
}

INCLUDE_ASM("span_1000", func_80081AD0);
#include "game/sys_80076000.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_8008011C.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_types.h"
#include "span_1000/code_8008011C.h"



                 /* size 0x0 */


Scene *func_800821C0(void) {
    return D_801C9170;
}

s32 func_800821D0(struct PolygonPoint *a, struct PolygonPoint *b, s32 mode)
{
    f32 dy;
    f32 dx;
    switch (mode) {
    case 2:
        dy = a->x - b->x;
        dx = a->y - b->y;
        if (D_800714A0 < dy * dy + dx * dx) {
            return 1;
        }
        return 0;
    case 3:
        dy = a->x - b->x;
        dx = a->y - b->y;
        if (D_800714A4 < dy * dy + dx * dx) {
            return 2;
        }
        if (D_800714A8 < dy * dy + dx * dx) {
            return 1;
        }
        return 0;
    default:
        return 0;
    }
}

INCLUDE_ASM("span_1000", func_8008228C);
#include "game/sys_80076000.h"
s32 func_80082458(SceneModelPart *owner, s32 index) {
    if (index >= 0) {
        return (owner->animation & 0x7FF) + index;
    }
    if (index == -1) {
        return (owner->animation & 0x7FF) + D_801B4AA0 % (owner->animation >> 11);
    }
    return (owner->animation & 0x7FF) + (D_801B4AA0 >> 1) % (owner->animation >> 11);
}

INCLUDE_ASM("span_1000", func_800824E4);
INCLUDE_ASM("span_1000", func_800827AC);
INCLUDE_ASM("span_1000", func_80082AA8);
INCLUDE_ASM("span_1000", func_80082D60);
INCLUDE_ASM("span_1000", func_800830DC);
INCLUDE_ASM("span_1000", func_8008332C);
