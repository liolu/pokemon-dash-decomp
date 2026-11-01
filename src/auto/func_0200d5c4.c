/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200d5c4(u16 *arg0, u16 arg1, u16 arg2, u16 arg3) {
    volatile u16 t[3];
    u16 x;
    u16 y;
    t[0]    = arg1;
    t[1]    = arg2;
    x       = t[0];
    y       = t[1];
    t[2]    = arg3;
    arg0[0] = x;
    arg0[1] = y;
    arg0[2] = t[2];
}
