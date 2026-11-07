/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_0206cdd4(s32, u8 *);
s32 func_0206ce9c(s32, u8 *);
s32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(s32);
extern u8 *data_020d6094[];

void func_0206cbb8(s32 arg0, s32 arg1, s32 arg2) {
    u8 *p;
    u8 *e;
    u8 *r1;
    s32 irq;
    s32 idx;
    s32 n;
    idx = arg0;
    n   = arg1;
    irq = _ZN3IRQ7DisableEv();
    p   = data_020d6094[idx];
    if (n < 0) {
        n = *(s32 *) p;
    }
    e                  = (u8 *) (arg2 - 0x20);
    p                  = (u8 *) (*(s32 *) (p + 0x10) + (n << 4));
    *(s32 *) (p + 0xC) = func_0206ce9c(*(s32 *) (p + 0xC), e);
    *(s32 *) (p + 4)   = func_0206cdd4(*(s32 *) (p + 4), e);
    r1                 = *(u8 **) e;
    if (r1 != 0) {
        if ((u32) (r1 + *(s32 *) (r1 + 8)) > (u32) e) {
            e = r1;
        }
    }
    if (*(s32 *) (e + 4) == 0) {
        *(u8 **) (p + 8) = e;
    }
    _ZN3IRQ7RestoreEj(irq);
}
