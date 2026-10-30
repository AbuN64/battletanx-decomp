#include "include_asm.h"

#include <ultra64.h>
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
#include "game/sys_80076000.h"
void func_800AA518(u32 table, u16 index)
{
    RenderFrame *frame = func_8007F060();
    void *texture = func_800AB520(table, index);
    TextureInfo *info;
    if (texture != 0) {
    info = func_800AB61C(table);
    frame->texture = info;
    switch (info->siz) {
    case G_IM_SIZ_4b:
        if (info->fmt == G_IM_FMT_CI) {
            void *palette = func_800AB614(table, index);
            gSPSetOtherMode(frame->overlay++, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, G_TT_RGBA16);
            gDPLoadTLUT_pal16(frame->overlay++, 0, palette);
        }
        gDPLoadTextureBlock_4b(frame->overlay++, texture, info->fmt, info->width, info->height, 0, G_TX_MIRROR,
                               G_TX_MIRROR, info->masks, info->maskt, G_TX_NOLOD, G_TX_NOLOD);
        break;
    case G_IM_SIZ_8b:
        gDPLoadTextureBlock(frame->overlay++, texture, info->fmt, G_IM_SIZ_8b, info->width, info->height, 0,
                            G_TX_NOMIRROR, G_TX_NOMIRROR, 0, 0, G_TX_NOLOD, G_TX_NOLOD);
        break;
    case G_IM_SIZ_16b:
        gDPLoadTextureBlock(frame->overlay++, texture, info->fmt, G_IM_SIZ_16b, info->width, info->height, 0,
                            G_TX_NOMIRROR, G_TX_NOMIRROR, 0, 0, G_TX_NOLOD, G_TX_NOLOD);
        break;
    case G_IM_SIZ_32b:
        gDPLoadTextureBlock(frame->overlay++, texture, info->fmt, G_IM_SIZ_32b, info->width, info->height, 0,
                            G_TX_NOMIRROR, G_TX_MIRROR, 0, 0, G_TX_NOLOD, G_TX_NOLOD);
        break;
    }
    } else {
        frame->texture = 0;
    }
}

static inline void load_tile_4b(RenderFrame *frame, TextureInfo *info, void *texture, s32 tmem, s32 rtile)
{
    gDPSetTextureImage(frame->overlay++, info->fmt, G_IM_SIZ_8b, info->width >> 1, texture);
    gDPSetTile(frame->overlay++, info->fmt, G_IM_SIZ_8b, (((info->width >> 1) + 7) >> 3), tmem,
        G_TX_LOADTILE, 0, G_TX_MIRROR, 6, 0, G_TX_MIRROR, 6, 0);
    gDPLoadSync(frame->overlay++);
    gDPLoadTile(frame->overlay++, G_TX_LOADTILE, 0, 0, (info->width - 1) << 1, (info->height - 1) << 2);
    gDPPipeSync(frame->overlay++);
    gDPSetTile(frame->overlay++, info->fmt, G_IM_SIZ_4b, (((info->width >> 1) + 7) >> 3), tmem,
        rtile, 0, G_TX_MIRROR, 6, 0, G_TX_MIRROR, 6, 0);
    gDPSetTileSize(frame->overlay++, rtile, 0, 0, (info->width - 1) << 2, (info->height - 1) << 2);
}

static inline void load_tile_8b(RenderFrame *frame, TextureInfo *info, void *texture, s32 tmem, s32 rtile)
{
    gDPSetTextureImage(frame->overlay++, info->fmt, G_IM_SIZ_8b, info->width, texture);
    gDPSetTile(frame->overlay++, info->fmt, G_IM_SIZ_8b, ((info->width + 7) >> 3), tmem,
        G_TX_LOADTILE, 0, 0, 0, 0, 0, 0, 0);
    gDPLoadSync(frame->overlay++);
    gDPLoadTile(frame->overlay++, G_TX_LOADTILE, 0, 0, (info->width - 1) << 2, (info->height - 1) << 2);
    gDPPipeSync(frame->overlay++);
    gDPSetTile(frame->overlay++, info->fmt, G_IM_SIZ_8b, ((info->width + 7) >> 3), tmem,
        rtile, 0, 0, 0, 0, 0, 0, 0);
    gDPSetTileSize(frame->overlay++, rtile, 0, 0, (info->width - 1) << 2, (info->height - 1) << 2);
}


void func_800AACCC(u32 table, u16 index, s32 tile)
{
    RenderFrame *frame = func_8007F060();
    void *texture = func_800AB520(table, index);
    TextureInfo *info;

    if (texture != 0) {
        info = func_800AB61C(table);
        frame->texture = info;
        if ((u16)tile < 2) {
            if (info->siz == 0) {
                load_tile_4b(frame, info, texture, (s16)tile * 256, (s16)tile);
            } else if (info->siz == 1) {
                load_tile_8b(frame, info, texture, (s16)tile * 256, (s16)tile);
            }
        }
    } else {
        frame->texture = 0;
    }
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800AB0A4(f32 scaleX, f32 scaleY) {
    Unknown800AB0A4_1 *frame = func_8007F060();
    Unknown800AB0A4 *source = frame->value28;

    if (source != 0) {
        f32 width = source->value04 * scaleX;
        f32 height = source->value06 * scaleY;

        frame->value1A = (s32)width << 6;
        frame->value1C = (s32)height << 6;
    }
}
void func_800AB128(void)
{
    Unknown80078CF8 *record = func_8007F060();
    Unknown800AB128 *command = record->value04++;
    command->value00 = 0xE7000000;
    command->value04 = 0;
}
Unknown800AB15C *func_800AB15C(void)
{
    Unknown800AB15C_1 *record = func_8007F060();

    if (record->value24 == 0) {
        record->value24 = record->value04++;
        return record->value04;
    }
    return 0;
}
INCLUDE_ASM("span_1000", func_800AB1A0);
