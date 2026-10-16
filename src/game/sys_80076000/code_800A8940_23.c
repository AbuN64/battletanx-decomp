#include "shared/bt_gbi.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_8007EBA0.h"
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
            gSPSetOtherModeF3D(frame->overlay++, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, G_TT_RGBA16);
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
