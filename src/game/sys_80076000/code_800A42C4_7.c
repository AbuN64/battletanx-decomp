#include "shared/bt_player.h"
#include "shared/bt_ai_team.h"
#include "game/sys_80076000.h"
#include "span_1000/code_800A51E8.h"
extern s32 D_auto_801B4AA8;
static inline void set_notice_lines(PlayerRecord *entity, char *text0, char *text1, s32 ticks) {
    if (entity->isAi == 0) {
        entity->messageColor = 0x27;
        entity->messageExpireTick = D_auto_801B4AA8 + ticks;
        func_8011CC84(entity->messageLine0, D_auto_80072DE8, text0);
        func_8011CC84(entity->messageLine1, D_auto_80072DE8, text1);
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
     
    func_8011CC84(killText, D_auto_80072E08, threshold);
    func_8011CC84(pointsText, D_auto_80072E14);
    set_notice_lines(entity, killText, pointsText, 90);
}
