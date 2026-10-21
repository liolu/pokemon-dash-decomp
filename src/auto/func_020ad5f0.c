/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_020d4b48;

s32 func_020ad5f0(void) {
    u32 temp_r0;

    temp_r0       = (data_020d4b48 * 0x41C64E6D) + 0x3039;
    data_020d4b48 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
