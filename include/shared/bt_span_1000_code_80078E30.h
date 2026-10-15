#ifndef UNBAKE_SPAN_1000_CODE_80078E30_H
#define UNBAKE_SPAN_1000_CODE_80078E30_H
#include "shared/bt_types.h"
extern unsigned char *func_80078F60(void);


extern int func_800794C8(void * arg0);






struct func_800793D0_S1_Shared800793D0;
typedef struct func_800793D0_S1_Shared800793D0 func_800793D0_S1_Shared800793D0;
typedef struct func_800793D0_S2_Shared800793D0 func_800793D0_S2_Shared800793D0;

struct func_800793D0_S2_Shared800793D0;





struct func_800793D0_S1_Shared800793D0 {
    char pad0[0x1F4];
    u16 unk1F4;
    char pad1F4[0x1F8 - 0x1F4 - sizeof(u16)];
    s32 unk1F8;
    s32 unk1FC;
    char pad1FC[0x204 - 0x1FC - sizeof(s32)];
    struct func_800793D0_S2_Shared800793D0 * unk204;
};
struct func_800793D0_S2_Shared800793D0 {
    char pad0[0x40];
    s32 unk40;
};
#endif
