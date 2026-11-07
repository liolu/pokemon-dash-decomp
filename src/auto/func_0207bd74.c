/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207c0c4(s32 a, u8 *b);
void func_02082590(u8 *b);
void func_020825e4(u8 *o, s32 a, s32 *b, s32 c, s32 d, s32 e, u8 *f);

void func_0207bd74(s32 *p, s32 q, s32 r, ...) {
    u8 buf[44];
    if (*p == 0) {
        return;
    }
    func_020825e4(buf, 0, p, q, 0, 1, (u8 *) &r);
    func_0207c0c4(*p, buf);
    func_02082590(buf);
}
