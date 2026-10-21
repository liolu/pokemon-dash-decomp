/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209e5bc();                                /* extern */
s32 func_0209e5e8();                                /* extern */

s32 func_0209e59c(void) {
    s32 temp_r4;

    temp_r4 = func_0209e5e8();
    return (0x100 - temp_r4) - func_0209e5bc();
}
