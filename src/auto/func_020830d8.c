/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 pad[4];
    s32 a;
    s32 b;
    s32 c;
} S;
void func_0209dbf8(s32 a, s32 b, s32 c, s32 d);
void func_020830d8(S *s, s32 p, s32 off, s32 n) {
    s32 t;
    if (n == 0) {
        n = s->b - off;
    }
    t = s->c + s->a;
    func_0209dbf8(p, t + off, 0, n);
}
