/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02060558 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060558.cpp (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern "C" {
extern char data_020da600[];
extern int data_020d8454[];
extern void func_0209c2b0(void *p);
extern void func_020a3ef4(void *fn);
extern int func_020a4404(void *g);
}
namespace IRQ {
    extern unsigned int Disable();
    extern void Restore(unsigned int);
} // namespace IRQ
extern // namespace IRQ
    struct Sched {
    char pad00[0x18];
    int a;
    int b;
    int c;
    char pad24[0x28 - 0x24];
    int d;
    int e;
    char pad30[0x34 - 0x30];
    u32 flags;
    char pad38[0xd4 - 0x38];
    char sub[4];
};
extern "C" int func_020a4240(int a, int b, int c, int d, int e, int f) {
    Sched *g         = (Sched *) data_020da600;
    unsigned int irq = IRQ::Disable();
    if (g->flags & 4) {
        do {
            func_0209c2b0(g->sub);
        } while (g->flags & 4);
    }
    u32 *fp = (u32 *) ((unsigned long long) ((int) g + 0x34));
    *fp |= 4;
    IRQ::Restore(irq);
    g->a = a;
    g->b = b;
    g->c = c;
    g->d = d;
    g->e = e;
    if (f != 0) {
        func_020a3ef4((void *) func_020a4404);
        return 1;
    }
    *(int *) (data_020da600 + 0xd0) = data_020d8454[2];
    func_020a4404(g);
    return (*(int **) g)[0] == 0;
}
