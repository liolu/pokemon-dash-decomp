/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d54fc;
extern u8 data_020d55ec;
extern u8 data_020d5c00;

s32 func_020464e8(u32 *arg0, s32 arg1) {
    u32 k;
    u16 v;

    k = arg0[0];
    switch (k) {
        default:
            return -1;
        case 0:
        case 1:
        case 2:
            v = *(u16 *) ((u8 *) &data_020d54fc + k * 0x32 + arg0[1] * 0xA + arg0[2] * 2);
            if (v == 0xFFFF) {
                return -1;
            }
            return v;
        case 3:
        case 4:
            if (arg1 >= 5) {
                return -1;
            }
            v = *(u16 *) ((u8 *) &data_020d55ec + (k - 3) * 0xFA + arg0[1] * 0x32 + arg0[2] * 0xA + arg1 * 2);
            if (v == 0xFFFF) {
                return -1;
            }
            return v;
        case 5:
            v = *(u16 *) ((u8 *) &data_020d5c00 + arg0[1] * 2);
            if (v == 0xFFFF) {
                return -1;
            }
            return v;
    }
}
