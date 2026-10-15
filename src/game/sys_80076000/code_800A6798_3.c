#include "shared/bt_span_1000_code_800A6864.h"
#include "shared/bt_types.h"
#include "span_1000/code_800A6864.h"

struct L;

struct N;






/* func_800A6E10 -- counts the nodes of the list held at 0x10. */



int func_800A6E10(L *arg0) {
    N *n = arg0->head;
    int count = 0;
    while (n != 0) {
        n = n->next;
        count++;
    }
    return count;
}
