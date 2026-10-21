/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208c290(void *arg0) {
    s32 var_r2;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x128);
    if (temp_r1 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r1, s32 *, 0) & 0x08000000) {
        var_r2 = 0;
    } else {
        var_r2 = M2C_FIELD(temp_r1, s32 *, 0x10);
    }
    if ((s32) M2C_FIELD(temp_r1, s32 *, 0xC) <= (s32) (var_r2 + M2C_FIELD(temp_r1, s32 *, 4))) {
        return 1;
    }
    return 0;
}
