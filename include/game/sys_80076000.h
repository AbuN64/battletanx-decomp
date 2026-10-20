#include "shared/bt_span_1000_code_800EC380.h"
#include "shared/bt_span_1000_code_8007A470.h"
#include "shared/bt_unit.h"
#include "shared/bt_ai_team.h"
struct ResetState;
struct CombatUnit;
#ifndef GAME_SYS_80076000_H
#define GAME_SYS_80076000_H

#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_800A8940.h"
#include "shared/bt_span_1000_code_8007C700.h"
#include "shared/bt_span_1000_code_800A9FC4.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "shared/bt_span_1000_code_800824E4.h"
#include "shared/bt_span_1000_code_800D1AD0.h"
#include "sdk/libultra.h"
#include "span_1000/code_8007A470.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/bt_span_1000_code_800DAD5C.h"

extern s32 D_801502E0;

extern s32 func_8007A3D8(s32);

extern s32 func_80079C20(s32);

extern void func_8011B9A0(void *seqp, s16 volume);

extern s32 func_80119B50(s32);

extern s32 func_8007AB04(void);
extern void func_8007AC20(u16 state);

extern f32 D_800710FC;

extern u8 D_80125780;

extern u8 D_801257F0;
extern u8 D_801257F1;
extern u8 D_801257F2;
extern u8 D_801257F3;
extern u8 D_801257F4;

extern u8 D_801257E0[];
extern u8 D_801257E1[];
extern u8 D_801257E2[];
extern u8 D_801257E3[];

extern s32 D_80125D40;
extern s32 D_80125D44;
extern u16 D_80125D48;

typedef struct DmaRegion {
    u32 end;
    u32 flags;
} DmaRegion;
extern DmaRegion D_80125550[];
extern char D_8F147050[];
extern void func_800765C0(unsigned int a, unsigned int b, unsigned int n);
extern void func_80076408(unsigned int a, unsigned int b, unsigned int n);
extern void func_80076164(unsigned int a, unsigned int b, unsigned int n);
extern void func_800764F4(u32 address, u8 value, u32 length);

extern u64 D_80145DA0;
extern u64 D_801257A8;
extern s32 D_801257B4;
extern s32 D_80125788;
extern s32 func_8007C6D8(void);
extern void func_800862E8(void);
extern void func_800862B4(void);
extern s32 D_8012578C;
extern u64 D_801257A0;
extern f32 D_801257B0;
extern u64 D_801B4AC8;

#include "span_1000/code_800A6864.h"

extern u8 D_802DF344[];

extern void func_800A6E30(EffectKind15 *node, u8 player);

#include "shared/bt_gfx.h"
#include "span_1000/code_800E9538.h"
extern s32 func_800AB690(void);
extern s32 func_800A942C(void);
extern s32 func_800A9484(s32);
extern s32 func_800A95C0(s32, void *, s32 *);

extern s32 D_802E17D0;

extern s32 D_802DF540[];
extern s32 func_800EC644(void);
extern s32 D_802DF570[];

extern TextureTable D_8013227C[];

extern void osViSetSpecialFeatures(s32);

extern void func_800799D0(s32 id, s16 volume);

extern u8 D_80327B50;
extern u8 D_80327C0F;

extern u8 D_80327C30;
extern u8 D_80327D2C;

extern u8 D_80327D40;
extern u8 D_80327E30;

extern u8 D_80327E50;

extern s32 D_80134FD4;
extern s32 D_80134FD8;
extern s32 D_80134FDC;

extern f32 D_800744E4;

extern f32 D_80074500;

extern f32 D_8007471C;

extern s32 func_800E6B3C(s32);

extern s32 func_800E69A4(struct ResetState *);
extern s32 func_800E6C80(struct ResetState *);

extern s32 func_800E6FD8(struct ResetState *);

extern void func_800E9A00(void *, f32);
extern s32 func_800E7064(s32);

extern s32 func_800E70C4(s32);

s32 func_800E75D4(struct ResetState *context);
s32 func_800E6AAC(struct ResetState *context);
extern s32 func_800E7394(s32);

extern s8 D_8032900F;

s32 func_800E7168(struct ResetState *context, s32 action);

extern s32 func_800E6BF0(s32);

extern s32 func_800E70B0(s32);

extern s32 D_80137908;

extern s32 func_80079AB4(s32, s32);
extern s32 func_800796F0(s32, s32);

extern void func_80079064(void);
extern u8 D_80134E75;
extern s32 func_800CEE2C(void);

extern s32 D_8033AAC8[];

extern s32 func_800E6FB0(struct ResetState *);
extern s32 func_800E6B14(struct ResetState *);

extern s32 func_800E6970(struct ResetState *context);

extern s32 func_800E6C5C(struct ResetState *);

extern s32 func_800E6FF8(s32);

extern s32 func_800E7448(struct ResetState *context);
extern s32 func_800E73BC(struct ResetState *);

extern s32 D_80137900;

extern s32 func_800A9B70(s32, s32 *);
extern s32 D_80327F50;
extern u8 D_80327F5E[];
extern s32 D_80328164;
extern s32 D_80328168;
extern s32 D_8032815C;
extern s32 D_80328160;
extern s32 D_80126710;
extern u8 D_80126718[];
extern s32 D_8032816C;
extern s32 func_800D0B0C(void);

