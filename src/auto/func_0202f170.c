/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 pad[0x78];
    s32 a;
    s32 b;
    s8 f;
} S;
void func_0202f170(S *s) {
    if (s->b != 0) {
        s->b -= 1;
        return;
    }
    if (s->a != 0) {
        s->a = 0;
        s->f = 1;
    }
    s->b = 0;
}
