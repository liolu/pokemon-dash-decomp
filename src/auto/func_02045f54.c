/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d5814;
extern u8 data_020d5c00;

void func_02045f54(u8 *arg0) {
    s32 a = *(s32 *) (arg0 + 4);
    s32 b = *(s32 *) (arg0 + 8);

    *(u16 *) ((u8 *) &data_020d5814 + a * 0xA8 + b * 0x1C)     = 0;
    *(u16 *) ((u8 *) &data_020d5c00 + *(s32 *) (arg0 + 4) * 2) = 0xFFFF;
}
