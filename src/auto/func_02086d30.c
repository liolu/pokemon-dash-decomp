/* compiler: 1.2/b56 */
#include "m2c.h"
extern void func_02086c14(void *, s32);
extern void func_02088010(void *, s32, s32, s32, s32);
extern void func_020881c8(void *, void *, void *, void *);

s32 func_02086d30(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    s32 spC[4];
    s32 sp4;
    void *sp8;
    s32 t4;
    if (*(u8 *) (p + 0x1bc) != 0) {
        func_02086c14(arg0, 0);
    }
    {
        s32 *q = (s32 *) (p + 0x1a8);
        t4     = *(s32 *) (p + 0x1a8);
        *q     = *q + 1;
    }
    if (arg2 == 0x38000001) {
        arg2 = *(s32 *) (p + 0x1ac);
    }
    func_02088010(spC, *(s32 *) (*(u8 **) (p + 0x60) + 8), t4, arg1, arg2);
    sp8 = p + 0x16c;
    func_020881c8(&sp4, p + 0x168, &sp8, spC);
    return t4;
}
