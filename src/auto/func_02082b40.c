/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d6760[];

void func_02082b40(u8 *arg0, s32 arg1) {
    u32 *q;
    u32 *e;

    *(s32 *) (arg0 + 0x24) = arg1;
    q                      = (u32 *) (data_020d6760 + (*(s32 *) (arg0 + 4) << 10));
    e                      = (u32 *) ((u8 *) q + *(s32 *) (arg0 + 8) * 8);
    *e                     = (*e & 0x3FFF3FFF) | arg1;
}
