#ifndef SHARED_BT_SPAN_1000_CODE_8008B1F0_H
#define SHARED_BT_SPAN_1000_CODE_8008B1F0_H
#include "shared/bt_types.h"
extern void func_8008C2DC(int arg0);






typedef struct EffectHeader {
    s16 next;
    u16 reserved02;
    u32 serial;
    u32 kind;
} EffectHeader;
typedef struct GrenadeEffect {
    EffectHeader header;
    f32 x;
    f32 y;
    f32 z;
    f32 vx;
    f32 vy;
    f32 vz;
    u16 timer;
    u16 spin;
    u8 owner;
    s32 ignore;
} GrenadeEffect;
typedef struct PointZX {
    f32 z;
    f32 x;
} PointZX;
typedef struct SegmentHit {
    struct QueryObject *object;
    f32 x;
    f32 y;
    f32 z;
    f32 normalZ;
    f32 normalX;
} SegmentHit;
typedef struct EffectMatrix16 {
    f32 m[4][4];
} EffectMatrix16;
typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;
typedef struct EffectKind16 {
    EffectHeader header;
    Vec3f pos;
    f32 speed;
    u16 angle;
    u16 value1E;
    u16 value20;
    s16 value22;
    u8 value24;
    u8 value25;
    s8 value26;
    u8 value27;
    Vec3f localStart;
    Vec3f localEnd;
    s32 value40;
    s16 value44;
    u8 value46;
} EffectKind16;
typedef struct EffectKind2B {
    EffectHeader header;
    s32 value0C;
    Vec3f position;
    s32 lifetime;
    u16 value20;
    u16 value22;
    f32 value24;
    f32 value28;
    s32 value2C;
    u8 mode;
    s16 value32;
    u16 value34;
    u16 value36;
    f32 drift;
    u8 currentIndex;
    u8 nextIndex;
    u8 value3E;
    u8 value3F;
    u16 blend;
    u16 blendStep;
} EffectKind2B;
typedef struct EffectKind2BParams {
    s32 value00;
    Vec3f position;
    f32 value10;
    f32 value14;
    s32 value18;
    s32 lifetime;
    u16 value20;
    u16 value22;
    u16 value24;
    u16 value26;
    u16 value28;
} EffectKind2BParams;
typedef struct ScriptedEffect {
    EffectHeader header;
    u8 script;
    u16 startTime;
    s16 now;
    s16 elapsed;
    u8 step;
} ScriptedEffect;
typedef struct EffectScriptStep {
    s32 (*handler)(ScriptedEffect *effect, s32 a, s32 b);
    s32 a;
    s32 b;
} EffectScriptStep;
typedef struct EffectKind2DTriple {
    s32 value00;
    s32 value04;
    s32 value08;
} EffectKind2DTriple;
typedef struct EffectKind2DParams {
    EffectKind2DTriple value00;
    u16 value0C;
    s32 value10;
    u16 value14;
    s32 value18;
    f32 value1C;
    f32 value20;
} EffectKind2DParams;
typedef struct EffectKind2D {
    EffectHeader header;
    EffectKind2DTriple value0C;
    u16 value18;
    s32 value1C;
    u16 value20;
    s32 value24;
    f32 value28;
    f32 value2C;
    u8 value30;
    u8 value31;
    s16 value32;
    u8 value34;
    u8 value35;
    s16 value36;
    s16 value38;
} EffectKind2D;
typedef struct EffectKind0D {
    EffectHeader header;
    f32 value0C;
    f32 value10;
    f32 value14;
    s16 value18;
    s8 value1A;
    s16 value1C;
    s32 value20;
    s32 value24;
    s32 value28;
    s8 value2C;
} EffectKind0D;
typedef struct EffectKind0A {
    EffectHeader header;
    s32 value0C;
    f32 value10;
    f32 value14;
    f32 value18;
    s32 value1C;
} EffectKind0A;

/* Each allocator slot has a common header and sixty bytes of effect data. */
typedef struct EffectSlot {
    EffectHeader header;
    u8 data[60];
} EffectSlot;
typedef struct EffectKind {
    void (*update)(void *effect, s32 *status);
    void (*event)(void *effect, void *sender, s32 event, void *input, void *output);
    void (*draw)(void *effect);
} EffectKind;

