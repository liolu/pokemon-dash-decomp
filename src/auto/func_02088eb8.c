/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02088eb8(s32 arg0) {
    s32 *temp_r0;
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        return (s32) M2C_FIELD(arg0, u8 *, 0xB4);
    }
    temp_r0 = M2C_FIELD(arg0, s32 **, 0x88);
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
