#ifndef SHARED_BT_RECORDS_H
#define SHARED_BT_RECORDS_H
#include "shared/bt_types.h"

struct Unknown800786B0;
struct Unknown80078764;
struct Unknown80078CF8;
struct Unknown80078CF8_1;
struct Unknown8007E41C;
struct Unknown8007E41C_1;
struct Unknown8007E694;
struct Unknown8007E694_1;
struct Unknown8007E75C;
struct Unknown8007E75C_1;
struct Unknown8007E9C8;
struct Unknown8007E9C8_1;
struct Unknown8007EBDC;
struct Unknown8007ECE8;
struct Unknown8008488C;
struct Unknown8008488C_1;
struct Unknown80086F3C;
struct Unknown80086F3C_1;
struct Unknown80086F3C_2;
struct Unknown80087798;
struct Unknown80087798_1;
struct Unknown80087798_2;
struct Unknown80087798_3;
struct Unknown80087D30;
struct Unknown80087D30_1;
struct Unknown80087D30_2;
struct Unknown80087D30_3;
struct Unknown80087D30_4;
struct Unknown80087D30_5;
struct Unknown80087D30_6;
struct Unknown80088004;
struct Unknown80088004_1;
struct Unknown80088004_2;
struct Unknown8008805C;
struct Unknown8008805C_1;
struct Unknown8008805C_2;
struct Unknown80088280;
struct Unknown80088280_1;
struct Unknown80088280_2;
struct Unknown80088280_3;
struct Unknown80088360;
struct Unknown8008D660;
struct Unknown8008E1BC;
struct Unknown8008E1BC_1;
struct Unknown8008FB1C;
struct Unknown8008FC9C;
struct Unknown8008FC9C_1;
struct Unknown800908F0;
struct Unknown80090A0C;
struct Unknown80090A0C_1;
struct Unknown8009189C;
struct Unknown80091CA4;
struct Unknown80091D6C;
struct Unknown80091D6C_1;
struct Unknown80091D6C_2;
struct Unknown80091D6C_3;
struct Unknown80091E98;
struct Unknown80091E98_1;
struct Unknown80091E98_2;
struct Unknown80091E98_3;
struct Unknown8009249C;
struct Unknown80094704;
struct Unknown8009BB5C;
struct Unknown8009EDAC;
struct Unknown8009F34C;
struct Unknown8009F34C_1;
struct Unknown8009F544;
struct Unknown8009FC0C;
struct Unknown8009FCD0;
struct Unknown800A0908;
struct Unknown800A0908_1;
struct Unknown800A0AD4;
struct Unknown800A2A28;
struct Unknown800A2A28_1;
struct Unknown800A4500;
struct Unknown800A4D34;
struct Unknown800A5AA4;
struct Unknown800A5CD0;
struct Unknown800A5CD0_1;
struct Unknown800A5D5C;
struct Unknown800A75EC;
struct Unknown800A75EC_1;
struct Unknown800A979C;
struct Unknown800A979C_1;
struct Unknown800AB0A4;
struct Unknown800AB0A4_1;
struct Unknown800AB128;
struct Unknown800AB15C;
struct Unknown800AB15C_1;
struct Unknown800DF58C;
struct Unknown800DF6F4;
struct Unknown800DF6F4_1;
struct Unknown800E2058;
struct Unknown800E2058_1;
struct Unknown800E262C;
struct Unknown800E2640;
struct Unknown800E26DC;
struct Unknown800E26DC_1;
struct Unknown800E26DC_2;
struct Unknown800E2CFC;
struct Unknown800E3A38;
struct Unknown800E3A64;
struct Unknown800E3A64_1;
struct Unknown800E3A64_2;
struct Unknown800E4584;
struct Unknown800E4584_1;
struct Unknown800E4820;
struct Unknown800E4D2C;
struct Unknown800E4D44;
struct Unknown800E9854;
struct Unknown800E99E0;
struct Unknown800ED358;
struct Unknown800ED358_1;
struct Unknown800EFCA8;
struct Unknown800EFCA8_1;
struct Unknown800EFCD0;
struct Unknown800EFCD0_1;
struct Unknown800EFCD0_2;
struct Unknown800EFCD0_3;
struct Unknown800F05F4;
struct Unknown800F05F4_1;
struct Unknown800F05F4_2;
struct Unknown800F1670;
struct Unknown800F1DC4;
struct Unknown800F1DC4_1;
struct Unknown800F1E74;
struct Unknown800F30C8;
struct Unknown800F3234;
struct Unknown800F46C8;
struct Unknown80105290;
struct Unknown8010770C;
struct Unknown80108E74;
struct Unknown80108E74_1;
struct Unknown8010B740;
struct Unknown8010B740_1;
struct Unknown8010CAE8;
struct Unknown8010D388;
struct Unknown8010DD78;
struct Unknown8010DD78_1;
struct Unknown8010DED4;

