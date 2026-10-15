#ifndef GAME_SYS_80076000_H
#define GAME_SYS_80076000_H

#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"

extern s32 D_auto_801502E0;

extern s32 func_8007A3D8(s32);

extern s32 func_80079C20(s32);

extern void func_8011B9A0(s32, s32);

extern s32 func_80119B50(s32);

extern s32 func_8007AB04(void);
extern s32 func_8007AC20(s32);

extern f32 D_auto_800710FC;

extern u8 D_auto_80125780;

extern u8 D_auto_801257F0;
extern u8 D_auto_801257F1;
extern u8 D_auto_801257F2;
extern u8 D_auto_801257F3;
extern u8 D_auto_801257F4;

extern u8 D_auto_801257E0[];
extern u8 D_auto_801257E1[];
extern u8 D_auto_801257E2[];
extern u8 D_auto_801257E3[];

extern s32 D_auto_80125D40;
extern s32 D_auto_80125D44;
extern u16 D_auto_80125D48;

typedef struct DmaRegion {
    u32 end;
    u32 flags;
} DmaRegion;
extern DmaRegion D_auto_80125550[];
extern char D_auto_8F147050[];
extern void func_800765C0(unsigned int a, unsigned int b, unsigned int n);
extern void func_80076408(unsigned int a, unsigned int b, unsigned int n);
extern void func_80076164(unsigned int a, unsigned int b, unsigned int n);
extern void func_800764F4(unsigned int a, unsigned int b, unsigned int n);

extern u64 D_80145DA0;
extern u64 D_auto_801257A8;
extern s32 D_auto_801257B4;
extern s32 D_auto_80125788;
extern s32 func_8007C6D8(void);
extern s32 func_800862E8(void);
extern s32 func_800862B4(void);
extern s32 D_auto_8012578C;
extern u64 D_auto_801257A0;
extern f32 D_auto_801257B0;
extern u64 D_auto_801B4AC8;

#include "span_1000/code_800A6864.h"

extern u8 D_auto_802DF344[];

extern void func_800A6E30(N *, unsigned char);

#include "shared/bt_gfx.h"
#include "span_1000/code_800E9538.h"
extern s32 func_800AB690(void);
extern s32 func_800A942C(void);
extern s32 func_800A9484(s32);
extern s32 func_800A95C0(s32, void *, s32 *);

extern s32 D_auto_802E17D0;

extern s32 D_auto_802DF540[];
extern s32 func_800EC644(void);
extern s32 D_auto_802DF570[];

extern s32 D_auto_8013227C[];

extern void func_80122130(s32);

extern s32 func_800799D0(s32, s32);

extern u8 D_auto_80327B50;
extern u8 D_auto_80327C0F;

extern u8 D_auto_80327C30;
extern u8 D_auto_80327D2C;

extern u8 D_auto_80327D40;
extern u8 D_auto_80327E30;

extern u8 D_auto_80327E50;

extern s32 D_auto_80134FD4;
extern s32 D_auto_80134FD8;
extern s32 D_auto_80134FDC;

extern f32 D_auto_800744E4;

extern f32 D_auto_80074500;

extern f32 D_auto_8007471C;

extern s32 func_800E6B3C(s32);

extern s32 func_800E69A4(struct ResetState *);
extern s32 func_800E6C80(struct ResetState *);

extern s32 func_800E6FD8(void);

extern s32 func_800E9A00(s32, s32);
extern s32 func_800E7064(s32);

extern s32 func_800E70C4(s32);

extern s32 func_800E75D4(s32);
extern s32 func_800E6AAC(s32);
extern s32 func_800E7394(s32);

extern s8 D_auto_8032900F;

extern s32 func_800E7168(s32, s32);

extern s32 func_800E6BF0(s32);

extern s32 func_800E70B0(s32);

extern s32 D_auto_80137908;

extern s32 func_80079AB4(s32, s32);
extern s32 func_800796F0(s32, s32);

extern s32 func_80079064(void);
extern u8 D_auto_80134E75;
extern s32 func_800CEE2C(void);

extern s32 D_auto_8033AAC8[];

extern s32 func_800E6FB0(struct ResetState *);
extern s32 func_800E6B14(struct ResetState *);

extern s32 func_800E6970(s32);

extern s32 func_800E6C5C(struct ResetState *);

