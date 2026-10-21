#include "include_asm.h"
#include "shared/bt_unit.h"
#include "shared/bt_player.h"

INCLUDE_ASM("span_1000", func_800A6798);
#include "shared/bt_types.h"
#include "game/sys_80076000.h"


void func_800A6864(s32 arg0) {
    D_802DF344[arg0] = D_802DF344[arg0] + 1;
}

void func_800A6888(s32 arg0) {
    D_802DF344[arg0] = D_802DF344[arg0] - 1;
}

u8 func_800A68AC(s32 arg0) {
    return D_802DF344[arg0];
}

void *func_800A68C0(s32 index)
{
    return D_801262D8 + index * 72;
}

INCLUDE_ASM("span_1000", func_800A68DC);
#include "shared/bt_types.h"
#include "shared/audio_callbacks.h"
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_span_1000_code_8008F248.h"
#include "shared/bt_player.h"
#include "shared/bt_span_1000_code_8008B1F0.h"
#include "shared/bt_span_1000_code_8010BFDC.h"
#include "span_1000/code_800A6864.h"
#include "game/sys_80076000.h"

              /* size 0x0 */



void func_800A68E0(void) {
    D_802DF350 = 0;
}

              /* size 0x0 */

s32 func_800A68F0(void) {
    return D_802DF350;
}

int func_800A6900(EffectKind15 *arg0, s32 *arg1)
{
  if (arg0->state == 2)
  {
    if (D_801B4AA8 > arg0->deadline)
    {
      func_800A70BC(arg0);
      goto block_3;
    }
  }
  else
  {
    block_3:
    *arg1 = 1;

  }
}

INCLUDE_ASM("span_1000", func_800A6958);
INCLUDE_ASM("span_1000", func_800A6AB4);
INCLUDE_ASM("span_1000", func_800A6BE0);
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"

struct L;







/* func_800A6E10 -- counts the nodes of the list held at 0x10. */



int func_800A6E10(L *arg0) {
    EffectKind15 *n = arg0->head;
    int count = 0;
    while (n != 0) {
        n = n->next;
        count++;
    }
    return count;
}

INCLUDE_ASM("span_1000", func_800A6E30);
INCLUDE_ASM("span_1000", func_800A6FC0);
#include "game/sys_80076000.h"
#include "span_1000/code_800A6864.h"
int func_800A70BC(EffectKind15 *arg0) {
    func_800A6E30(arg0, arg0->player);
}

INCLUDE_ASM("span_1000", func_800A70E0);
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "span_1000/code_800A6864.h"
#include "sdk/libultra.h"
#include "game/sys_80076000.h"

struct L;















/* func_800A72C8 -- hands every node of the list at 0x98 to func_800A6E30 with the byte at 0xC of the second argument, then empties the list. */




void func_800A72C8(CombatUnit *unit, EffectKind14 *owner) {
    EffectKind15 *n = unit->value98;
    EffectKind15 *next;
    while (n != 0) {
        next = n->next;
        func_800A6E30(n, owner->player);
        n = next;
    }
    unit->value98 = 0;
}

INCLUDE_ASM("span_1000", func_800A7328);
INCLUDE_ASM("span_1000", func_800A739C);
INCLUDE_ASM("span_1000", func_800A7418);
#include "game/sys_80076000.h"
#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "span_1000/code_8007EBA0.h"
#include "span_1000/code_8008F4EC.h"

                            /* extern */

                  













/* extern */

/* Releases linked resources when the selected object matches the active one. */
void func_800A74AC(EffectKind14 *arg0, HandlerSender *arg1, s32 arg2) {
    PlayerRecord *player;
    void *temp_s0_2;
    CombatUnit *unit;
    EffectKind15 *var_a0;

    if ((arg2 == 0) && (arg1->unk8 == 0)) {
        unit = arg1->unit;
        player = func_800A6688(unit->player);
        if (player->team == func_800A6688(arg0->player)->team) {
            var_a0 = unit->value98;
            if (var_a0 != ((void *)0)) {
                do {
                    temp_s0_2 = var_a0->next;
                    func_800A6E30(var_a0, arg0->player);
                    var_a0 = temp_s0_2;
                } while (var_a0 != ((void *)0));
            }
            unit->value98 = ((void *)0);
        }
    }
}

/* func_800A7548 -- does nothing.
 *
 * Two words: the return and an empty delay slot. The cartridge keeps the entry point, so
 * something calls it; what it was meant to do, if anything, is not in the image.
 */

void func_800A7548(void) {
}

/* extern */



/* extern */

void func_800A7550(f32 arg0, f32 arg1, s32 arg2) {
    s32 temp_a3;
    EffectKind1F *effect;

    effect = func_8008AD10(0, 0x1F, 0x18);
    if (effect != ((void *)0)) {
        temp_a3 = -arg2;
        effect->value0C = func_80106D18(effect, (s32) arg0, (s32) arg1, temp_a3, arg2, temp_a3, arg2, 2, 0);
        effect->value14 = arg0;
        effect->value10 = arg1;
    }
}

#include "shared/bt_records.h"
#include "shared/bt_externs.h"

void func_800A75EC(void *arg0, Unknown800A75EC_1 *context, void *arg2, s32 *result)
{
    if (context->value08 == 0 && context->value0C->value04 == 0) {
        *result = 9;
    }
}
void func_800A7614(void *arg0, Unknown800A75EC_1 *context, s32 inhibited, void *arg3, s32 *result)
{
    if (inhibited == 0 && context->value08 == 0 && context->value0C->value04 == 0) {
        *result = 9;
    }
}
INCLUDE_DATA("span_1000", D_800A7648);
