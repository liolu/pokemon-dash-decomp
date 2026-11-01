/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d4e00;
extern s8 data_020d4e04;
extern void *data_020d4e38;

void func_020065ac(s16 arg0, void *arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5) {
    u8 *p               = (u8 *) data_020d4e38;
    *(s16 *) (p + 2)    = arg0;
    *(s32 *) (p + 4)    = *(s32 *) arg1;
    *(s32 *) (p + 8)    = *(s32 *) ((u8 *) arg1 + 4);
    *(s32 *) (p + 12)   = *(s32 *) ((u8 *) arg1 + 8);
    p[0x10]             = arg2;
    p[0x11]             = arg3;
    p[0x12]             = (u8) arg4;
    *(s32 *) (p + 0x14) = arg5;
    p[0x13]             = data_020d4e00;
    data_020d4e04       = 1;
    if (arg3 == 0) {
        return;
    }
    data_020d4e00 += 1;
    if (data_020d4e00 == 0) {
        data_020d4e00 = 1;
    }
}
