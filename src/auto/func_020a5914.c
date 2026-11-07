/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
extern u32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(u32);
extern int func_020a532c(void);
extern int *func_020a5348(void);

int func_020a5914(int a, int b, int c) {
    u32 s = _ZN3IRQ7DisableEv();
    int r = func_020a532c();
    if (r != 0) {
        _ZN3IRQ7RestoreEj(s);
        return r;
    }
    {
        char *base             = (char *) func_020a5348() + a * 4;
        *(int *) (base + 0xb8) = b;
        *(int *) (base + 0xf8) = c;
    }
    _ZN3IRQ7RestoreEj(s);
    return 0;
}
