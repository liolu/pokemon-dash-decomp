/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 p[8];
    s32 f8;
    u32 fl;
    s32 f10;
    u8 p14[4];
    u8 f18[4];
} S;
extern u32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(u32);
extern void func_0209c23c(void *);
extern s32 func_0209fc84(S *, s32);
extern S *func_020a0400(s32);
void func_020a0360(S *s) {
    s32 t = s->f8;
    s32 z = 0;
    s32 o = 1;
    u32 irq;
    s32 c;
    if (s == 0) {
        return;
    }
    do {
        irq = _ZN3IRQ7DisableEv();
        if (s->fl & 4) {
            c = o;
        } else {
            c = z;
        }
        if (c != 0) {
            func_0209c23c(s->f18);
            return;
        }
        {
            u32 *p = &s->fl;
            *p     = *p | 8;
        }
        _ZN3IRQ7RestoreEj(irq);
        if (func_0209fc84(s, s->f10) == 6) {
            return;
        }
        s = func_020a0400(t);
    } while (s != 0);
}
