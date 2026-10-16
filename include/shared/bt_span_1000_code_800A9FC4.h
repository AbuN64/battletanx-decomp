#ifndef UNBAKE_SPAN_1000_CODE_800A9FC4_H
#define UNBAKE_SPAN_1000_CODE_800A9FC4_H
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"
struct func_800AA280_S1_Shared800AA280;

struct func_800AA280_S1_Shared800AA280 {
    void * unk0;
    char pad0[0x14 - 0x0 - sizeof(void*)];
    u16 unk14;
};



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


struct func_800AA328_S1_Shared800AA328;

struct func_800AA328_S1_Shared800AA328 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x14 - 0x4 - sizeof(void*)];
    u16 unk14;
};


struct func_800AA328_S1_Shared800AA328;

typedef struct func_800AA328_S1_Shared800AA328 func_800AA328_S1_Shared800AA328;


struct func_800AA280_S1_Shared800AA280;

typedef struct func_800AA280_S1_Shared800AA280 func_800AA280_S1_Shared800AA280;


extern void func_800AA328(int arg0, int arg1, int arg2);


extern void func_800AA280(int arg0, int arg1, int arg2);


extern void func_800AB200(void);









#endif
