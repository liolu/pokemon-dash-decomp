/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct N {
    u8 fl;
    u8 p[3];
    struct N *next;
    s32 v;
} N;
typedef struct M {
    struct M *next;
    s32 v;
} M;
extern s32 func_020713cc(s32, s32, s32, s32, s32);
s32 func_02070454(N *a, M *b, s32 c, s32 d, s32 e) {
    while (a != 0 && b != 0) {
        if (a->v != 0 && b->v != 0 && (a->fl & 2)) {
            if (func_020713cc(a->v, b->v, c, d, e) == 0) {
                return 0;
            }
        }
        if (!(a->fl & 1)) {
            break;
        }
        a = a->next;
        b = b->next;
    }
    return 1;
}