extern u8 D_80328158;
extern u8 D_80328159;
extern s32 D_80328150;

extern s32 D_8013790C[];
extern u32 D_80137904;

extern s32 D_8033B608;
extern s32 D_8033B604;

extern s32 D_803283C4;
extern s32 D_803283C0;
extern s32 D_80328400[4];
extern s32 D_80328404;
extern s32 D_801352A4;

extern s32 func_800E69D4(s32);

extern s32 func_800E72FC(struct ResetState *);

extern u8 D_80135778[];

extern f32 func_800E95A8(s32 startTime);

extern s32 D_8033B628;
extern s32 D_8033B62C;
extern s32 D_8033B5F0;

extern Gfx *D_803276D4;
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

extern u8 D_8033B631;
extern u8 D_8033B630;


extern u32 D_80139610;

extern s32 D_801416F0;

extern s32 D_803AAD88;
extern s32 D_803AAD8C;

extern f32 D_803AAD90;
extern f32 D_803AAD94;

extern s32 D_803B75AC;

extern u8 D_803B75A9;

extern u8 D_803B75A4;
extern u8 D_803B75A5;
extern u8 D_803B75A6;
extern u8 D_803B75A7;

extern s32 D_803C4D70;

extern f64 D_80074F10;
extern f32 D_80074F18;

int func_800E3470(struct CombatUnit *unit);

int func_80079D58();

f32 func_800E9318();
extern f32 D_8007486C;

f32 func_800F3880(f32 arg0);
extern f32 D_80074720;

extern AudioTask *D_80125764;
extern u8 D_80152F90;

extern void *D_80152A10;
extern u8 D_801B4A28;

extern f32 D_80074390;
extern f32 D_80074394;
extern f32 D_80074398;
extern s32 D_80125858;

int func_80076000(void);
int func_80076BF0(int arg0, int arg1, int arg2, int arg3);

s32 func_8011CAA0(s32, s32);

extern s8 D_80327D2D;

extern s8 D_80327C10;

s32 func_800E9E5C();

extern s32 D_801C9188;
extern u8 *D_801C918C;
extern u8 D_801C9190[0xF8240];

struct Rule;
s32 func_800EA93C(void *, struct Rule *);
extern s32 D_80136774;

s32 func_800E6D58();
extern s32 D_80135DDC;

extern s32 D_80135DB4;

void func_80105584(int * arg0, void * arg1);
#include "shared/bt_gfx.h"
extern Gfx *D_8037A174;
extern s32 D_80073DB0;

s32 func_800E09B0(s32);
s32 func_800E1648(s32, s32 *);
extern s16 D_80135838;
extern s32 D_8013583C;
extern s32 D_80328450;

extern s32 D_80073D08;

extern s32 D_80073CF8;

extern s32 D_80073CEC;

extern s32 D_80073CDC;

extern s32 D_80073CC8;

extern s32 D_80073CBC;

extern s32 D_80073CA8;

extern s32 D_80073C9C;

extern s32 D_80073C94;

extern s32 D_80073C8C;

s32 osInitialize();
extern s32 D_801499F0;

extern s8 D_800731B0;
typedef struct Obj80137A3C {
    u8 unk_0[0x12];
    u16 unk12;
    u8 unk_14[0x4];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
} Obj80137A3C;

void func_800E4494(struct CombatUnit *unit);

s32 func_80099D90(void *, s32);

void func_800E5F30(struct CombatUnit *unit);

void func_800E4A18(s32 arg0);

s32 func_800E986C(void *, u32, f32);

s32 func_800E3554(s32, s16);

int func_8007EEF8(Gfx *arg0);

s32 func_800E3980(void *, s16, u16, s32);

s32 func_80107170(s32);

f32 func_8007B208(s32 *r, s32 value);

s32 func_8010CB4C(s32, s32);

void func_80084CC4(Scene *, s32, void *, void *, s32, s32, f32 *, f32);
extern f32 D_80071E90;

extern s32 D_80135E64;

extern s32 D_80135F84;

extern s32 D_80136078;

extern s32 D_801360E8;

extern s32 D_80136164;

extern s32 D_801361CC;

extern s32 D_8013624C;

extern s32 D_80136280;

extern s32 D_801362A8;

extern s32 D_801363E0;

extern s32 D_80136424;

extern s32 D_80136458;

extern s32 D_80136480;

extern s32 D_801364E8;

extern s32 D_8013652C;

extern s32 D_80136560;

extern s32 D_801366A8;

extern s32 D_801366DC;

extern s32 D_80136930;

extern s32 D_80136A90;

extern s32 D_80136B00;

extern s32 D_80136C18;

extern s32 D_80136D78;

extern s32 D_80136ED8;

extern s32 D_80137038;

extern s32 D_801370E8;

extern s32 D_801371D0;

extern s32 D_80137210;

extern s32 D_80137248;

extern s32 D_8013728C;

extern s32 D_80137310;

extern s32 D_80137354;

extern s32 D_80137398;

extern s32 D_8013741C;

extern s32 D_80137460;

extern s32 D_801374A4;

extern s32 D_80137518;

extern s32 D_8013755C;

extern s32 D_801375A0;

extern s32 D_80137614;

extern s32 D_80137648;