extern s32 func_800E6FF8(s32);

extern s32 func_800E7448(s32);
extern s32 func_800E73BC(struct ResetState *);

extern s32 D_auto_80137900;

extern s32 func_auto_800A9B70(s32, s32 *);
extern s32 D_auto_80327F50;
extern u8 D_auto_80327F5E[];
extern s32 D_auto_80328164;
extern s32 D_auto_80328168;
extern s32 D_auto_8032815C;
extern s32 D_auto_80328160;
extern s32 D_auto_80126710;
extern u8 D_auto_80126718[];
extern s32 D_auto_8032816C;
extern s32 func_800D0B0C(void);

extern u8 D_auto_80328158;
extern u8 D_auto_80328159;
extern s32 D_auto_80328150;

extern s32 D_auto_8013790C[];
extern s32 D_auto_80137904;

extern s32 D_auto_8033B608;
extern s32 D_auto_8033B604;

extern s32 D_auto_803283C4;
extern s32 D_auto_803283C0;
extern s32 D_auto_80328400;
extern s32 D_auto_80328404;
extern s32 D_auto_801352A4;

extern s32 func_800E69D4(s32);

extern s32 func_800E72FC(struct ResetState *);

extern u8 D_auto_80135778[];

extern s32 func_800E95A8(s32);

extern s32 D_auto_8033B628;
extern s32 D_auto_8033B62C;
extern s32 D_auto_8033B5F0;