typedef struct Unknown800786B0 {
    u8 reserved00[0xC];
    s32 value0C;
    s32 value10;
    u8 value14;
    u8 reserved15[0x3];
    s32 value18;
    s32 value1C;
} Unknown800786B0;

typedef struct Unknown80078764 {
    u8 reserved00[0x24];
    f32 value24;
    f32 value28;
    f32 value2C;
    f32 value30;
    f32 value34;
    f32 value38;
    u8 reserved3C[0xC];
    f32 value48[4][4];
    s32 value88;
} Unknown80078764;

typedef struct Unknown80078CF8 {
    u8 reserved00[0x4];
    struct Unknown800AB128 *value04;
    u8 reserved08[0x4];
    u8 value0C;
    u8 value0D;
    u16 value0E;
    s32 value10;
    s32 value14;
} Unknown80078CF8;

typedef struct Unknown80078CF8_1 {
    u8 reserved00[0x4];
    s32 value04;
} Unknown80078CF8_1;

typedef struct Unknown8007E41C {
    u8 reserved00[0x4];
    u32 value04;
    u8 reserved08[0xC];
    u32 value14;
} Unknown8007E41C;

typedef struct Unknown8007E41C_1 {
    u8 reserved00[0xA0];
    Unknown8007E41C valueA0[1];
    u8 reservedB8[0x18];
    u16 valueD0;
    u8 reservedD2[0x6];
    u32 *valueD8;
    u32 *valueDC;
    u8 reservedE0[0x8];
    u32 valueE8;
} Unknown8007E41C_1;

typedef struct Unknown8007E694 {
    u8 reserved00[0x90];
    Unknown8007E41C value90[2];
    u8 reservedC0[0x10];
    u16 valueD0;
    u8 reservedD2[0xA];
    u32 *valueDC;
    u8 reservedE0[0x8];
    u32 valueE8;
} Unknown8007E694;

typedef struct Unknown8007E694_1 {
    f32 value00[4][4];
    u32 value40;
} Unknown8007E694_1;

typedef struct Unknown8007E75C {
    u8 reserved00[0x90];
    Unknown8007E41C value90[2];
    u8 reservedC0[0x10];
    u16 valueD0;
    u8 reservedD2[0x6];
    u32 *valueD8;
    u8 reservedDC[0xC];
    u32 valueE8;
} Unknown8007E75C;

typedef struct Unknown8007E75C_1 {
    f32 value00[4][4];
    u32 value40;
} Unknown8007E75C_1;

typedef struct Unknown8007E9C8 {
    u8 reserved00[0x90];
    Unknown8007E41C value90[1];
    u8 reservedA8[0x28];
    u16 valueD0;
    u8 reservedD2[0xA];
    u32 *valueDC;
    u8 reservedE0[0x8];
    u32 valueE8;
} Unknown8007E9C8;

typedef struct Unknown8007E9C8_1 {
    u8 reserved00[0x40];
    u32 value40;
} Unknown8007E9C8_1;

typedef struct Unknown8007EBDC {
    u8 reserved00[0xD8];
    u32 *valueD8;
} Unknown8007EBDC;

typedef struct Unknown8007ECE8 {
    u8 reserved00[0x90];
    Unknown8007E41C value90[2];
    u8 reservedC0[0x10];
    u16 valueD0;
    u8 reservedD2[0x6];
    u32 *valueD8;
    u32 *valueDC;
    u8 reservedE0[0x8];
    u32 valueE8;
} Unknown8007ECE8;

