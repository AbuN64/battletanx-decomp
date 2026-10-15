#ifndef BT_MENU_RENDER_H
#define BT_MENU_RENDER_H
#include "shared/bt_types.h"
#include "shared/bt_gfx.h"

/* Menu drawing and timer interfaces reconstructed from the callee argument
 * reads. Existing scalar return contracts are retained when this caller
 * ignores their result. The timer returns its 64-bit O32 v0/v1 pair. */
int func_800798C0(int);
void func_80079BB4(int);
int func_80079BD4(void);
void func_80079BF4(int);
int func_800AD340(void);
int func_800AD5A0(void);
void func_800AD828(void);
void func_800ADD70(void);
void func_800AE2B8(void);
int func_800AE800(void);
void func_800AEA50(void);
void func_800AEF98(void);
int func_800AF534(void);
int func_800AFB08(void);
int func_800B0210(void);
void func_800B0440(void);
void func_800B098C(void);
void func_800B0D1C(void);
int func_800B1264(void);
s32 func_800B9C0C(const u8 *text);
int func_800B9C34(int, int);
int func_800F4DFC(Gfx **, int, int, int, int, int, int, int, int);
void func_801054E0(int);
void func_8010552C(int, int);
void func_8010555C(int, int, int, int);
void func_80105A50(Gfx **, char *, int, int);
void func_8010698C(Gfx **);
u64 func_801120A0(void);

#endif
