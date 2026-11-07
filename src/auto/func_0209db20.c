/* compiler: 1.2/b56 */
#include "m2c.h"

extern int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(int);
extern void func_01ff8460(int, int *, int, unsigned);

void func_0209db20(int a, int b, int c, unsigned d) {
    volatile unsigned *st;
    int irq;
    int *p;
    if (d == 0) {
        return;
    }
    st = (volatile unsigned *) (0x040000B0 + (a * 3 + 2) * 4);
    while (*st & 0x80000000) {
    }
    irq = _ZN3IRQ7DisableEv();
    p   = (int *) 0x040000E0 + a;
    *p  = c;
    func_01ff8460(a, p, b, (d >> 1) | 0x81000000);
    _ZN3IRQ7RestoreEj(irq);
    while (*st & 0x80000000) {
    }
}