typedef struct Unknown8008488C {
    u8 reserved00[0x20];
    f32 value20;
    f32 value24;
    u8 reserved28[0x4];
} Unknown8008488C;

typedef struct Unknown8008488C_1 {
    u8 reserved00[0x584];
    Unknown8008488C value584[1];
} Unknown8008488C_1;

typedef struct Unknown80086F3C {
    s32 value00;
    s32 value04;
    s32 value08;
    s32 value0C;
} Unknown80086F3C;

typedef struct Unknown80086F3C_1 {
    u8 reserved00[0x936C];
    s32 value936C;
    Unknown80086F3C value9370[256];
} Unknown80086F3C_1;

typedef struct Unknown80086F3C_2 {
    u8 reserved00[0x28];
    struct Unknown80086F3C_1 *value28;
} Unknown80086F3C_2;

typedef struct Unknown80087798 {
    u8 value00;
    u8 value01;
    u16 value02;
} Unknown80087798;

typedef struct Unknown80087798_1 {
    s32 value00;
    s32 value04;
} Unknown80087798_1;

typedef struct Unknown80087798_2 {
    u8 reserved00[0xE20];
    Unknown80087798_1 valueE20[64];
} Unknown80087798_2;

typedef struct Unknown80087798_3 {
    u8 reserved00[0x10];
    struct Unknown80087798 *value10;
    u8 reserved14[0x14];
    struct Unknown80087798_2 *value28;
} Unknown80087798_3;

typedef struct Unknown80087D30 {
    u8 reserved00[0x27C];
    s32 value27C;
    s32 value280;
    u8 reserved284[0x58];
    s32 value2DC;
} Unknown80087D30;

typedef struct Unknown80087D30_1 {
    u16 value00;
    u16 value02;
    u8 reserved04[0x10];
} Unknown80087D30_1;

typedef struct Unknown80087D30_2 {
    u8 reserved00[0x18];
    s16 value18;
    u8 reserved1A[0x2];
} Unknown80087D30_2;

typedef struct Unknown80087D30_3 {
    u8 value00;
    u8 value01;
    u16 value02;
    u8 reserved04[0x8];
} Unknown80087D30_3;

typedef struct Unknown80087D30_4 {
    u8 value00;
    u8 value01;
    u16 value02;
} Unknown80087D30_4;

typedef struct Unknown80087D30_5 {
    u32 value00;
    u8 reserved04[0xC];
} Unknown80087D30_5;

typedef struct Unknown80087D30_6 {
    struct Unknown80087D30 *value00;
    struct Unknown80087D30_1 *value04;
    struct Unknown80087D30_2 *value08;
    struct Unknown80087D30_3 *value0C;
    u8 reserved10[0x4];
    struct Unknown80087D30_4 *value14;
    struct Unknown80087D30_5 *value18;
} Unknown80087D30_6;

typedef struct Unknown80088004 {
    s32 value00;
    u8 reserved04[0xC];
} Unknown80088004;

typedef struct Unknown80088004_1 {
    u8 reserved00[0x936C];
    s32 value936C;
    Unknown80088004 value9370[1];
} Unknown80088004_1;

typedef struct Unknown80088004_2 {
    u8 reserved00[0x28];
    struct Unknown80088004_1 *value28;
} Unknown80088004_2;

typedef struct Unknown8008805C {
    s32 value00;
    u8 reserved04[0xC];
} Unknown8008805C;

typedef struct Unknown8008805C_1 {
    u8 reserved00[0xA374];
    s32 valueA374;
    Unknown8008805C valueA378[1];
} Unknown8008805C_1;

typedef struct Unknown8008805C_2 {
    u8 reserved00[0x28];
    struct Unknown8008805C_1 *value28;
} Unknown8008805C_2;

typedef struct Unknown80088280 {
    u8 value00;
    u8 value01;
    u16 value02;
} Unknown80088280;

typedef struct Unknown80088280_1 {
    u8 reserved00[0x11400];
    s32 value11400;
    s32 value11404;
} Unknown80088280_1;

typedef struct Unknown80088280_2 {
    u8 reserved00[0xC];
    struct Unknown80088360 *value0C;
    u8 reserved10[0x4];
    struct Unknown80088280 *value14;
    u8 reserved18[0x10];
    struct Unknown80088280_1 *value28;
} Unknown80088280_2;

