#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "shared/bt_span_1000_code_80091A60.h"
#include "span_1000/code_800A6864.h"
#include "sdk/libultra.h"
#include "game/sys_80076000.h"

struct L;

struct N;







struct C;

struct Shape_func_800A72C8;






/* func_800A72C8 -- hands every node of the list at 0x98 to func_800A6E30 with the byte at 0xC of the second argument, then empties the list. */




void func_800A72C8(Shape_func_800A72C8 *l, C *c) {
    N *n = l->head;
    N *next;
    while (n != 0) {
        next = n->next;
        func_800A6E30(n, c->c);
        n = next;
    }
    l->head = 0;
}
