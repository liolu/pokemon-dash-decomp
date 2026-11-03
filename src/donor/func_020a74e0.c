/* compiler: 1.2/sp2p3  */
/* func_021070cc from projets/sims-2-the/src/auto/func_021070cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 _ZN3IRQ7DisableEv(void);
extern u16 func_0209bc68(void *);
extern s32 func_0209bd24(void *);
extern void _ZN3IRQ7RestoreEj(s32);
extern void WaitByLoop(s32);
void func_020a74e0(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = _ZN3IRQ7DisableEv();
        arg1[0] = func_0209bc68((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_0209bd24(arg0) == 0) {
            return;
        }
        _ZN3IRQ7RestoreEj(arg1[1]);
        WaitByLoop(1);
    }
}