extern Gfx *D_auto_803276D4;
extern char D_800731C0[];
extern char D_800731CC[];
extern s32 D_80125794;
extern char D_801326C4[];
extern char D_80132704[];
extern char D_8013273C[];
extern char D_80132754[];
extern char D_801329C8[];
extern char D_80132A04[];
extern char D_80132A34[];
extern char D_80132A78[];
extern char D_80132AA8[];
extern u8 D_803276E1;
extern s32 D_803276F0;
extern s32 D_80327708;
extern u8 D_8032770C;
extern s32 D_80327718;
extern s32 D_80327730;
extern s32 D_80327734;
extern s32 D_80327760;
extern s32 D_80327764;
extern s32 D_80327790;
extern u8 D_80327794;
extern u8 D_80327795;
extern u8 D_80327796;
extern u8 D_803277C8;
extern u8 D_803277C9;
extern u8 D_803277CA;
extern u8 D_803277CB;
extern s32 D_803277CC;
extern s32 D_803277DC;
extern u8 D_80327808;
extern u8 D_80327809;
extern u8 D_8032780A;
extern u8 D_8032780B;
extern s32 D_8032780C;
extern s32 D_80327810;
extern s32 D_80327814;
extern s32 D_80327818;
extern u8 D_80327848;
extern u8 D_80327849;
extern u8 D_8032784A;
extern u8 D_8032784B;
extern s32 D_8032784C;
extern s32 D_80327850;
extern s32 D_80327854;
extern s32 D_80327858;
extern s32 D_80327878;
extern s32 D_8032787C;
extern s32 D_80327880;
extern u8 D_803278B8;
extern u8 D_803278B9;
extern u8 D_803278BA;
extern u8 D_803278BB;
extern s32 D_803278BC;
extern s32 D_803278D8;
extern s32 D_803278F0;
extern s32 D_803278F4;
extern s32 D_803278F8;
extern u8 D_80327920;
extern u8 D_80327921;
extern u8 D_80327922;
extern u8 D_80327923;
extern s32 D_80327948;
extern s32 D_8032794C;
extern s32 D_80327950;
extern u8 D_80327970;
extern u8 D_80327971;
extern u8 D_80327972;
extern s32 D_80327974;
extern s32 D_80327978;
extern u8 D_803279D8;
extern u8 D_803279D9;
extern u8 D_803279DA;
extern u8 D_803279DB;
extern u8 D_803279DC;
extern s32 D_803279E0;
extern s32 D_803279E4;
extern u8 D_803279E8;
extern u8 D_803279E9;
extern s32 D_80327A08;
extern s32 D_80327A0C;
extern s32 D_80327A10;
extern u64 D_80327A38;
extern s32 D_80327A50;
extern s32 D_80327A68;
extern s32 D_80327A6C;
extern s32 D_80327A70;
extern u8 D_80327A90;
extern u8 D_80327A91;
extern u8 D_80327A92;
extern u8 D_80327AA0;
extern u8 D_80327AA1;
extern s32 D_80327AB0;
extern u8 D_80327AD8;
extern u8 D_80327AD9;
extern u8 D_80327ADA;
extern s32 D_80327AF8;
extern s32 D_80327AFC;
extern s32 D_80327B00;
extern s32 D_80327B04;
extern s32 D_80327B08;
extern u8 D_80327B22;
extern u8 D_80327B23;
extern u8 D_80327B24;
extern s32 D_80327B30;
extern s32 D_80327B38;
extern u64 D_80327B28;
extern u64 D_80327AE8;
extern u64 D_80327AC0;
extern u64 D_80327B18;
extern u64 D_80327AD0;
extern u64 D_80327AF0;
extern u64 D_80327B10;
extern u64 D_80327AC8;
extern u64 D_803279F0;
extern u64 D_80327A20;
extern u64 D_80327990;
extern u64 D_80327A98;
extern u64 D_80327A28;
extern u64 D_80327AB8;
extern u64 D_80327A00;
extern u64 D_80327700;
extern u64 D_80327AA8;
extern u64 D_803279F8;
extern u64 D_803276E8;
extern u64 D_80327AE0;
extern u64 D_80327988;
extern u64 D_803276F8;
extern u64 D_80327A18;
extern u64 D_803277B8;
extern u64 D_803279B0;
extern u64 D_803278B0;
extern u64 D_80327840;
extern u64 D_80327770;
extern u64 D_803279A8;
extern u64 D_80327958;
extern u64 D_80327930;
extern u64 D_803278A0;
extern u64 D_80327828;
extern u64 D_80327798;
extern u64 D_80327740;
extern u64 D_80327870;
extern u64 D_80327758;
extern u64 D_803279D0;
extern u64 D_803279C8;
extern u64 D_803279B8;
extern u64 D_80327838;
extern u64 D_80327968;
extern u64 D_80327750;
extern u64 D_80327778;
extern u64 D_80327780;
extern u64 D_80327980;
extern u64 D_80327868;
extern u64 D_80327820;
extern u64 D_80327830;
extern u64 D_803278A8;
extern u64 D_803277B0;
extern u64 D_80327998;
extern u64 D_803279A0;
extern u64 D_80327860;
extern u64 D_80327890;
extern u64 D_803277A8;
extern u64 D_80327748;
extern u64 D_80327788;
extern u64 D_80327928;
extern u64 D_80327940;
extern u64 D_803277C0;
extern u64 D_80327888;
extern u64 D_80327898;
extern u64 D_80327938;
extern u64 D_80327768;
extern u64 D_80327960;
extern u64 D_803279C0;
extern u64 D_80327720;
extern u64 D_80327710;
extern u64 D_80327728;
extern u64 D_80327738;
extern u64 D_80327800;
extern u64 D_803277E8;
extern u64 D_803277F0;
extern u64 D_803277F8;
extern u64 D_80327918;
extern u64 D_803278E8;
extern u64 D_80327A60;
extern u64 D_803277E0;
extern u64 D_803278E0;
extern u64 D_80327900;
extern u64 D_80327908;
extern u64 D_80327910;
extern u64 D_80327A58;
extern u64 D_80327A78;
extern u64 D_80327A80;
extern u64 D_80327A88;

void func_800E99D4(struct ResetState *arg0);

extern s32 func_800EF16C(s32, s32, s32);

extern u8 D_auto_8033B631;
extern u8 D_auto_8033B630;


extern s32 D_auto_80139610;

extern s32 D_auto_801416F0;

extern s32 D_803AAD88;
extern s32 D_803AAD8C;

extern f32 D_803AAD90;
extern f32 D_803AAD94;

extern s32 D_auto_803B75AC;

extern u8 D_auto_803B75A9;

extern u8 D_803B75A4;
extern u8 D_803B75A5;
extern u8 D_803B75A6;
extern u8 D_803B75A7;

extern s32 D_auto_803C4D70;

extern f64 D_auto_80074F10;
extern f32 D_auto_80074F18;

int func_auto_800E3470(unsigned char *state);

int func_80079D58();

f32 func_800E9318();
extern f32 D_auto_8007486C;

