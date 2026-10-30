#ifndef SHARED_BT_SPAN_1000_CODE_800A9FC4_H
#define SHARED_BT_SPAN_1000_CODE_800A9FC4_H
#include <ultra64.h>
#include "shared/bt_gfx.h"




/* Texture metadata and command buffers shared by the table loaders. */
typedef struct FrameTexture TextureInfo;
typedef struct TextureTable {
    TextureInfo *info;
    void *images;
} TextureTable;
typedef FrameState RenderFrame;
void *func_800AB520(u32 table, u16 index);
TextureInfo *func_800AB61C(s32 table);
void *func_800AB614(u32 table, u16 index);



extern void func_800ABFA0(void);











extern void func_800AA328(s32 arg0, s32 arg1, s32 arg2);


extern void func_800AA280(s32 arg0, s32 arg1, s32 arg2);


extern void func_800AB200(void);









#endif