extern s32 D_80137670;

int func_800A70BC(EffectKind15 *node);

int func_8007A004();
int func_8007A26C(void);
int func_8007A36C();
s32 func_80079DC8();
s32 func_80079FA4();
s32 func_8007A178();
extern s32 D_80125768;
extern s32 D_8012576C;
extern s32 D_80125770;
extern s32 D_80152A38;

extern void func_800C80E0(void);
extern s32 D_80134010[];
extern u8 D_80135773;
extern s32 D_80327EE8;
extern s32 D_80327EF0;

extern void func_800ABF1C(void);
extern void func_800ABF40(void);
extern void func_800ABF70(void);
extern void func_800DCA7C(void);
extern u8 D_80135680[];
extern u8 D_8013568C[];
extern s32 D_80327614;
extern s32 D_80328420;
extern s32 D_80328424;
extern s32 D_80328428;
extern u8 D_8032842F[];
extern u8 D_80328430[];
extern u8 D_80328439;
extern u8 D_8032843A;
extern s32 D_80328440;
s32 func_800DCCC0(void);

extern s32 D_80125790;
extern s32 D_80134E60;
extern u8 D_80134E64;
extern u8 D_80134E65;
extern u8 D_80134E66;
extern u8 D_80134E67;
extern u8 D_80134E69;
s32 func_800CE214(void);

const char *func_800863F4(u32 level);

extern void func_80106010(void *context, u8 ch);
extern u8 *D_803AAD98;
extern s32 D_803B75A0;
void func_80105D90(void *context, u8 *text, s32 lineCount, s32 lineHeight, s32 left, s32 right);

void func_801053B0(u8 font);
extern s32 func_800F4F60(u32 sourceSize, u8 *source, u32 destinationSize, u8 *destination);
extern s8 D_80132EF0;
extern u8 *D_803275F4;
extern u64 D_80327E58;
extern s32 D_80327E60;
extern u8 D_80327EB1;
extern u8 D_80327EB2;
extern u8 D_803DA800[];
extern u8 D_B0596EA0[];
extern u8 D_B05A1110[];
void func_800C3F00(void);

extern f32 func_8011BE10(f32);
extern f32 func_801113A0(f32);
extern f32 D_80126700;
void func_800A7964(f32 m[4][4], f32 *angles);

extern f32 D_800730BC;
extern f32 D_80126704;
void func_800A7ABC(f32 m[4][4], f32 x, f32 y, f32 z, f32 degrees);

extern u8 D_803B75A8;
void func_80105C68(void *context, u8 *text, s32 lineCount, s32 lineHeight, s32 maxChars);

extern f32 D_800749E0;
extern f32 D_800749E4;
extern s32 D_8033B5F4;
extern DemoHeader D_8033B600;
extern u8 *D_8033B618;
extern f32 (*D_8033B61C)[3];
void func_800EC7A8(f32 out[4][4], s32 offset);

extern u8 D_801260A0[4];
extern u8 D_801260A4[4];
void func_800A30A8(void);

extern u8 D_801352B0[];
extern s32 D_8013566C;
extern s32 D_80135674;
extern s32 D_80328410;
s32 func_800DAC4C(void);

extern u16 D_80132298;
extern void *D_8013229C[];
extern u16 D_801322BC;
extern void *D_801322C0[];
extern u16 D_801322CC;
extern void *D_801322D0[];
extern u16 D_801322F0;
extern void *D_801322F4[];

extern void func_800F195C(f32 *origin, f32 *position, s32 arg2, s32 arg3, u8 byte0, u8 byte1, u8 byte2);
extern f32 D_80074DE0;
extern f32 D_80074DE4;
void func_800F1BB4(f32 *origin, u8 byte0, u8 byte1, u8 byte2);

extern u8 D_80134E68;
s32 func_80088590(s32 kind);

extern s32 func_8011CC84(char *out, const char *format, ...);
extern void func_80105750(void **displayList, char *text);
extern char D_80073D14[];
extern char D_80073D18[];
void func_800D1A00(s32 ticks);

void func_800D1AD0(s32 ticks);

extern void func_80077110(void);
extern void func_80076068(u32 addr, s32 value);
extern u32 D_80000318;
extern u32 D_80125558;
extern u32 D_80125568;
extern u8 D_80147370;
extern u8 D_80147372;
void func_800768E4(void);

s32 func_80076F60(s32 port, u32 source, u32 length);

extern void func_800824E4(Scene *level, s32 arg1, void *arg2, void *arg3, s32 arg4, s32 arg5, s32 index);
void func_800849B0(Scene *level, s32 arg1, void *arg2, s32 arg3, s32 arg4, u8 mask);

extern s32 D_802DF580[];
extern s32 D_802DF590[];
extern s32 D_802DF5A0[];

extern void func_800949D8(s32 value0, s32 value1, s32 value2, s32 value3, s32 arg4, s32 arg5, s32 key);
void func_8009531C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 key);

extern void func_8011CC10(void *sound);
extern s16 D_801B4A58[];

extern s32 func_80095CDC(s32 value0, s32 value1, s32 value2, s32 value3, s32 arg4, s32 key);
s32 func_80095EAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 key);

void func_80076390(u32 address, u8 value);

void func_80079948(void);

extern s16 D_802D5A36;
s32 func_8008CED0(void);