typedef struct Unknown80088280_3 {
    u8 reserved00[0x570];
    struct Unknown80088360 *value570;
    struct Unknown80088280 *value574;
} Unknown80088280_3;

typedef struct Unknown80088360 {
    u8 value00;
    u8 value01;
    u16 value02;
    u16 value04;
    u16 value06;
    u16 value08;
    u16 value0A;
} Unknown80088360;

typedef struct Unknown8008D660 {
    u8 reserved00[0xC];
    f32 value0C;
    f32 value10;
    f32 value14;
    f32 value18;
    f32 value1C;
    f32 value20;
    f32 value24;
    s16 value28;
    s16 value2A;
    u8 value2C;
    u8 value2D;
    u16 value2E;
    u16 value30;
    u8 value32;
    u8 value33;
    s32 value34;
} Unknown8008D660;

typedef struct Unknown8008E1BC {
    u8 reserved00[0xC];
    u8 value0C[16];
    u16 value1C;
    u16 value1E;
} Unknown8008E1BC;

typedef struct Unknown8008E1BC_1 {
    u8 value00[64];
} Unknown8008E1BC_1;

typedef struct Unknown8008FB1C {
    u8 reserved00[0xC];
    f32 value0C[3];
    u8 reserved18[0xC];
    f32 value24[3];
    u16 value30[3];
    u16 value36[3];
    u8 reserved3C[0x4];
    u8 value40;
    u8 reserved41[0x3];
} Unknown8008FB1C;

typedef struct Unknown8008FC9C {
    s32 value00[17];
} Unknown8008FC9C;

typedef struct Unknown8008FC9C_1 {
    u8 reserved00[0xC];
    s32 value0C[3];
    s32 value18[6];
    u16 value30;
    u16 value32;
    u16 value34;
    u8 reserved36[0x6];
    s32 value3C;
    u8 reserved40[0x4];
    s32 value44;
} Unknown8008FC9C_1;

typedef struct Unknown800908F0 {
    u8 reserved00[0xC];
    s32 value0C;
    s32 value10;
    u8 reserved14[0x8];
    u8 value1C;
    u8 value1D;
    s16 value1E;
} Unknown800908F0;

typedef struct Unknown80090A0C {
    u8 reserved00[0xC];
    s32 value0C;
    s32 value10;
    u8 reserved14[0x8];
    u8 value1C;
    u8 value1D;
    s16 value1E;
} Unknown80090A0C;

typedef struct Unknown80090A0C_1 {
    f32 value00;
    f32 value04;
} Unknown80090A0C_1;

typedef struct Unknown8009189C {
    s16 value00;
    s16 value02;
    s16 value04;
    u8 reserved06[0x6];
    u8 value0C;
    u8 value0D;
    u8 value0E;
    u8 reserved0F[0x1];
} Unknown8009189C;

typedef struct Unknown80091CA4 {
    u8 reserved00[0xC];
    s32 value0C;
    s32 value10;
    s32 value14;
} Unknown80091CA4;

typedef struct Unknown80091D6C {
    u8 reserved00[0xC];
    u8 value0C;
    u8 value0D;
    s8 value0E;
    u8 reserved0F[0x1];
    s16 value10;
    s16 value12;
    s32 value14;
    s32 value18;
    s16 value1C;
    u8 reserved1E[0x2];
} Unknown80091D6C;

typedef struct Unknown80091D6C_1 {
    u8 reserved00[0x52];
    s16 value52;
    u8 reserved54[0x4];
} Unknown80091D6C_1;

typedef struct Unknown80091D6C_2 {
    u8 value00;
    u8 reserved01[0x3];
} Unknown80091D6C_2;

typedef struct Unknown80091D6C_3 {
    u8 reserved00[0x568];
    struct Unknown80091D6C_1 *value568;
    struct Unknown80091D6C_2 *value56C;
} Unknown80091D6C_3;

typedef struct Unknown80091E98 {
    u8 reserved00[0x52];
    s16 value52;
    u8 reserved54[0x4];
} Unknown80091E98;

typedef struct Unknown80091E98_1 {
    u8 value00;
    u8 reserved01[0x3];
} Unknown80091E98_1;

