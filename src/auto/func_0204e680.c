#include "m2c.h"

M2C_UNK func_0207d830(s32, s32, s32);               /* extern */

void func_0204e680(void *arg0) {
    s32 temp_r1_2;
    u32 temp_r1;

    temp_r1   = M2C_FIELD(arg0, u32 *, 0xF8);
    temp_r1_2 = ((s32) (temp_r1 + (temp_r1 >> 0x1F)) >> 1) & 0x1F;
    func_0207d830(M2C_FIELD(arg0, s32 *, 0x12C), temp_r1_2, temp_r1_2);
}
