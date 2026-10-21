/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208ce88(void *arg0) {
    s32 *temp_r0;
    s32 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 **, 0x128);
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r1 = *temp_r0;
    if (temp_r1 & 0x04000000) {
        return 1;
    }
    if (temp_r1 & 0x40000000) {
        return 1;
    }
    return 0;
}
