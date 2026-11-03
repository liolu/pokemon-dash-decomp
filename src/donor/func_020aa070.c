/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Isd_TryAcquireCartridge from https://github.com/sturmds/advance-wars-dual-strike-decomp
 * src/sdk/isd/isd_try_acquire_cartridge.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern BOOL func_020aa070(u32 *saved);
extern BOOL func_020aaba8(void);
extern BOOL lbl_020aabb8(BOOL enable);
extern BOOL func_020aab5c(void);
extern BOOL lbl_020aab6c(BOOL enable);
extern int func_0209bd24(u16 lockId);
extern u16 func_0209bc68(void *lock);
BOOL func_020aa070(u32 *saved) {
    BOOL savedB     = func_020aaba8();
    BOOL savedA     = func_020aab5c();
    BOOL locked     = 0;
    BOOL lockedByUs = 0;

    if (func_0209bd24(0x70) == 0) {
        lockedByUs = 1;
        locked     = lockedByUs;
    } else if (func_0209bc68(((void *) 0x027fffe8)) & 0x40) {
        locked = 1;
    }
    if (locked) {
        u32 result = 0;

        if (savedB) {
            result |= 1;
        }
        if (savedA) {
            result |= 2;
        }
        if (lockedByUs) {
            result |= 0x20;
        }
        *saved = result;
    } else {
        lbl_020aab6c(savedA);
        lbl_020aabb8(savedB);
        *saved = 0;
    }
    return locked;
}
