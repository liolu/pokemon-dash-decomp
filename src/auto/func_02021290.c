/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02021290(void *arg0) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x70);
    var_r2  = 1;
    if ((temp_r1 != 0) && (temp_r1 != M2C_FIELD(arg0, s32 *, 0x74))) {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return 1;
    }
    return 0;
}
