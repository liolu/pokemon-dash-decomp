/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct L {
    s32 head;
    s32 tail;
    u16 cnt;
    u16 off;
} L;

void func_02095540(L *l, s32 n);
void func_020954d8(L *l, s32 n);

void func_02095464(L *l, s32 prev, s32 n) {
    if (prev == 0) {
        func_02095540(l, n);
        return;
    }
    if (prev == l->head) {
        func_020954d8(l, n);
        return;
    }
    {
        s32 off                  = l->off;
        s32 *np                  = (s32 *) (n + off);
        s32 nx                   = *(s32 *) (prev + off);
        *np                      = nx;
        np[1]                    = prev;
        *(s32 *) (nx + off + 4)  = n;
        *(s32 *) (prev + l->off) = n;
        {
            u16 *c = &l->cnt;
            *c     = *c + 1;
        }
    }
}
