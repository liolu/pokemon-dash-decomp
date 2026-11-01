/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02075eb0(void *, u8);

s32 func_02075bbc(u8 *arg0) {
    s32 r5;
    s32 v;

    r5                     = arg0[0x10] & 0xF;
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x2C);
    *(s32 *) (arg0 + 0x2C) = func_02075eb0(arg0 + 4, arg0[0x18]);
    *(s32 *) (arg0 + 0x30) = *(s32 *) (arg0 + 0x34);
    *(s32 *) (arg0 + 0x34) = func_02075eb0(arg0 + 4, arg0[0x19]);
    v                      = (r5 == 1) ? 3 : 4;
    arg0[0x10]             = (arg0[0x10] & 0xF0) | (v & 0xF);
    return (r5 == 1) ? 3 : 4;
}
