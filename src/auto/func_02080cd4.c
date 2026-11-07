/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u16 data_020c2d8c[];

u16 func_02080cd4(s32 arg0) {
    s32 neg;
    s32 r;

    if (arg0 < 0) {
        neg = 1;
    } else {
        neg = 0;
    }
    if (neg) {
        arg0 = -arg0;
    }
    if (arg0 >= 0x1000) {
        r = 0x4000;
    } else {
        r = data_020c2d8c[arg0 & 0xFFF];
    }
    if (neg) {
        r = -r;
    }
    return (u16) r;
}
