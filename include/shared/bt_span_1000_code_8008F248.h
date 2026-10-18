#ifndef UNBAKE_SPAN_1000_CODE_8008F248_H
#define UNBAKE_SPAN_1000_CODE_8008F248_H
#include "shared/bt_types.h"
#include "shared/bt_common_draft_fields_func_800907CC_us.h"
extern void func_800916B8(void * arg0, void * arg1, int arg2, void * arg3, void * arg4);


extern int func_80090F10(void);


extern int func_800907CC(int arg0, int arg1, int arg2, unsigned short arg3, int arg4, int arg5, int arg6, int arg7, signed char arg8);





struct func_80091608_Object_Shared80091608;
typedef struct func_80091608_Object_Shared80091608 func_80091608_Object_Shared80091608;
typedef struct func_80091608_Output_Shared80091608 func_80091608_Output_Shared80091608;
typedef struct func_80091608_Status_Shared80091608 func_80091608_Status_Shared80091608;

struct func_80091608_Output_Shared80091608;

struct func_80091608_Status_Shared80091608;







struct func_80091608_Object_Shared80091608 {
    char pad0[0x18];
    s32 unk18;
    char pad18[4];
    u8 unk20;
    char pad20[0xB];
    s32 unk2C;
};
struct func_80091608_Output_Shared80091608 {
    s32 code;
    s32 value;
};
struct func_80091608_Status_Shared80091608 {
    char pad0[8];
    s32 unk8;
    s32 unkC;
};
#endif
