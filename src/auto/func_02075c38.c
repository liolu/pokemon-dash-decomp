/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02075eb0(void *, u8);                      /* extern */

s32 func_02075c38(u8 *arg0) {
    s32 r5;
    u8 v10;
    s32 v;

    v10                    = arg0[0x10];
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x2C);
    *(s32 *) (arg0 + 0x30) = *(s32 *) (arg0 + 0x34);
    r5                     = v10 & 0xF;
    *(s32 *) (arg0 + 0x2C) = func_02075eb0(arg0 + 4, arg0[0x18]);
    *(s32 *) (arg0 + 0x34) = 0;
    if (r5 == 1) {
        v = 3;
    } else {
        v = 4;
    }
    arg0[0x10] = (u8) ((arg0[0x10] & 0xF0) | (v & 0xF));
    if (r5 == 1) {
        return 3;
    }
    return 4;
}
