/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0209449c(s32 *arg0, u8 **arg1, u8 *arg2) {
    u8 *ip;
    u8 *r1;
    u8 *lr;
    u8 *r4;
    u8 *r5;

    if (*(s32 *) arg2 == 0) {
        return;
    }
    r5                = arg2 + 4;
    r4                = *(u8 **) (r5 + 4);
    lr                = *(u8 **) (r5 + 0);
    *(u8 **) (r5 + 4) = r5;
    ip                = *(u8 **) (r5 + 4);
    *(u8 **) (r5 + 0) = ip;
    ip                = *arg1;
    r1                = *(u8 **) ip;
    *(u8 **) (r1 + 4) = r4;
    r1                = *(u8 **) ip;
    *(u8 **) r4       = r1;
    *(u8 **) ip       = lr;
    *(u8 **) (lr + 4) = ip;
    *arg0 += *(s32 *) arg2;
    *(s32 *) arg2 = 0;
}