f32 func_800F3880(f32 arg0);
extern f32 D_auto_80074720;

extern s32 D_auto_80125764;
extern u8 D_auto_80152F90;

extern s32 D_auto_80152A10;
extern u8 D_auto_801B4A28;

extern f32 D_auto_80074390;
extern f32 D_auto_80074394;
extern f32 D_auto_80074398;
extern s32 D_auto_80125858;

int func_80076000(void);
int func_80076BF0(int arg0, int arg1, int arg2, int arg3);

s32 func_8011CAA0(s32, s32);

extern s8 D_auto_80327D2D;

extern s8 D_auto_80327C10;

s32 func_800E9E5C();

extern s32 D_auto_801C9188;
extern s32 *D_auto_801C918C;
extern s32 D_auto_801C9190;

s32 func_800EA93C(s32, s32 *);
extern s32 D_auto_80136774;

s32 func_800E6D58();
extern s32 D_auto_80135DDC;

extern s32 D_auto_80135DB4;

void func_80105584(int * arg0, void * arg1);
extern s32 D_8037A174;
extern s32 D_auto_80073DB0;

s32 func_800E09B0(s32);
s32 func_800E1648(s32, s32 *);
extern s16 D_auto_80135838;
extern s32 D_auto_8013583C;
extern s32 D_auto_80328450;

extern s32 D_auto_80073D08;

extern s32 D_auto_80073CF8;

extern s32 D_auto_80073CEC;

extern s32 D_auto_80073CDC;

extern s32 D_auto_80073CC8;

extern s32 D_auto_80073CBC;

extern s32 D_auto_80073CA8;

extern s32 D_auto_80073C9C;

extern s32 D_auto_80073C94;

extern s32 D_auto_80073C8C;

s32 func_801121E0();
extern s32 D_auto_801499F0;

extern s8 D_auto_800731B0;
typedef struct Obj80137A3C {
    u8 unk_0[0x12];
    u16 unk12;
    u8 unk_14[0x4];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} Obj80137A3C;

s32 func_800E4494(s32);

s32 func_80099D90(s32, s32);

s32 func_800E5F30(s32);

void func_800E4A18(s32 arg0);

s32 func_800E986C(s32, s32, s32);

s32 func_800E3554(s32, s16);

int func_8007EEF8(int arg0);

s32 func_800E3980(s32, s16, u16, s32);

s32 func_80107170(s32);

s32 func_8007B208(s32, s32);

s32 func_8010CB4C(s32, s32);

s32 func_80084CC4(s32, s32, s32, s32, s32, s32, s32, f32);
extern f32 D_auto_80071E90;

extern s32 D_auto_80135E64;

extern s32 D_auto_80135F84;

extern s32 D_auto_80136078;

extern s32 D_auto_801360E8;

extern s32 D_auto_80136164;

extern s32 D_auto_801361CC;

extern s32 D_auto_8013624C;

extern s32 D_auto_80136280;

extern s32 D_auto_801362A8;

extern s32 D_auto_801363E0;

extern s32 D_auto_80136424;

extern s32 D_auto_80136458;

extern s32 D_auto_80136480;

extern s32 D_auto_801364E8;

extern s32 D_auto_8013652C;

extern s32 D_auto_80136560;

extern s32 D_auto_801366A8;

extern s32 D_auto_801366DC;

extern s32 D_auto_80136930;

extern s32 D_auto_80136A90;

extern s32 D_auto_80136B00;

extern s32 D_auto_80136C18;

extern s32 D_auto_80136D78;

extern s32 D_auto_80136ED8;

extern s32 D_auto_80137038;

extern s32 D_auto_801370E8;

extern s32 D_auto_801371D0;

extern s32 D_auto_80137210;

extern s32 D_auto_80137248;

extern s32 D_auto_8013728C;

extern s32 D_auto_80137310;

extern s32 D_auto_80137354;

extern s32 D_auto_80137398;

extern s32 D_auto_8013741C;

extern s32 D_auto_80137460;

extern s32 D_auto_801374A4;

extern s32 D_auto_80137518;

extern s32 D_auto_8013755C;

extern s32 D_auto_801375A0;

extern s32 D_auto_80137614;

extern s32 D_auto_80137648;

extern s32 D_auto_80137670;

int func_800A70BC(N *arg0);

#endif
