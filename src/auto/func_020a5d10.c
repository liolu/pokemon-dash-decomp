/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5d10(void *arg0) {
    u16 temp_r1;
    u16 temp_r1_2;

    if ((u32) M2C_FIELD(arg0, u16 *, 4) > 0x70U) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x18);
    if (((u32) temp_r1 < 0xAU) || ((u32) temp_r1 > 0x3E8U)) {
        return 0;
    }
    temp_r1_2 = M2C_FIELD(arg0, u16 *, 0x32);
    if (((u32) temp_r1_2 < 1U) || ((u32) temp_r1_2 > 0xEU)) {
        return 0;
    }
    if ((s32) ((M2C_FIELD(arg0, u16 *, 0x10) * (((M2C_FIELD(arg0, u16 *, 0x36) + 0x20) * 4) + 0x70)) +
               (((M2C_FIELD(arg0, u16 *, 0x34) + 0x26) * 4) + 0x14A)) <= 0x15E0) {
        return 1;
    }
    return 0;
}
