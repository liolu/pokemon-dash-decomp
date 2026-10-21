/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044d88(void *arg0) {
    s32 var_r0;
    u32 temp_r1;

    var_r0  = 0;
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x128) - 1;
    if (temp_r1 > 9U) {
        return 0;
    }
    if ((1 << temp_r1) & 0x343) {
        var_r0 = 1;
    }
    return var_r0;
}
