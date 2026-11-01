/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d6760[];

void func_02082964(u8 *arg0, u8 arg1) {
    u32 ip;
    u32 r3;
    u32 *r2;

    *(u8 *) (arg0 + 0x10) = arg1;
    r3                    = *(u32 *) (arg0 + 0x14);
    if (*(u8 *) (arg0 + 0x10) != 0) {
        ip = *(u32 *) (arg0 + 0xC);
    } else {
        ip = 0x200;
    }
    r2 = (u32 *) (data_020d6760 + (*(u32 *) (arg0 + 4) << 10) + *(u32 *) (arg0 + 8) * 8);
    if (ip != 0x100 && ip != 0x300) {
        *r2 = (*r2 & 0xC1FFFCFF) | ip;
        return;
    }
    *r2 = (*r2 & 0xC1FFFCFF) | ip | (r3 << 0x19);
}
