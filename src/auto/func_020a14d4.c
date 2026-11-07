/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020a0bf4(u8 *obj);
s32 func_020a0968(u8 *obj, u8 *b, s32 c, s32 d, s32 e);
void func_020a0790(u8 *obj, u8 *b, s32 c);
void func_020a084c(u8 *obj);
typedef struct {
    u32 a;
    u32 b;
} Pair8;
s32 func_020a08e8(u8 *obj, Pair8 p);
void func_020a15c4(Pair8 *out, u8 *obj);

s32 func_020a14d4(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, u32 arg5, s32 arg6, u32 arg7) {
    u8 spC[0x48];
    Pair8 sp4;
    u32 r7;
    s32 r6;
    u32 r5;

    if (arg1 == 0) {
        r5 = arg5;
        r6 = arg4;
    } else {
        r5 = arg7;
        r6 = arg6;
    }
    r7 = arg2 << 5;
    if (r7 >= r5) {
        return 0;
    }
    func_020a0bf4(spC);
    if (func_020a0968(spC, arg3, r6 + r7, r6 + r5, -1) == 0) {
        return 0;
    }
    func_020a0790(spC, arg0, 0x20);
    func_020a084c(spC);
    *(s32 *) (arg0 + 0x20) = arg1;
    func_020a15c4(&sp4, arg0);
    if (func_020a08e8(spC, sp4) == 0) {
        return 0;
    }
    *(u32 *) (arg0 + 0x24) = *(u32 *) (spC + 0x20);
    *(u32 *) (arg0 + 0x28) = *(u32 *) (spC + 0x24) - *(u32 *) (spC + 0x20);
    func_020a084c(spC);
    return 1;
}
