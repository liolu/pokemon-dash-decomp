/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200c8c8(s32, s32 *, s32 *);           /* extern */
s32 func_020212f0();                                /* extern */
s32 func_ov001_020dc6f8(s32, s32);                  /* extern */

s32 func_02020f98(s32 arg0, s32 *arg1) {
    s32 sp0;
    s32 sp4;
    s32 temp_r0;

    if (func_020212f0() == 0) {
        return 0;
    }
    func_0200c8c8(*arg1, &sp0, &sp4);
    temp_r0 = func_ov001_020dc6f8(sp0, sp4);
    if ((temp_r0 == 0) || (temp_r0 == 0xA)) {
        return 1;
    }
    return 0;
}