void func_800A7ECC(f32 src[4][4], f32 dst[4][4], f32 scale);

void func_800E4A38(void);

extern f32 D_800710F0;
void func_8007ACC4(void);

extern s32 D_80134FC0[];
s32 func_800D3AC4(s32 value, s32 arg1, s32 arg2, s32 *exact, s32 *offset);

u16 func_800E0E1C(u16 index);

void func_800D1EBC(u32 kind);

extern char D_80073D9C[];
void func_800D3C84(s32 value);

u8 *func_80081A78(s32 size);

extern f32 D_80074478;
extern f32 D_8007447C;
void func_800E10D0(f32 *source, f32 *target);

extern u8 D_80150398;
extern u8 D_80152F80;
extern AudioDmaLists D_80152F84;
extern u8 *D_80152F88;
extern void func_8007A7E0(void);
void *func_8007A79C(u8 **state);

s32 func_800E289C(s32 from, s32 to);

s32 func_800EC390(void);

s32 func_800796B4(s16 value);

s32 func_800E27E4(u16 angle, u16 reference);

extern u8 D_80135820;
u32 func_800DDB94(void);

f32 *func_800EC700(s32 index);

void func_800DEC28(u8 *workspace, u16 index, s32 arg2, u16 increment);

extern u8 D_802DF5D0[];
void func_800A8E9C(void);

extern void *D_8033B610[];
void *func_800ECB68(s32 index);

extern s16 D_801B4A96[];
void func_8007968C(void);

extern u8 D_80125D50[];
void *func_80096768(s32 index);

extern u8 D_801262D8[];
void *func_800A68C0(s32 index);

extern s32 D_80126714;
extern s32 D_80134E54;
extern s32 D_80134E58;
extern u8 D_80134E74;
s32 func_800CC1A8(void);

extern void func_800767E4(void);
extern u32 D_801471C8;
void func_800769B0(void);

extern void func_800B9C80(void);
extern void func_800BD1F0(void);
extern void func_800C0880(void);
extern void func_800C3EF0(void);
extern s32 func_8007B590(s32 mode);
extern s8 D_801B4AE0;
extern s32 D_80327B4C;
s32 func_8007C58C(s32 state);

void func_8007D2A0(u32 id);

extern void func_800790EC(void *scheduler);
extern void func_800792C8(void *scheduler);
extern void func_80079474(void *scheduler);
struct Scheduler;
void func_80078F70(struct Scheduler *scheduler);

s32 func_800A90E0(void);
void func_8007968C(void);
void func_8007D998(void);
void func_800A8EE0(void);
void func_800760DC(s32 count);
void func_8007902C(u8 *record);
void func_80076390(u32 address, u8 value);
void func_80079948(void);
s32 func_8007C344(s32 mode);
struct AiUnitContext;
int func_800E6C14(struct AiUnitContext *context);

extern s8 D_8012579D;

extern void func_8011CBB0(void *sound, s16 volume);

extern s32 D_801C9174;

extern s16 func_80086AE8(void);

u16 func_800E2820(f32 *from, f32 *to);

extern f32 D_8007488C;
extern f32 D_80074890;

s32 func_800EB4A4(void *context);

void func_800ECBA8(void);

f32 func_800F3940(void);

extern f32 D_80074F50;
extern f32 D_80139620[];

extern f32 D_80074F54;

extern u8 D_80327C12;
extern u64 D_80327BC8;
extern u64 D_80327BD0;
extern u64 D_80327BD8;
extern u8 D_80327BE0;
extern s32 D_80327BE4;
extern u8 D_80327C11;
extern u8 D_80132F00[];
extern u8 D_80132F4C[];
extern u8 D_80132F80[];
extern u8 D_801330C4[];
extern u8 D_801330E4[];
extern u8 D_80133100[];
extern u8 D_80133220[];
extern u8 D_801332FC[];
extern u8 D_80133360[];
void func_800BC4A8(Gfx **list);

extern u8 D_80327D41;
extern u8 D_80327D42;
extern u64 D_80327D48;
extern u64 D_80327D50;
extern u64 D_80327D58;
extern u8 D_80327D60;
extern s32 D_80327D64;
extern u8 D_80133C38[];
extern u8 D_80133CAC[];
void func_800C3730(Gfx **list);

extern u64 D_803277A0;
extern s32 D_803277D0;
extern s32 D_803277D4;
extern s32 D_803277D8;
extern u64 D_803278C0;
extern s32 D_803278C8;
extern s32 D_803278CC;
extern s32 D_803278D0;
extern s32 D_803278D4;
extern u64 D_80327A30;
extern u64 D_80327A40;
extern u64 D_80327A48;
extern u8 D_80327A54;
extern u8 D_80327B44;
extern u8 D_801324CC[];
extern u8 D_8013250C[];
extern u8 D_8013259C[];
extern u8 D_801327EC[];
extern u8 D_8013281C[];
extern u8 D_8013285C[];
extern u8 D_801328D8[];
extern u8 D_8013297C[];
extern u8 D_80132AC8[];
extern u8 D_80132B04[];
extern u8 D_80132BB0[];
extern u8 D_80132C30[];
void func_800B8804(Gfx **list);