typedef struct EffectKind08 {
    EffectHeader header;
    Vec3f position;
    Vec3f velocity;
    s16 value24, value26;
    u16 value28;
    f32 scale;
    s32 value30;
    u8 value34;
    s32 value38;
    f32 value3C;
} EffectKind08;
typedef struct EffectKind18 {
    EffectHeader header;
    Vec3f position;
    s16 angle;
    EffectHeader *owner;
    u32 ownerSerial;
    s32 frame;
} EffectKind18;

typedef struct ShotEffect {
    EffectHeader header;
    u32 kind;
    f32 position[3];
    u16 volume;
    s32 motion;
    u8 state, alternate, soundClass;
} ShotEffect;
typedef struct PositionReport {
    s8 valid;
    f32 z, x;
} PositionReport;
typedef struct EffectKind19 {
    EffectHeader header;
    u8 red, green, blue;
    s32 frameLimit, frame, player;
} EffectKind19;
typedef struct EffectKind21 {
    EffectHeader header;
    u8 flags;
    f32 z, x;
    u16 angle;
    s32 motion, slot, hits, lastTick;
    s16 model, sound;
    u16 secondaryModel;
    s16 count, heading;
} EffectKind21;
typedef struct EffectKind17 {
    EffectHeader header;
    s32 value0C;
    f32 z, x;
    s32 active, motion, owner;
} EffectKind17;
typedef struct EffectKind11 { EffectHeader header; s32 active; } EffectKind11;
typedef struct EffectKind12 {
    EffectHeader header;
    s32 value0C;
    s32 value10;
    s32 value14;
    s32 value18;
    s8 value1C;
    s8 value1D;
} EffectKind12;
typedef struct EffectKind1F {
    EffectHeader header;
    s32 value0C;
    f32 value10;
    f32 value14;
} EffectKind1F;
typedef struct EffectKind20 {
    EffectHeader header;
    s8 value0C;
    s8 value0D;
    s8 value0E;
    s8 value0F;
    u8 value10;
    u8 value11;
    s32 value14;
    s32 value18;
    s32 value1C;
} EffectKind20;
typedef struct EffectKind1D {
    EffectHeader header;
    PointZX center;
    s32 motion, createTick, startTick, value20, owner;
} EffectKind1D;

typedef struct SequenceEffect {
    EffectHeader header;
    u8 flags;
    u8 stepCount;
    u8 step;
} SequenceEffect;

typedef struct EffectKind0C {
    EffectHeader header;
    Vec3f position;
    u16 angle;
    f32 remaining;
    f32 distance;
    s32 sound;
    u8 player;
} EffectKind0C;

typedef struct EffectKind23 {
    EffectHeader header;
    Vec3f position, end;
    f32 axisB[3], axisA[3];
    u8 age, life, mode, red, green, blue;
} EffectKind23;
typedef struct EffectKind1E {
    EffectHeader header;
    s32 column, row;
    PointZX origin, step, side;
    s32 target;
    u16 value30;
    u8 useEntity;
} EffectKind1E;
/* Kind 0x04: the update hands the word at 0x24 to func_8010CB4C. */
typedef struct EffectKind04 {
    EffectHeader header;
    s32 value0C, value10, value14, value18, value1C, value20;
    s32 value24;
} EffectKind04;
/* Kind 0x10: reports its position (x at 0xC, z at 0x14) unless hidden. */
typedef struct EffectKind10 {
    EffectHeader header;
    Vec3f position;
    u8 value18[4];
    u8 hidden;
} EffectKind10;
/* Kind 0x14: an event-only effect owned by a player. */
typedef struct EffectKind14 {
    EffectHeader header;
    u8 player;
} EffectKind14;
/* Kind 0x15: a node a combat unit keeps in its list at 0x98 (func_800A70E0), released back to its player. */
typedef struct EffectKind15 {
    EffectHeader header;
    u8 player;
    u8 value0D;
    u8 reserved0E[2];
    s32 state;
    u8 value14;
    u8 reserved15[3];
    s32 value18;
    PointZX point;
    s32 deadline;
    s32 value28;
    struct EffectKind15 *next;
} EffectKind15;
/* Kind 0x1B: reports the point at 0x1C. */
typedef struct EffectKind1B {
    EffectHeader header;
    u8 state;
    u8 value0D;
    u8 value0E;
    u8 reserved0F;
    u16 value10;
    u16 value12;
    s32 value14;
    u16 value18;
    u16 reserved1A;
    PointZX point;
} EffectKind1B;
/* The three-word message an effect event writes back: a code, a kind and the owner. */
typedef struct EffectMessage {
    s32 code;
    s32 kind;
    s32 owner;
} EffectMessage;
#endif
