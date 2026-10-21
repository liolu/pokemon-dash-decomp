/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202332c(s32);                         /* extern */
M2C_UNK func_0207d830(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207f230(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_020856a8(s32);                         /* extern */
M2C_UNK func_02085908(M2C_UNK);                     /* extern */

void func_020502d8(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x6F8);
    if (temp_r5 != 0) {
        func_0202332c(temp_r5);
        func_02081f64(temp_r5);
    }
    M2C_FIELD(arg0, s32 *, 0x6F8) = 0;
    temp_r5_2                     = M2C_FIELD(arg0, s32 *, 0x6FC);
    if (temp_r5_2 != 0) {
        func_020856a8(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    func_02085908(0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x128), 0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x13C), 0);
    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x140), 0);
    func_0207d830(M2C_FIELD(arg0, s32 *, 0x13C), 0, 0);
    func_0207d830(M2C_FIELD(arg0, s32 *, 0x140), 0, 0);
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0x14C);
    if (temp_r5_3 != 0) {
        func_0207f230(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    temp_r5_4                     = M2C_FIELD(arg0, s32 *, 0x150);
    if (temp_r5_4 != 0) {
        func_0207f230(temp_r5_4);
        func_02081f64(temp_r5_4);
    }
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