typedef struct Unknown80091E98_2 {
    u8 reserved00[0x568];
    struct Unknown80091E98 *value568;
    struct Unknown80091E98_1 *value56C;
} Unknown80091E98_2;

typedef struct Unknown80091E98_3 {
    u8 reserved00[0xC];
    u8 value0C;
    u8 value0D;
    u8 value0E;
    u8 value0F;
    s16 value10;
    s16 value12;
    s16 value14;
    u8 value16;
    u8 value17;
    s32 value18;
    s32 value1C;
    u8 reserved20[0x4];
    s32 value24;
} Unknown80091E98_3;

typedef struct Unknown8009249C {
    u8 reserved00[0x6];
    s16 value06;
    s16 value08;
    s16 value0A;
    s16 value0C;
    s16 value0E;
} Unknown8009249C;

typedef struct Unknown80094704 {
    f32 value00;
    f32 value04;
} Unknown80094704;

typedef struct Unknown8009BB5C {
    u8 reserved00[0x4];
    u8 value04;
    u8 reserved05[0x457];
    s32 value45C;
} Unknown8009BB5C;

typedef struct Unknown8009EDAC {
    u8 reserved00[0xC];
    void *value0C;
} Unknown8009EDAC;

typedef struct Unknown8009F34C {
    u8 reserved00[0x1C];
    s32 value1C;
} Unknown8009F34C;

typedef struct Unknown8009F34C_1 {
    u8 reserved00[0xC];
    struct Unknown8009F34C *value0C;
    s8 value10;
    u8 reserved11[0x3];
} Unknown8009F34C_1;

typedef struct Unknown8009F544 {
    u8 reserved00[0xC];
    CombatUnit *value0C;
} Unknown8009F544;

typedef struct Unknown8009FC0C {
    u8 reserved00[0x38C];
    f32 value38C;
    f32 value390;
} Unknown8009FC0C;

typedef struct Unknown8009FCD0 {
    u8 reserved00[0x14];
    f32 value14;
    f32 value18;
} Unknown8009FCD0;

typedef struct Unknown800A0908 {
    u8 reserved00[0x10];
    f32 value10;
    u8 reserved14[0x4];
    f32 value18;
    u8 reserved1C[0x9];
    u8 value25;
    u8 reserved26[0x2];
} Unknown800A0908;

typedef struct Unknown800A0908_1 {
    s8 value00;
    u8 reserved01[0x3];
    f32 value04;
    f32 value08;
} Unknown800A0908_1;

typedef struct Unknown800A0AD4 {
    u8 reserved00[0xC];
    u32 value0C;
    u8 value10[12];
    u16 value1C;
    u8 reserved1E[0x7];
    u8 value25;
    u8 value26;
    u8 reserved27[0x1];
} Unknown800A0AD4;

typedef struct Unknown800A2A28 {
    u8 reserved00[0x1C];
    f32 value1C;
    f32 value20;
} Unknown800A2A28;

typedef struct Unknown800A2A28_1 {
    s8 value00;
    u8 reserved01[0x3];
    f32 value04;
    f32 value08;
} Unknown800A2A28_1;

typedef struct Unknown800A4500 {
    s16 value00[16];
    s16 value20;
    u8 reserved22[0x184];
    u8 value1A6;
    u8 reserved1A7[0x1];
} Unknown800A4500;

typedef struct Unknown800A4D34 {
    u8 reserved00[0x48];
    u8 value48[32];
    u8 reserved68[0x88];
    u8 valueF0;
} Unknown800A4D34;

typedef struct Unknown800A5AA4 {
    u8 reserved00[0x210];
    s32 value210;
} Unknown800A5AA4;

typedef struct Unknown800A5CD0 {
    u8 value00;
    u8 value01;
    u8 reserved02[0x12];
    s32 value14;
    u8 reserved18[0x80];
    s32 value98;
    u8 reserved9C[0x30];
    s32 valueCC;
    u8 reservedD0[0x4];
    s32 valueD4;
} Unknown800A5CD0;

typedef struct Unknown800A5CD0_1 {
    s16 value00[5];
    u8 reserved0A[0x30];
    u16 value3A;
} Unknown800A5CD0_1;

