#include "game/sys_80076000.h"
#include "shared/bt_ai_team.h"
#include "shared/bt_player.h"
#include "span_1000/code_8007EBA0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
static inline void show_entity_message(PlayerRecord *entity, char *text0, char *text1) {
    if (entity->isAi == 0) {
        entity->messageColor = 0x27;
        entity->messageExpireTick = D_auto_801B4AA8 + 0x5A;
        func_8011CC84(entity->messageLine0, D_auto_80072DE8, text0);
        func_8011CC84(entity->messageLine1, D_auto_80072DE8, text1);
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
    func_8011CC84(line0, D_auto_80072DFC, count, (count != 1) ? 'S' : ' ');
    line1[0] = 0;
    show_entity_message(entity, line0, line1);
}
