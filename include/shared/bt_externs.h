#ifndef SHARED_BT_EXTERNS_H
#define SHARED_BT_EXTERNS_H
#include <ultra64.h>
#include "shared/bt_records.h"
s32 func_80076CA8(s32);
extern void func_80113460(f32 mf[4][4], f32 eyeX, f32 eyeY, f32 eyeZ, f32 atX, f32 atY, f32 atZ,
                           f32 upX, f32 upY, f32 upZ);
extern f32 D_800710B4;
extern void func_800A7744(void *target, s32 value14, s32 zero, s32 value10, u16 flags);
extern void func_801146A0(s32 source, u32 dest);
extern s32 func_80087634(Unknown80087634_1 *bank, s32 set, s32 hold);
extern s16 func_800880B4(Unknown80088280_2 *src, Unknown80088280_3 *dst, s32 index);
extern void func_800A76A0(void *target, void *vector);
extern f32 D_80071CDC;
extern Unknown8008FC9C D_80071C04;
extern void func_800A86E4(Unknown8008FC9C *out, void *a, void *b, u16 c, s32 d, s32 e);
extern void func_80085978(s32 session, s32 model, Unknown8008FC9C *xf, void *b, s32 e);
extern f32 D_80071E9C;
extern void func_800A51E8(void *owner, s32 key, f32 value);
extern void func_8009D4DC(void *member);
extern f32 D_80072C84;
extern s32 func_800A0218(CombatUnit *unit);
extern s32 func_800A0134(Unknown800A75EC *entity);
extern void func_800E4344(CombatUnit *unit, s32 active);
extern f32 D_80072DEC;
extern s32 func_80116110(Unknown800A979C_1 *pfs, u16 companyCode, u32 gameCode, u8 *gameName, u8 *extName);
extern s32 func_80116A10(Unknown800A979C_1 *pfs, s32 *freeBytes);
extern char D_80073D70[];
extern char D_80073D84[];
extern void func_80102050(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8010316C(void);
extern void func_800DD310(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, char *out);
extern char D_80073C80[];
extern char D_80073D90[];
extern f32 D_800744F8;
extern void func_800E9894(Unknown800E26DC_2 *context, s16 memberId);
extern void func_800EA1FC(Unknown800E26DC_2 *context, u32 depth);
extern void func_800EA1B8(Unknown800E26DC_1 *stack, s32 play);
extern void func_800E566C(void *record);
extern f32 D_800749A8;
extern void func_800F0FD8(void *spawnArgs, u16 arg1, u8 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
extern f64 D_80074DF8;
extern void func_8007D430(s32 r, s32 g, s32 b);
extern Unknown80105290 D_80142904[48];
extern char D_80075424[];
extern char D_80075428[];
extern s32 func_8007DBC4(void);
extern void func_8010BFDC(Unknown8010CAE8 *obj);
extern void func_8010C450(void *obj);
extern void func_8010CE24(Unknown8010D388 *line, f32 *pos);
extern f32 D_800755A0;
extern s32 func_800874F4(Unknown800874F4_1 *bank, s32 group, s32 hold);
extern s32 func_8008716C(Unknown800874F4_1 *bank, s32 index, s32 hold);
extern f32 D_800749F0;
extern s32 func_8009FEE0(Unknown800A75EC *entity, s32 a, s32 b, u16 c);
extern s32 D_80138FBC;
#endif