typedef struct Unknown800A5D5C {
    u8 reserved00[0x22];
    u8 value22;
    u8 reserved23[0x189];
    u16 value1AC;
    u8 reserved1AE[0x5A];
    s32 value208;
} Unknown800A5D5C;

typedef struct Unknown800A75EC {
    u8 reserved00[0x4];
    u8 value04;
} Unknown800A75EC;

typedef struct Unknown800A75EC_1 {
    u8 reserved00[0x8];
    s32 value08;
    struct Unknown800A75EC *value0C;
} Unknown800A75EC_1;

typedef struct Unknown800A979C {
    u32 value00;
    u32 value04;
    u16 value08;
    u8 value0A[4];
    u8 value0E[16];
    u8 reserved1E[0x2];
} Unknown800A979C;

typedef struct Unknown800A979C_1 {
    u8 value00[104];
} Unknown800A979C_1;

typedef struct Unknown800AB0A4 {
    u8 reserved00[0x4];
    u16 value04;
    u16 value06;
} Unknown800AB0A4;

typedef struct Unknown800AB0A4_1 {
    u8 reserved00[0x1A];
    s16 value1A;
    s16 value1C;
    u8 reserved1E[0xA];
    struct Unknown800AB0A4 *value28;
} Unknown800AB0A4_1;

typedef struct Unknown800AB128 {
    u32 value00;
    u32 value04;
} Unknown800AB128;

typedef struct Unknown800AB15C {
    u32 value00[2];
} Unknown800AB15C;

typedef struct Unknown800AB15C_1 {
    u8 reserved00[0x4];
    struct Unknown800AB15C *value04;
    u8 reserved08[0x1C];
    struct Unknown800AB15C *value24;
} Unknown800AB15C_1;

typedef struct Unknown800DF58C {
    u8 value00;
    u8 value01;
    u8 reserved02[0x2];
    u16 value04;
    u16 value06;
    u8 reserved08[0x10];
} Unknown800DF58C;

typedef struct Unknown800DF6F4 {
    u8 value00;
    u8 value01;
    u8 reserved02[0x2];
    u16 value04;
    u16 value06;
    u8 reserved08[0x10];
} Unknown800DF6F4;

typedef struct Unknown800DF6F4_1 {
    Unknown800DF6F4 value00[1];
    u8 reserved18[0x11940];
    u16 value11958;
} Unknown800DF6F4_1;

typedef struct Unknown800E2058 {
    f32 value00;
    f32 value04;
    u8 reserved08[0x8];
    s16 value10;
    u8 reserved12[0x2];
    s8 value14;
    s8 value15;
    u8 reserved16[0x2];
} Unknown800E2058;

typedef struct Unknown800E2058_1 {
    u8 reserved00[0x24];
    f32 value24;
    u8 reserved28[0x4];
    f32 value2C;
    u8 reserved30[0x74];
    f32 valueA4[2];
    u8 reservedAC[0x288];
    Unknown800E2058 value334;
} Unknown800E2058_1;

typedef struct Unknown800E262C {
    u8 reserved00[0x14];
    u16 value14;
} Unknown800E262C;

typedef struct Unknown800E2640 {
    u8 reserved00[0x4];
    u8 value04;
} Unknown800E2640;

typedef struct Unknown800E26DC {
    s32 value00;
    s32 value04;
} Unknown800E26DC;

typedef struct Unknown800E26DC_1 {
    u32 value00;
    u8 reserved04[0x4];
    Unknown800E26DC value08[1];
} Unknown800E26DC_1;

typedef struct Unknown800E26DC_2 {
    void *value00;
    void *value04;
    void *value08;
    s32 *value0C;
    struct Unknown800E26DC_1 *value10;
    s32 value14;
    u16 value18;
    u16 value1A;
    u8 value1C;
    u8 reserved1D[0x3];
    f32 value20[8];
    s32 value40;
    s32 value44;
} Unknown800E26DC_2;

typedef struct Unknown800E2CFC {
    u8 reserved00[0xB4];
    u32 valueB4;
    s32 valueB8;
} Unknown800E2CFC;

typedef struct Unknown800E3A38 {
    s32 value00;
    u8 reserved04[0x4];
    f32 value08;
    f32 value0C;
    f32 value10;
    f32 value14;
} Unknown800E3A38;

