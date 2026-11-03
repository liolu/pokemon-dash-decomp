/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060b64 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060b64.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
struct G {
    char pad[0x18];
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
};
extern struct G data_020da600;
extern char func_01ff8000;
extern void func_020a49c0(void);
extern void func_020a4a34(void);
extern u32 func_0209d134(void);
extern int _ZN3IRQ7DisableEv(void);
extern void func_0209cdd4(u32 a, u32 b);
extern void func_0209cdfc(u32 a, u32 b);
extern void func_0209bb14(u32 n, void (*h)(void));
extern void func_0209b994(u32 n);
extern void func_0209ba10(u32 n);
extern void func_0209cdf0(void);
extern void _ZN3IRQ7RestoreEj(int n);
#pragma opt_propagation off
int func_020a4878(int *self) {
    int *p;
    struct G *g;
    u32 dtcm;
    int r7;
    int r6;
    int r5;
    u32 base;
    int aligned;
    u32 d;
    u32 end;
    int cond1;
    int saved;

    p       = self;
    g       = &data_020da600;
    r7      = 0;
    r6      = 0;
    r5      = 0;
    aligned = 0;

    base = g->f1c;

    if ((base & 3) == 0) {
        if (g->f24 <= 3) {
            aligned = 1;
        }
    }

    if (aligned != 0) {
        int bad;
        int reject;
        u32 e2;
        dtcm   = g->f20;
        d      = func_0209d134();
        e2     = base + dtcm;
        bad    = 1;
        reject = 0;

        if (e2 > (u32) &func_01ff8000) {
            if (base < 0x2000000) {
                reject = bad;
            }
        }

        if (reject == 0) {
            if (d >= e2) {
                goto set0;
            }
            if (d + 0x4000 > base) {
                goto tail;
            }
        set0:
            bad = 0;
        }
    tail:

        if (bad == 0) {
            r5 = 1;
        }
    }

    if (r5 != 0) {
        if (((g->f18 | g->f20) & 0x1ff) == 0) {
            r6 = 1;
        }
    }

    if (r6 != 0) {
        if (g->f20 != 0) {
            r7 = 1;
        }
    }

    p[1] = (*(int *) 0x27ffe60 & ~0x7000000) | 0xa1000000;

    if (r7 != 0) {
        saved = _ZN3IRQ7DisableEv();
        func_0209cdd4(g->f1c, g->f20);
        func_0209cdfc(g->f1c, g->f20);
        func_0209bb14(0x80000, func_020a49c0);
        func_0209b994(0x80000);
        func_0209ba10(0x80000);
        func_0209cdf0();
        _ZN3IRQ7RestoreEj(saved);
        func_020a4a34();
    }

    return r7;
}
