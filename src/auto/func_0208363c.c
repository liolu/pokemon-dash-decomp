/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208363c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return (M2C_FIELD(arg0, s32 *, 4) << 5) + 0x05000200;
        case 1:
            return (M2C_FIELD(arg0, s32 *, 4) << 5) + 0x05000600;
        default:
            return 0;
    }
}