typedef struct Unknown800E3A64 {
    u8 reserved00[0x4];
    s32 value04;
    s32 value08;
    u8 reserved0C[0x10];
    f32 value1C;
    f32 value20;
} Unknown800E3A64;

typedef struct Unknown800E3A64_1 {
    u8 reserved00[0x34C];
    struct Unknown800E3A64 *value34C;
} Unknown800E3A64_1;

typedef struct Unknown800E3A64_2 {
    s32 value00;
    f32 *value04;
    f32 value08[2];
    struct Unknown800E3A64 *value10;
    s32 value14;
} Unknown800E3A64_2;

typedef struct Unknown800E4584 {
    s32 value00;
    u8 reserved04[0xD];
    s8 value11;
    u8 reserved12[0x2];
    struct Unknown800E4584_1 *value14;
} Unknown800E4584;

typedef struct Unknown800E4584_1 {
    u8 reserved00[0x4];
    u8 value04;
    u8 reserved05[0x93];
    s32 value98;
    Unknown800E4584 value9C;
} Unknown800E4584_1;

typedef struct Unknown800E4820 {
    u8 reserved00[0x10];
    s32 value10;
    u8 reserved14[0x34];
} Unknown800E4820;

typedef struct Unknown800E4D2C {
    u8 reserved00[0x6];
    s16 value06;
    u8 reserved08[0x1E];
    s16 value26;
    u8 reserved28[0x6];
    s16 value2E;
    u8 reserved30[0x1E];
    s16 value4E;
    s8 value50;
    u8 reserved51[0x1];
} Unknown800E4D2C;

typedef struct Unknown800E4D44 {
    s16 value00[3];
    u16 value06;
    s16 value08[15];
    u16 value26;
} Unknown800E4D44;

typedef struct Unknown800E9854 {
    u8 reserved00[0x10C];
    f32 value10C[256];
} Unknown800E9854;

typedef struct Unknown800E99E0 {
    u8 reserved00[0x30];
    s32 value30[4];
    s32 value40;
    s32 value44;
} Unknown800E99E0;

typedef struct Unknown800ED358 {
    u8 reserved00[0xC];
    f32 value0C;
    u8 reserved10[0x4];
    f32 value14;
    u8 reserved18[0x4];
    u8 value1C;
    u8 reserved1D[0x3];
} Unknown800ED358;

typedef struct Unknown800ED358_1 {
    s8 value00;
    u8 reserved01[0x3];
    f32 value04;
    f32 value08;
} Unknown800ED358_1;

typedef struct Unknown800EFCA8 {
    u8 reserved00[0xC];
    f32 value0C;
    f32 value10;
    u8 reserved14[0x4];
    u16 value18;
    u8 reserved1A[0x2];
} Unknown800EFCA8;

typedef struct Unknown800EFCA8_1 {
    s8 value00;
    u8 reserved01[0x3];
    f32 value04;
    f32 value08;
} Unknown800EFCA8_1;

typedef struct Unknown800EFCD0 {
    u8 reserved00[0xC];
    f32 value0C;
    f32 value10;
    u8 reserved14[0x2];
    s16 value16;
    u16 value18;
    u8 reserved1A[0x2];
    s32 value1C;
    s32 value20;
} Unknown800EFCD0;

typedef struct Unknown800EFCD0_1 {
    u8 value00;
    u8 reserved01[0x57];
} Unknown800EFCD0_1;

typedef struct Unknown800EFCD0_2 {
    u8 reserved00[0x568];
    struct Unknown800EFCD0_1 *value568;
} Unknown800EFCD0_2;

typedef struct Unknown800EFCD0_3 {
    f32 value00;
    f32 value04;
} Unknown800EFCD0_3;

typedef struct Unknown800F05F4 {
    u8 reserved00[0x54];
    u16 value54;
    u8 reserved56[0x2];
} Unknown800F05F4;

typedef struct Unknown800F05F4_1 {
    u8 reserved00[0x568];
    struct Unknown800F05F4 *value568;
} Unknown800F05F4_1;

