/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Isd_BusRestore from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/isd/isd_bus_restore.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_020aa10c(u32 mask);
typedef struct IsdBusState {
    u16 exmemcnt;
    u16 sharedWord;
    u16 active;
} IsdBusState;
extern void func_020a9f2c(IsdBusState *saved);
typedef volatile u16 vu16;
void func_020a9f2c(IsdBusState *saved) {
    vu16 dummy;

    if (func_020aa10c(1) && saved->active != 0) {
        (*(vu16 *) 0x027fff72) = saved->sharedWord;
        (*(vu16 *) 0x09fe2ffe) = saved->sharedWord;
        dummy                  = (*(vu16 *) 0x09fe20f0);
        dummy                  = (*(vu16 *) 0x09fe20f0);
        dummy                  = (*(vu16 *) 0x09fe20f0);
    }
    (*(vu16 *) 0x04000204) = saved->exmemcnt;
}