extern u8 D_80327C34;
extern u8 D_80327C35;
extern u64 D_80327C38;
extern u64 D_80327C40;
extern u64 D_80327C48;
extern u8 D_80327C50;
extern s32 D_80327C54;
extern u8 D_801334C0[];
extern u8 D_80133538[];
extern u8 D_80133594[];
extern u8 D_801335E8[];
void func_800BFFC8(Gfx **list);

#include "shared/bt_common_types_d507c48987bb.h"
#include "shared/bt_span_1000_code_800E5328.h"
#include "shared/bt_span_1000_code_800E21E4.h"
extern void func_80109268(AreaBox *box, s32 x, s32 y, s32 minA, s32 maxA, s32 minB, s32 maxB, u16 flags);
extern f32 D_80072120;
extern f32 D_80072124;
extern f32 D_80072128;
extern f32 D_8007212C;
extern f32 D_80072130;
extern f32 D_80072134;
extern f32 D_80072138;
extern f32 D_8007213C;
extern f32 D_80072140;
extern f32 D_80072144;
extern f32 D_80072148;
void func_80096E80(f32 x, f32 y, u16 flags, u32 shape, AreaBox *box, f32 scale);

extern f32 D_8007443C;
extern f32 D_80074440;
extern f32 D_80074444;
extern f32 D_80074448;
f32 func_800E0C8C(f32 *a, f32 *b);

void func_800A7BE8(EffectMatrix16 *matrix, Vec3f *v, Vec3f *out);

extern s32 D_802DF560[];
s32 func_800A933C(void);
void func_800A93C8(void);

void func_800A823C(f32 matrix[4][4], f32 x, f32 y, f32 z);

void func_800DDBCC(void);

extern f64 D_80074D20;
void func_800F0DE0(EffectKind0C *effect, s32 *state);

void func_800A9DA8(u8 color[4]);

void func_800A9EE0(u8 color[4]);

typedef signed long long s64;
extern void func_80105688(void **displayList, s64 value);
void func_800D1998(s32 value);

s32 func_80093F3C(void *);
void func_800933B8(SequenceEffect *effect);

extern f32 D_800730B0;
void func_800A7650(f32 matrix[4][4]);

extern s8 D_80327E31;
s32 func_800C36E8(void);

void func_800A9F80(s32 arg0, s32 arg1);

extern f32 D_800730CC;
void func_800A841C(f32 src[4][4], f32 dst[4][4], u16 angle);

