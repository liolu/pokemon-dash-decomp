/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020212bc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x70);
    if (temp_r1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x70) = (s32) (0 - temp_r1);
        return;
    }
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x70) = 1;
    }
}
