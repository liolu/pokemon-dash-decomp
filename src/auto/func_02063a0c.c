#include "m2c.h"
typedef struct B {
    u8 pad[0x14];
    s8 v;
} B;
typedef struct N {
    u8 pad[4];
    struct N *next;
    B *b;
} N;
typedef struct O {
    u8 pad[0x14];
    N *head;
} O;
void func_02063a0c(O *o, s32 v) {
    N *n = o->head;
    if (n != NULL) {
        s8 c = v;
        do {
            n->b->v = c;
            n       = n->next;
        } while (n != NULL);
    }
}
