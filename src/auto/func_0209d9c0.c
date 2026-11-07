/* compiler: 1.2/b56 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv();
M2C_UNK _ZN3IRQ7RestoreEj(s32, u16);

void func_0209d9c0(s32 arg0) {
    s32 t;
    volatile u16 *base;
    volatile u16 *p;
    u16 v;
    t    = _ZN3IRQ7DisableEv();
    base = (volatile u16 *) 0x040000B0;
    p    = base + (arg0 * 6 + 5);
    v    = *p;
    v    = v & ~0x3A00;
    *p   = v;
    v    = *p;
    v    = v & ~0x8000;
    *p   = v;
    v    = *p;
    _ZN3IRQ7RestoreEj(t, *p);
}
