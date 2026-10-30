/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201af74 from projets/code-lyoko/src/donor/func_0201af74.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
extern void func_0209d8e0(u8 *macAddress);
u32 func_02008ba8(void) {
    u8 mac[6];
    u32 ret;
    s32 i;

    func_0209d8e0(mac);

    for (i = 0, ret = 0; i < 6; i++) {
        ret += mac[i];
    }

    ret += OS_GetVBlankCount();
    ret *= 7;

    return (ret % 20);
}
