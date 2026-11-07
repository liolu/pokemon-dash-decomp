/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02082044(s32 n);
void func_0207c280(s32 a, s32 b);
void func_020825e4(s32 o, s32 a, s32 *b, s32 c, s32 d, s32 e, s32 *f);

void func_0207bba4(s32 *p, s32 q, s32 a, s32 b) {
    s32 args[2];
    s32 o;
    if (*p == 0) {
        return;
    }
    args[0] = a;
    args[1] = b;
    o       = func_02082044(0x2c);
    if (o != 0) {
        func_020825e4(o, 1, p, q, 0, 2, args);
    }
    func_0207c280(*p, o);
}
