/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202332c(s32);                         /* extern */
M2C_UNK func_0205f820(void *);                      /* extern */
M2C_UNK func_02060c58(s32);                         /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_020856a8(s32);                         /* extern */
M2C_UNK func_02085908();                            /* extern */

void func_0205e4b4(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;

    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x140), 0);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x700);
    if (temp_r5 != 0) {
        func_02060c58(temp_r5);
        func_02081f64(temp_r5);
    }
    M2C_FIELD(arg0, s32 *, 0x700) = 0;
    temp_r5_2                     = M2C_FIELD(arg0, s32 *, 0x6F8);
    if (temp_r5_2 != 0) {
        func_0202332c(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = 0;
    temp_r5_3                     = M2C_FIELD(arg0, s32 *, 0x6FC);
    if (temp_r5_3 != 0) {
        func_020856a8(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    M2C_FIELD(arg0, s32 *, 0x6FC) = 0;
    func_02085908();
    if (M2C_FIELD(arg0, s32 *, 0xEC) == 0x16) {
        func_0205f820(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xEC) != 0xD) {
        return;
    }
    func_0205f820(arg0);
}
