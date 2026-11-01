/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020806a0(u8 *, s32);
s32 func_02080890(u8 *);
void func_02080920(u8 *, void *, s32);
void func_020ad98c(s32, u8 *);
extern u8 data_020cd014;

void func_020070d4(void *arg0, s32 arg1) {
    u8 buf[0x18];

    *(s16 *) ((u8 *) arg0 + 0x14) = 0;
    func_02080920(buf, arg0, 0x15);
    if (buf[0] == 0) {
        buf[0] = 0x20;
        buf[1] = 0;
    } else if (func_02080890(buf) > 5) {
        func_020ad98c(func_020806a0(buf, 4), &data_020cd014);
    }
    func_020ad98c(arg1, buf);
}
