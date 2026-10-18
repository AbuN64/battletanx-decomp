#include "include_asm.h"

INCLUDE_ASM("span_1000", func_800A4D34);
INCLUDE_ASM("span_1000", func_800A4D58);
INCLUDE_ASM("span_1000", func_800A4E40);
INCLUDE_ASM("span_1000", func_800A4F44);
INCLUDE_ASM("span_1000", func_800A5050);
#ifdef NON_MATCHING
#include "shared/bt_span_1000_code_800A5050.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "shared/bt_types.h"









s32 func_800796F0();            /* extern */
const f32 D_80072DE4 = 30.0f;
extern s16 D_801260A8[];




void func_800A51E8(FuncA51E8State_Shared800A51E8 *arg0, s32 arg1, f32 arg2) {
    s32 temp_a0;
    void *temp_s2;
    f32 product;
    s32 current;

    if ((arg0->unk1A6 == 0) && ((temp_s2 = (void *) ((arg1 << 2) + (u32) arg0), temp_a0 = ((FuncA51E8State_Shared800A51E8 *) temp_s2)->unk260, (temp_a0 == 0)) || ((temp_a0 + D_801260A8[arg1]) < D_801B4AA8))) {
        if (arg1 == 1) {
            func_800796F0(0x2C, 0);
        }
        product = arg2 * D_80072DE4;
        current = D_801B4AA8;
        arg0->unk218 = arg1;
        arg0->unk21C = current + (s32) product;
        ((FuncA51E8State_Shared800A51E8 *) temp_s2)->unk260 = current;
    }
}









/* The values func_800A52AC loads by address:
 * 0x80072DEC = 30.0 (float, unnamed in this cartridge's tables)
 */
s32 func_8011CC84();  /* extern */

extern s32 D_80072DE8;                          



/* Initializes the object's timing fields and registers two callbacks when it is first activated. */

void func_800A52AC(func_800A52AC_S1_Shared800A51E8 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    if (arg0->unk1A6 == 0) {
        arg0->unk218 = 0x27;
        arg0->unk21C = (s32) (D_801B4AA8 + (s32) (arg3 * 30.0f));
        func_8011CC84(&arg0->unk220, &D_80072DE8, arg1);
        func_8011CC84(&arg0->unk240, &D_80072DE8, arg2);
    }
}
#else
INCLUDE_ASM("span_1000", func_800A51E8);
#endif
INCLUDE_ASM("span_1000", func_800A52AC);
INCLUDE_ASM("span_1000", func_800A5348);
INCLUDE_ASM("span_1000", func_800A5784);
#include "shared/bt_span_1000_code_800A5050.h"
#include "shared/bt_types.h"








#include "span_1000/code_800A51E8.h"
/* Adds to the counter at offset 0x210 and, when its 50000-unit quotient increases and the mode check succeeds, calls func_800A5DD8 with the new quotient scaled by 50000. */





void func_800A59E8(FuncA59E8State_Shared800A59E8 *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_t0;

    temp_v1 = arg0->unk210;
    temp_s1 = temp_v1 + arg1;
    temp_s0 = temp_s1 / 50000;
    temp_t0 = arg0->unk210 / 50000;
    if (temp_t0 >= temp_s0) {
        arg0->unk210 = temp_s1;
        return;
    }
    if (func_8007C700() != 0) {
        func_800A5DD8(arg0, temp_s0 * 0xC350);
    }
    arg0->unk210 = temp_s1;
}

INCLUDE_ASM("span_1000", func_800A5AA4);
#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
static inline void show_entity_message(PlayerRecord *entity, char *text0, char *text1) {
    if (entity->isAi == 0) {
        entity->messageColor = 0x27;
        entity->messageExpireTick = D_801B4AA8 + 0x5A;
        func_8011CC84(entity->messageLine0, D_80072DE8, text0);
        func_8011CC84(entity->messageLine1, D_80072DE8, text1);
    }
}
void func_800A5B6C(u16 index, s32 delta) {
    char line0[0x20];
    char line1[0x20];
    PlayerRecord *entity;
    PlayerRecord *other;
    s32 i;
    s32 count;

    entity = func_800A6688(index);
    entity->counter += delta;
    if (entity->counter < 0) {
        entity->counter = 0;
    }
    if (func_8007AAF4()->unk0 != 9) {
        return;
    }
    for (i = 0; i < func_8007AAB0(); i++) {
        if (i == entity->type) {
            continue;
        }
        other = func_800A6688(i);
        if (other->team != entity->team) {
            continue;
        }
        other->counter += delta;
        if (other->counter < 0) {
            other->counter = 0;
        }
        if (other->counter >= 7) {
            other->state = 2;
        }
    }
    count = entity->counter;
    if (count >= 7) {
        entity->state = 2;
        return;
    }
    func_8011CC84(line0, D_80072DFC, count, (count != 1) ? 'S' : ' ');
    line1[0] = 0;
    show_entity_message(entity, line0, line1);
}

INCLUDE_ASM("span_1000", func_800A5CD0);
INCLUDE_ASM("span_1000", func_800A5D5C);
#include "shared/bt_player.h"
#include "shared/bt_ai_team.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800A51E8.h"
extern s32 D_801B4AA8;
static inline void set_notice_lines(PlayerRecord *entity, char *text0, char *text1, s32 ticks) {
    if (entity->isAi == 0) {
        entity->messageColor = 0x27;
        entity->messageExpireTick = D_801B4AA8 + ticks;
        func_8011CC84(entity->messageLine0, D_80072DE8, text0);
        func_8011CC84(entity->messageLine1, D_80072DE8, text1);
    }
}
void func_800A5DD8(PlayerRecord *entity, s32 threshold) {
    char killText[0x20];
    char pointsText[0x20];

    if (entity->isAi != 0) {
        return;
    }
    entity->kills++;
    if (func_8007AAF4()->unk0 != 7) {
        entity->roundKills++;
    }
    if (threshold == 0) {
        return;
    }
     
    func_8011CC84(killText, D_80072E08, threshold);
    func_8011CC84(pointsText, D_80072E14);
    set_notice_lines(entity, killText, pointsText, 90);
}

INCLUDE_ASM("span_1000", func_800A5EB0);
INCLUDE_DATA("span_1000", D_800A5FE4);
