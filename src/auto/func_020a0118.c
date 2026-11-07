/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct S {
    u8 p0[0xC];
    u8 f0c[4];
    u32 flags;
    u32 pad;
    void *q;
} S;
typedef struct Q {
    u8 p[0x14];
    s32 v;
} Q;
extern void func_0209c23c(void *);
extern void func_0209fe28(void *, s32);
extern void func_020a0360(void);
extern s32 func_020a0400(void *);
extern u32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(u32);
void func_020a0118(S *s, s32 a) {
    s32 b;
    if (s->flags & 0x100) {
        b = 1;
    } else {
        b = 0;
    }
    if (b != 0) {
        u32 *fp = &s->flags;
        u32 t   = *fp;
        void *q = s->q;
        *fp     = t & ~0x100;
        func_0209fe28(q, a);
        if (func_020a0400(s) == 0) {
            return;
        }
        func_020a0360();
        return;
    } else {
        Q *q    = (Q *) s->q;
        u32 irq = _ZN3IRQ7DisableEv();
        u32 *fp;
        q->v = a;
        fp   = &s->flags;
        *fp  = *fp & ~0x200;
        func_0209c23c(s->f0c);
        _ZN3IRQ7RestoreEj(irq);
    }
}
