/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02045d5c();
M2C_UNK func_02088ffc(s32, s32, M2C_UNK);
M2C_UNK func_020a2d54(M2C_UNK, M2C_UNK *);

void func_0202e630(void *arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 var_r4;

    func_020a2d54(0, &sp0);
    var_r4 = 0x28240000;
    if (M2C_FIELD(arg0, s32 *, 0x18) == arg1) {
        var_r4 += 1;
    }
    if (!(func_02045d5c() & 0x10000)) {
        var_r4 += 2;
    }
    func_02088ffc(*(s32 *) ((u8 *) arg0 + (arg1 * 4) + 0x30), var_r4, 0);
}
