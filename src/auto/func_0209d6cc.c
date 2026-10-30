/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 _ZN3IRQ7DisableEv(void);
extern void func_0209d6cc(void);
extern void func_0209d6b4(void);
void func_0209d6cc(void) {
    while (1) {
        _ZN3IRQ7DisableEv();
        func_0209d6b4();
    }
}
void func_0209d6b4(void);
