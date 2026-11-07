/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct G {
    u8 p0[0x28];
    s32 f28;
    s32 f2c;
    u8 p30[4];
    u32 f34;
    u8 p38[0x98];
    s32 fd0;
    u8 fd4[4];
} G;
typedef struct H {
    u8 p[8];
    s32 f8;
} H;
extern G data_020da600;
extern H data_020d8454;
extern u32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(u32);
extern void func_0209c2b0(void *);
extern void func_0209d6cc(void);
extern s32 func_020a3cb4(void);
extern void func_020a4030(s32);
extern void func_020a44d0(G *);
void func_020a40a0(s32 a) {
    G *g = &data_020da600;
    u32 irq;
    if (func_020a3cb4() == 0) {
        func_0209d6cc();
    }
    irq = _ZN3IRQ7DisableEv();
    if (g->f34 & 4) {
        do {
            func_0209c2b0(g->fd4);
        } while (g->f34 & 4);
    }
    {
        u32 *p = &g->f34;
        *p     = *p | 4;
    }
    _ZN3IRQ7RestoreEj(irq);
    func_020a4030(a);
    g->f28            = 0;
    g->f2c            = 0;
    data_020da600.fd0 = data_020d8454.f8;
    func_020a44d0(g);
}