typedef struct Unknown800F05F4_2 {
    u8 reserved00[0xC];
    s8 value0C;
    u8 reserved0D[0x3];
    f32 value10;
    f32 value14;
    u16 value18;
    u8 reserved1A[0x2];
    s32 value1C;
    s32 value20;
    s32 value24;
    u8 reserved28[0x4];
    u16 value2C;
    s16 value2E;
    s16 value30;
    s16 value32;
} Unknown800F05F4_2;

typedef struct Unknown800F1670 {
    u8 reserved00[0xC];
    u8 value0C[12];
    u16 value18;
    u8 value1A;
    u8 value1B;
    s16 value1C;
    u8 reserved1E[0x2];
    s32 value20;
    s32 value24;
    s32 value28;
    u8 value2C;
    u8 reserved2D[0x3];
} Unknown800F1670;

typedef struct Unknown800F1DC4 {
    f32 value00;
    f32 value04;
    f32 value08;
} Unknown800F1DC4;

typedef struct Unknown800F1DC4_1 {
    u8 reserved00[0xC];
    Unknown800F1DC4 value0C;
    Unknown800F1DC4 value18;
    s8 value24;
    s8 value25;
    u8 value26;
    u8 value27;
} Unknown800F1DC4_1;

typedef struct Unknown800F1E74 {
    u8 reserved00[0xC];
    Unknown800F1DC4 value0C;
    Unknown800F1DC4 value18;
    s8 value24[3];
    u8 reserved27[0x1];
} Unknown800F1E74;

typedef struct Unknown800F30C8 {
    u8 reserved00[0xC];
    u8 value0C[6];
    u8 reserved12[0x2];
    s32 value14;
    s32 value18;
    s32 value1C;
} Unknown800F30C8;

typedef struct Unknown800F3234 {
    u8 reserved00[0xC];
    u8 value0C;
    u8 value0D;
    u8 value0E;
    u8 value0F;
    u8 value10;
    u8 value11;
    u8 reserved12[0x2];
    s32 value14;
    s32 value18;
} Unknown800F3234;

typedef struct Unknown800F46C8 {
    u8 reserved00[0x28];
    f32 value28;
    f32 value2C;
} Unknown800F46C8;

typedef struct Unknown80105290 {
    s32 value00;
    u8 value04[4];
    char *value08;
} Unknown80105290;

typedef struct Unknown8010770C {
    u8 reserved00[0x28];
} Unknown8010770C;

typedef struct Unknown80108E74 {
    s16 value00;
    s16 value02;
    s16 value04;
    s16 value06;
    s16 value08;
    s16 value0A;
    s16 value0C;
    s16 value0E;
    u16 value10;
    u8 reserved12[0x16];
} Unknown80108E74;

typedef struct Unknown80108E74_1 {
    f32 value00;
    f32 value04;
} Unknown80108E74_1;

typedef struct Unknown8010B740 {
    f32 value00;
    f32 value04;
} Unknown8010B740;

typedef struct Unknown8010B740_1 {
    u8 reserved00[0x2];
    s16 value02;
    s16 value04;
    s16 value06;
    s16 value08;
    s16 value0A;
    s16 value0C;
    u8 reserved0E[0x2];
    u16 value10;
} Unknown8010B740_1;

typedef struct Unknown8010CAE8 {
    u8 reserved00[0xC];
    u32 value0C;
} Unknown8010CAE8;

typedef struct Unknown8010D388 {
    u8 reserved00[0xC];
    f32 value0C;
    f32 value10;
    f32 value14;
    u16 value18;
    u8 reserved1A[0x6];
    u16 value20;
    u8 reserved22[0x6];
    f32 value28;
} Unknown8010D388;

typedef struct Unknown8010DD78 {
    u8 reserved00[0xC];
    f32 value0C;
    f32 value10;
} Unknown8010DD78;

typedef struct Unknown8010DD78_1 {
    s8 value00;
    u8 reserved01[0x3];
    f32 value04;
    f32 value08;
} Unknown8010DD78_1;

typedef struct Unknown8010DED4 {
    u8 reserved00[0xC];
    s32 value0C;
    s32 value10;
    Unknown80094704 value14;
    Unknown80094704 value1C;
    Unknown80094704 value24;
    s32 value2C;
    u16 value30;
    u8 value32;
    u8 reserved33[0x1];
} Unknown8010DED4;

#endif
