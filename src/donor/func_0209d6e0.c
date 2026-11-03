/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Reset_StopAndRequestArm7 from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/sdk/os/reset_stop_and_request_arm7.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u32 OSIrqMask;
extern void func_0209d6cc(void);
extern OSIrqMask func_0209b994(OSIrqMask mask);
extern OSIrqMask func_0209ba48(OSIrqMask mask);
extern int func_0209bbd0(void);
extern void func_0209d6e0(u32 parameter);
extern void func_0209d788(u32 command);
extern void func_0209d9c0(u32 dmaNo);
extern u32 func_0209bca0(u16 lockID);
extern void func_0209d6b4(void);
extern void func_01ff8420(void);
void func_0209d6e0(u32 parameter) {
    u16 lockID;

    if (*((volatile u16 *) 0x027ffc40) == 2) {
        func_0209d6cc();
    }
    lockID = func_0209bbd0();
    while (func_0209bca0(lockID) != 0) {
        func_0209d6b4();
    }
    func_0209d9c0(0);
    func_0209d9c0(1);
    func_0209d9c0(2);
    func_0209d9c0(3);
    func_0209ba48(0x40000);
    func_0209b994(~0);
    *((volatile u32 *) 0x027ffc20) = parameter;
    func_0209d788(0x10);
    func_01ff8420();
}
