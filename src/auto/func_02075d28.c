/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02075eb0(void *, u8);

s32 func_02075d28(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 b2;
    s32 v;
    s32 temp_r5;
    s32 var_r0;

    b2                  = p[0x10];
    v                   = *(s32 *) (p + 0x2C);
    *(s32 *) (p + 0x28) = v;
    temp_r5             = b2 & 0xF;
    *(s32 *) (p + 0x2C) = func_02075eb0(p + 4, p[0x18]);
    if (p[0x12] != 5) {
        *(s32 *) (p + 0x30) = *(s32 *) (p + 0x34);
        *(s32 *) (p + 0x34) = 0;
    }
    if (temp_r5 == 1) {
        var_r0 = 3;
    } else {
        var_r0 = 4;
    }
    p[0x10] = (u8) ((p[0x10] & 0xF0) | (var_r0 & 0xF));
    if (temp_r5 == 1) {
        return 3;
    }
    return 4;
}
