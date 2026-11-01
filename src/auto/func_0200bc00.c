/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020befbc[];
s32 func_ov001_020dc6f8(s32, s32);

u8 func_0200bc00(void *arg0) {
    s32 r;

    r = func_ov001_020dc6f8(M2C_FIELD(arg0, s32 *, 0x18) << 7, M2C_FIELD(arg0, s32 *, 0x20) << 7);
    return data_020befbc[(u8) r];
}
