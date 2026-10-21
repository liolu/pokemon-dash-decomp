/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_0206fb64(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (arg1 == M2C_FIELD(arg0, s32 *, 4)) {
        return arg0;
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0_3 != 0) {
        temp_r0_2 = func_0206fb64(temp_r0_3, arg1);
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
    }
    temp_r0_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r0_4 != 0) {
        temp_r0 = func_0206fb64(temp_r0_4, arg1);
        if (temp_r0 != 0) {
            return temp_r0;
        }
    }
    return 0;
}
