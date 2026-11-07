/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct N {
    int pad;
    struct N *next;
} N;
typedef struct S {
    u8 pad0[0x14];
    N *head;
    u8 pad1[0x100 - 0x18];
    N **arr;
    u8 b;
} S;
extern N **func_02081fec(int);

void func_0206e124(S *s, u8 v) {
    int i;
    N *n;
    s->b = v;
    if (s->arr != 0) {
        return;
    }
    n = s->head;
    i = 0;
    if (n != 0) {
        do {
            n = n->next;
            i++;
        } while (n != 0);
    }
    if (i <= 0) {
        return;
    }
    s->arr = func_02081fec(i * 4);
    n      = s->head;
    i      = 0;
    if (n == 0) {
        return;
    }
    do {
        s->arr[i] = n;
        n         = n->next;
        i++;
    } while (n != 0);
}
