/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 **data_020d5118;
extern u8 data_020d518c;

s32 func_020401c0(s32 a0, u8 ***arg1, u8 ***arg2) {
    u8 *x;
    u8 *y;
    u32 i1;
    u32 i2;
    s32 *t;
    if (data_020d518c != 0) {
        x = (*arg1)[1];
        if (x != 0) {
            x -= 8;
        }
        y = (*arg2)[1];
        if (y != 0) {
            y -= 8;
        }
        i1 = *(u16 *) (x + 0xe4);
        i2 = *(u16 *) (y + 0xe4);
    } else {
        x = (*arg1)[1];
        if (x != 0) {
            x -= 8;
        }
        y = (*arg2)[1];
        if (y != 0) {
            y -= 8;
        }
        i1 = *(u32 *) (x + 0x74);
        i2 = *(u32 *) (y + 0x74);
    }
    t = *data_020d5118;
    if (t[i2] < t[i1]) {
        return 1;
    }
    return 0;
}
