/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern u32 _ZN3IRQ7DisableEv(void);
extern u32 _ZN3IRQ7RestoreEj(u32 irq_flag);
extern vu64 data_020d8734;

/* func_02079bf0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_tick.c (license: none), reused by
 * tools/donor_match.py */
u64 func_0209d3a0(void) {
    vu16 countL;
    vu64 countH;
    u32 prev = _ZN3IRQ7DisableEv();

    countL = (*(vu16 *) 0x04000100);
    countH = data_020d8734 & 0x0000ffffffffffffULL;

    if (((*(vu32 *) 0x04000214) & (1 << 3)) && !(countL & 0x8000)) {
        countH++;
    }

    _ZN3IRQ7RestoreEj(prev);
    return (countH << 16) | countL;
}
