/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} V3;

void func_02069848(V3 *d, V3 *s1, V3 *s2) {
    V3 t;
    t.a = s1->a + s2->a;
    t.b = s1->b + s2->b;
    t.c = s1->c + s2->c;
    *d  = t;
}
