/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 _s32_div_f(s32, M2C_UNK);                    /* extern */

void func_0207ff4c(u8 *arg0, s32 arg1) {
    u8 *t;
    u8 *u;
    s32 var_r0;
    s32 var_r1;
    s32 off;

    t = *(u8 **) (arg0 + 0x14);
    u = *(u8 **) (t + 0x2C);
    if (u != NULL) {
        if (*(s32 *) (t + 0x14) == 1) {
            var_r1 = 0x40;
        } else {
            var_r1 = 0x20;
        }
        var_r0 = _s32_div_f(*(s32 *) (u + 0x10), var_r1);
    } else {
        var_r0 = -1;
    }
    off                            = (*(s32 *) (arg0 + 4) + (*(s32 *) (arg0 + 8) << 5)) * 2;
    *(u16 *) (*(u8 **) arg0 + off) = (u16) ((arg1 + var_r0) | (*(s32 *) (arg0 + 0xC) << 0xC));
}