extern s32 D_801C9178;
extern int func_800A5EB0(s32);
extern void func_8009491C(void);
extern s32 func_80095C1C(s32 *, s32);
extern void func_80095768(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_800962B4(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_800827AC(Scene *, s32, void *, void *, s32, s32, s32, s32);

extern f32 D_800730D0;

s32 func_800942A8(f32 (*points)[2], s32 count, SceneView *view);

extern BitStrideEntry D_8013578C[];
u32 func_800DD244(u32 value);

extern f64 D_80072020;
extern f64 D_80072028;
s32 func_800941E0(f32 x, f32 y, f32 r, SceneView *c);

void func_800AB65C(ListNode *node);

s32 func_800EB990(struct ResetState *context);

extern f32 D_80126038[];
extern f32 D_80072C80;
s32 func_800A12E4(f32 x, f32 y, s32 sizeIndex);

void func_80085290(Gfx *list, s32 count, s32 offset);

extern void bcopy(const void *src, void *dst, s32 size);
extern s16 D_80125800;
extern u8 D_80125802;
extern Gfx D_801C2F40[2][0x400];
Gfx *func_8008067C(Gfx *src, s32 count, Gfx *next);

void func_800852E0(Gfx *commands, s32 count, s32 offset);

extern void func_8010647C(void **displayList, u8 ch);

extern s32 D_8032843C;
void func_800DAD60(void);

extern f32 D_8007442C;
extern f32 D_80074430;
extern f32 D_80074434;
extern f32 D_80074438;

extern void func_800953AC(s32 x0, s32 z0, s32 x1, s32 z1, s32 arg4, s32 arg5, s32 key);
extern s32 func_80095F30(s32 x0, s32 z0, s32 x1, s32 z1, s32 mode, s32 view);

extern s32 D_80125710;

extern S *func_8007AAF4(void);
extern s16 D_80125A30[];

extern u32 D_803282A8[][17];
extern u8 D_803283B8[];
extern s32 D_80135034[];
void func_800D6274(s32 player, s32 n, u32 value);

s32 func_800D1F20(s32 row, s32 count1, s32 count2, s32 count3, s32 count4, s32 *isFirst, s32 *offset);

extern f32 D_800730C4;
void func_800A8034(f32 src[4][4], f32 view[4][4], f32 eye[3], f32 at[3]);

extern s32 D_80141050;
extern f32 D_80074F78;
extern f32 D_80074F7C;
extern f32 D_80074F80;
extern f32 D_80074F84;
extern f32 D_8035BC68;
extern f32 D_8035BC6C;
extern u8 D_8035BC70;
extern u8 D_8035BC71;
extern s16 D_8035BC72;
extern u8 D_8035BC74;
extern u8 D_8035BC75;
extern s16 D_8035BC76;
extern s16 D_8035BC78;
extern s32 D_8035BC80[4][4];
extern u16 D_8035BCC4;
extern void func_80114970(void *m, u16 *perspNorm, f32 fovy, f32 aspect, f32 near, f32 far,
                          f32 scale);
void func_800F45C8(void);

s32 func_8010AA6C(struct PolygonPoint a, struct PolygonPoint b, struct PolygonPoint c, struct PolygonPoint d, struct PolygonPoint *delta, struct PolygonPoint *hit);

void func_800A9C20(void);

typedef struct FrameVertexSource {
    u16 s;
    u16 t;
    f32 x;
    f32 y;
    f32 z;
} FrameVertexSource;
void func_800AA168(u16 count, FrameVertexSource *source);

extern f32 D_800714A0;
extern f32 D_800714A4;
extern f32 D_800714A8;
s32 func_800821D0(struct PolygonPoint *a, struct PolygonPoint *b, s32 mode);

s32 func_8010BC10(struct PolygonPoint a, struct PolygonPoint b, struct PolygonPoint c, struct PolygonPoint d, struct PolygonPoint *hit);

s32 func_800E0EA8(struct PolygonPoint *a, struct PolygonPoint *origin, struct PolygonPoint *c);

extern void func_800A9CC4(void);
extern void func_800A9FC4(f32 x, f32 y, f32 z);
extern void func_800AB0A4(f32 scaleX, f32 scaleY);
extern f32 D_8007558C;
extern u16 D_80142CC0;
void func_8010C9E8(s32 unused, f32 (*v)[3]);

extern void func_80082D60(void *table, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6,
                                 s32 a7, s32 mask);
void func_80084F4C(void *table, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6,
                              s32 a7);

extern Quad2f D_80071E64;
void func_80091108(struct PolygonPoint *origin, struct PolygonPoint *out);

u16 func_800DDCCC(U16HistoryQueue *ring, u16 index);

u32 func_800DD2A8(u32 value);

s32 func_800DD544(unsigned char *code, s32 *level, s32 *stage, s32 *score, s32 *lives, s32 *mode);

extern char D_80071560[];
extern char D_80071564[];
char *func_80086378(s32 value, s32 digits, char *out);

extern u8 D_802DF360[];
extern void *D_802DF380[];
extern OSContStatus D_802DF390[4];
extern OSPfs D_802DF3A0[4];
extern s32 D_802DF550[4];
extern u8 D_802DF5B0[];
extern void *D_802DF5C8[];
extern void *D_802DF5E8[];
extern u8 D_802DF5F0[];
extern void *D_802E17A0;
extern s32 D_8000030C;
extern void osCreateMesgQueue(void *queue, void *messages, s32 count);
extern void osSetEventMesg(s32 event, void *queue, s32 message);
extern s32 func_80110FE0(void *queue, u8 *pattern, OSContStatus *status);
extern s32 func_80113C40(void *queue, OSPfs *pfs, s32 channel);
extern s32 func_80116C70(void *queue, OSPfs *pfs, s32 channel);
extern void func_800A8C88(void *arg);
s32 func_800A8940(void);

extern s32 func_80110CA0(void *queue);
extern void func_80110D24(OSContStatus *status);

extern f32 D_80071100;

void func_8007C770(GameSettings *src, GameSettings *dst);

extern u8 D_B049DCD0[];
extern u8 D_B04AC150[];
void func_800C54F0(void);

extern u8 D_B049C740[];
extern s32 D_80327F40;
extern u8 D_80327F44;
void func_800CA980(void);

extern u8 D_B04AD7E0[];
void func_800DADBC(void);

extern void func_800ED8C0(f32 *position, s32 variant);
extern void func_800902BC(f32 *position, s32 arg1);
extern void func_8009F958(void *sender, PointZX *center, f32 radius, f32 damage, u8 owner);
extern s32 func_80085B4C(s32 soundId, f32 x, f32 z);
void func_800F3490(GrenadeEffect *e, s32 *status);

s32 func_800E7320(struct ResetState *context);
s32 func_800E7340(struct ResetState *context);
s32 func_800E7360(struct ResetState *context);
s32 func_800E7380(struct ResetState *context);

s32 func_800EB2CC(struct ResetState *arg0);

extern EffectMatrix16 D_80071B6C;
extern f32 D_80071BAC;
extern f32 D_80071BB0;
extern void func_800A82B8(EffectMatrix16 *target, EffectMatrix16 *matrix, u16 angle);
EffectKind16 *func_8008DF2C(Vec3f *pos, f32 speed, u16 angle, s8 arg3, u8 arg4, u16 arg5, u8 useLocalPoints,
                                   Vec3f *start, Vec3f *end, s32 arg9, s16 arg10);

extern f32 D_80075510;
extern f32 D_80075518;
extern u16 D_80142B70[];
EffectKind2B *func_8010BDA0(EffectKind2BParams *params);

extern u32 D_80142CD0;
s32 func_8010CB60(EffectKind2DParams *params);

s32 func_800F15A0(f32 *pos, s16 value18, s8 value1A, s16 value1C, s32 value20, s32 value24,
                         s32 value28, s32 value2C);

extern f32 D_8007438C;
EffectKind0A *func_800DD970(f32 *pos, s32 arg);

void func_8010BEFC(EffectKind2B *effect, s32 *result);

s32 func_800EBA00(struct ResetState *context);

s32 func_800EACEC(struct ResetState *context);

s32 func_800EBBBC(struct ResetState *context);

extern s32 func_800AB95C(u32 mode);
extern s16 D_80133FE0;
extern u32 D_80134058[];
extern u32 D_80134080[];
extern s32 D_80327EE4;

s32 func_800E6A78(struct ResetState *);
s32 func_800E6BBC(struct ResetState *);
s32 func_800E70DC(struct ResetState *);
s32 func_800E73A4(struct ResetState *);
s32 func_800E73E0(struct ResetState *);
s32 func_800E7458(struct ResetState *);
s32 func_800E7490(struct ResetState *);
s32 func_800E7560(struct ResetState *);
s32 func_800E7628(struct ResetState *);
s32 func_800E76D0(struct ResetState *);
int func_800EB71C(struct ResetState * arg0);
int func_800EB764(struct ResetState * arg0);
int func_800EB7AC(struct ResetState * arg0);

extern f32 D_800749A0;
extern f32 D_800749A4;
s32 func_800EAD9C(struct ResetState *context);

extern s32 D_80142B50[4];
extern s32 D_80142B60[4];
extern s16 D_803B75B0[4][20][20];
extern s16 D_803B8230;
extern s32 D_803B8238;
extern s32 D_803B823C;
extern SpatialRecord D_803B8248[];
u8 func_80108B68(QueryBox *body, s32 self, u16 mask, f32 *delta, f32 *out, s32 arg5, s32 arg6,
                     s32 *owner);

extern s32 D_803AAD80;
extern s32 D_803AAD84;
extern FontTable *D_803AAD9C;
extern u8 D_803AADA0[];
extern f32 D_80075420;
extern u8 D_B02C3E50[];
extern u8 D_B02CB230[];
extern u8 D_B02D2790[];

void func_800AACCC(u32 table, u16 index, s32 tile);

s32 func_800EBAE0(struct ResetState *context);

s32 func_800EB07C(struct ResetState *context);

s32 func_800EAF14(struct ResetState *context);

s32 func_800EBED4(struct ResetState *context);

extern s32 D_803B8234;
extern s32 D_803B8240;
void func_80106B60(s32 width, s32 height);

s32 func_800EB840(struct ResetState *context);

s32 func_800EC314(struct ResetState *context);

void func_800E5688(UnitPairing *pair, u8 first, u8 second, u8 connected);

void func_800E2ACC(s32 unused, DriveCommand *command);

void func_800D1930(s32 value);

extern struct Rule D_80137730;
s32 func_800EC128(struct ResetState *context);

extern struct Rule D_801377F8;
s32 func_800EC26C(struct ResetState *context);

extern struct Rule D_80135D80;
s32 func_800EABB0(struct ResetState *context);

extern void func_8007D850(void);
extern void func_800A8ECC(void);
extern void func_800B9C9C(void);
extern void func_800BB69C(f32);
extern u8 func_800BC448(void);
extern void func_800EC380(s32);
extern f32 D_80073440;
extern u8 D_80135770;
extern s32 D_803276D8;
extern s32 D_80327C20;
s32 func_800BC214(void);

extern void func_800C8210(void);
extern void func_800C83D4(f32);
extern u8 func_800CA5BC(void);
extern f32 D_80073700;
extern f32 D_80073704;
extern s32 D_80134020[4];
extern s32 D_80134A80[];
s32 func_800CA398(void);

extern void func_800C0898(void);
extern void func_800C224C(f32);
extern f32 D_80073570;
extern s32 D_80327E40;
s32 func_800C3534(void);

extern void func_800DAE30(s32 index);
s32 func_800DC93C(void);

extern void func_8011C150(ListNode *node);
extern u8 D_801529D8;
void func_8007A968(void);

extern u8 D_B03D16D0[];
extern u8 D_B03D6940[];
extern s32 D_801262C0[4];
extern s32 D_803283C8[4];
extern s32 D_803283D8[4];
extern s32 D_803283E8;
extern s32 D_803283F0[4];
extern s32 func_800D9024(void);
void func_800D6908(void);

extern EffectScriptStep *D_80138F3C[];
void func_800ED994(ScriptedEffect *effect, s32 *status);

extern DemoEvent *D_8033B620;
extern s32 D_8033B624;
extern u8 D_B0319B30[];
extern u8 D_B0334630[];
extern u8 D_B0348DB0[];
extern u8 D_B0364100[];
extern u8 D_B03747F0[];
extern u8 D_B0380670[];
extern u8 D_B0383CC0[];
extern u8 D_B038BBE0[];
extern u8 D_B03A0820[];
extern u8 D_B03B9630[];
extern u8 D_B03C1550[];
s32 func_800EC410(void);

extern void func_8008F6F4(f32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 angleX, s32 angleY, s32 angleZ,
                              s32 arg7, s32 arg8, s32 arg9, f32 arg10, void *part, s32 arg12,
                              s32 arg13);
extern f32 D_80071CE8;

extern s16 D_802C13E2;
extern s16 D_802C13F4;
extern s16 D_802C13F6;
extern s16 D_802C3A28;
extern EffectKind D_802C3800[];
extern EffectSlot D_802C3A30[];
void func_8008B48C(void);

void func_8008B1F0(void);

extern s16 D_802C13E0;
void func_8008B030(EffectSlot *node);

extern s32 func_800E2D40(void *member);

extern f32 func_800E9720(struct ResetState *context, s32 key);

extern s32 D_80125C40;

extern s32 D_802D5BC0[][3][100][2];

s32 osAiGetLength();
extern s32 D_80125778;
void func_8007A758(AudioFrameInfo *frame);

extern s32 func_801181B0(OSPfs *pfs);

extern DrawGroup *D_801C0840[][32];
extern s32 func_8007E8EC(void *view, s32 perspNorm);
extern void func_8007EB64(u32 address, s32 params);
extern void func_8007EF64(s32 count, Gfx *src);
void func_80080AA8(s32 layer, ViewMatrix *views, u16 *perspNorms);

void func_8008F040(Vec3f *position, s32 count, f32 scale, s32 arg3);

extern u64 *func_8011DD48(u64 *commandList, s32 *commandCount, u32 outputBuffer, s16 samples);
extern u64 D_8010E160[];
extern u64 D_8010E230[];
extern u8 D_8010F660[];
extern u8 D_80145AA0[];
extern s32 D_80152EE8;
extern u64 *D_80152EF0[2];
extern s32 D_801B4A40;
s32 func_8007A5A4(AudioFrameInfo *frame, AudioFrameInfo *previous);

extern f32 D_800746E8;
extern f32 D_800746EC;

extern f32 D_80074894;
extern f32 D_80074898;

extern void func_800E28DC(struct CombatUnit *unit, f32 *point, s32 *bodyDelta, s32 *headDelta, s32 arg4);

void func_800E18B0(u16 corner, struct PolygonPoint **start, struct PolygonPoint **end);

s32 func_800DF214(u16 id);

struct PolygonPoint *func_800E0A48(u32 id);

void func_800E0A84(u16 *indices, struct PolygonPoint *out);

extern void func_800E21E4(CombatUnit *unit, DriveCommand *out, void *target);
void func_800E2AF0(CombatUnit *unit, DriveCommand *out, void *target);

extern s32 func_800E56B0(void *pairing);
extern UnitPairing D_8033AAE8[];
extern u16 D_8033B448;
void func_800E5BA0(s32 arg0, s32 arg1);

void func_800DEC5C(u8 *slots, CombatUnit *skip, AiGroup *group);

extern const char D_80072DE8[];
extern const char D_80072E08[];
extern const char D_80072E14[];

extern s32 func_800983E0(CombatUnit *unit, s32 amount, u8 entityId, s32 arg3);

extern int func_80077E94(void *camera);

extern s16 D_802D5A5A;
extern s16 D_802D5A76;
extern s16 D_802D5A8E;
extern s16 D_802D5AC0;

extern void func_800905D8(s32 sound, f32 *position, s32, s32, s32, s32, s32);
extern void func_800A06F8(ShotEffect *, s32, s32, PositionReport *);
extern void func_800A0930(ShotEffect *, s32, s32, s32);

extern char D_80072DFC[];

extern u8 D_8013589D;
extern u8 D_8013589E;
extern u8 D_8013589F;

extern void func_800F0738(EffectKind21 *effect, void *sender, void *input, void *output);
extern void func_800F09D0(EffectKind21 *effect, void *sender, void *input, void *output);
extern void func_800F0B60(EffectKind21 *effect, void *sender, void *input);

extern void *func_80106CCC(s32 index, s32 flags);

extern void func_800E5FA8(CombatUnit *unit, void *command, f32 *point, s32 *flags, f32 *a, f32 *b);

extern f32 D_80074848;
extern f32 D_8007484C;

extern s32 func_80109094(u32 value);

extern void func_801074AC(s32 motion, s32 x, s32 z, u16 value);
extern void func_80109364(QueryRecord *record, s32 minZ, s32 maxZ, s32 minX, s32 maxX);
extern f32 D_80074E00;

extern f32 D_80074E04;
extern int func_800F2270(void *effect, void *sender, void *input, void *output);

extern s16 D_8033AAE0;
extern s8 D_8033B44A;
extern s16 D_8033B44C;

extern AudioFrameInfo *D_801B4A48[3];
extern u8 D_801502F0[];

extern s32 func_801137F0(OSPfs *pfs);

extern u32 D_801B4AA0;

extern void func_80080C60(s32 bucket, void *matrices, u16 *indices);
extern void *memcpy(void *dest, const void *source, u32 size);
extern ViewMatrix D_801C9058[];
extern u16 D_801C9050[];

extern s32 func_800A1408(s32 arg0, s32 arg1, s32 arg2, u16 arg3, PointZX *from, PointZX *to, s32 arg6,
                          s32 arg7, s32 arg8);
extern s32 func_8010DAA0(void *pos, s32 arg1);

extern f32 D_800745D0;
extern f32 func_800E0D54(void *from, void *to);

extern void func_800A7F3C(f32 first[4][4], f32 second[4][4], f32 output[4][4]);
extern f32 func_800A7DBC(void *matrix, void *in, void *out);
s32 func_8009453C(f32 *point, f32 *screen, s32 index);

void func_8008011C(u8 red, u8 green, u8 blue, u8 alpha, s32 viewport);

#endif

extern Gfx *D_803276D0;

u64 func_8007B268(void);
