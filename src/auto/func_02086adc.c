/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct L {
    s32 x;
    struct L *next;
    s32 val;
} L;
typedef struct S {
    u8 p[0x15c];
    s32 f15c;
    u8 p160[8];
    s32 f168;
    u8 l[4];
    L *f170;
} S;
extern s32 func_02086aac(void *);
extern s32 func_02087f48(void *);
s32 func_02086adc(S *s, s32 v) {
    L *end;
    L *it;
    if (func_02087f48(&s->f15c) == 0 && s->f168 == 0) {
        return 1;
    }
    if (v == s->f15c) {
        return func_02086aac(s);
    }
    it  = s->f170;
    end = (L *) s->l;
    if (it != end) {
        do {
            if (v == it->val) {
                return 0;
            }
            it = it->next;
        } while (it != end);
    }
    return 1;
}
