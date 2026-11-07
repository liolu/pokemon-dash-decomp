/* compiler: 1.2/b56 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(s32, s32);

void func_01ff8498(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 irq;
    volatile u32 *base;
    volatile u32 *p;

    irq  = _ZN3IRQ7DisableEv();
    base = (volatile u32 *) 0x040000B0;
    p    = (volatile u32 *) ((u8 *) base + arg0 * 12);
    p[0] = arg1;
    p[1] = arg2;
    p[2] = arg3;
    (void) *base;
    _ZN3IRQ7RestoreEj(irq, *base);
}
