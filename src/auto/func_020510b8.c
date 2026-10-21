/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02048c7c();                            /* extern */
M2C_UNK func_0207e398(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0207e838(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0207f710(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02099ab0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020510b8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    func_02048c7c();
    func_02099ab0(1, 0, 0);
    temp_r0 = func_02082044(0x34);
    if (temp_r0 != 0) {
        func_0207e838(temp_r0, 1, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x154) = temp_r0;
    func_0207e398(M2C_FIELD(arg0, s32 *, 0x154), 0, 0, 0, 0x600, 0x2000, 0);
    temp_r0_2 = func_02082044(0x34);
    if (temp_r0_2 != 0) {
        func_0207e838(temp_r0_2, 0, 3);
    }
    M2C_FIELD(arg0, s32 *, 0x158) = temp_r0_2;
    func_0207e398(M2C_FIELD(arg0, s32 *, 0x158), 0, 0, 0, 0x600, 0x2000, 0);
    temp_r0_3 = func_02082044(8);
    if (temp_r0_3 != 0) {
        func_0207f710(temp_r0_3, 1, 0xF);
    }
    M2C_FIELD(arg0, s32 *, 0x15C) = temp_r0_3;
    temp_r0_4                     = func_02082044(8);
    if (temp_r0_4 != 0) {
        func_0207f710(temp_r0_4, 0, 0xF);
    }
    M2C_FIELD(arg0, s32 *, 0x160) = temp_r0_4;
}
