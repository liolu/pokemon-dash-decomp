#include "m2c.h"

s32 func_0208350c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {                              /* irregular */
        case 0:
            return 0x05000200;
        case 1:
            return 0x05000600;
        default:
            return 0;
    }
}
