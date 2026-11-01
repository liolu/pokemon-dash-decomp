/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200d5c0(s32);

s32 func_02089da4(void *arg0, void *arg1) {
    u8 *out = (u8 *) arg0;
    u8 *in  = (u8 *) arg1;
    u16 *r3;
    s32 flags;

    r3                    = *(u16 **) (*(u8 **) (in + 8) + 4);
    *(u16 **) (out + 0)   = r3;
    *(u16 **) (out + 4)   = r3;
    *(s32 *) (out + 8)    = *(s32 *) (*(u8 **) (in + 8) + 4) + *(s32 *) (*(u8 **) (in + 8) + 8);
    *(u16 *) (out + 0xC)  = *r3;
    *(s32 *) (out + 0x10) = 0;
    *(s32 *) (out + 0x14) = 0;
    *(s32 *) (out + 0x18) = func_0200d5c0(*(s32 *) (in + 4));
    *(s32 *) (out + 0x1C) = 0x1000;
    out[0x20]             = 0;
    flags                 = *(s32 *) (in + 0) & 0x20000000;
    out[0x21]             = (flags != 0) ? 1 : 0;
    return flags;
}
