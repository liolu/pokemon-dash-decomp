/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d08c(s32, M2C_UNK);                /* extern */
M2C_UNK func_0204e7b8();                            /* extern */
M2C_UNK func_020500bc(void *);                      /* extern */
M2C_UNK func_0205ce68(void *, s32);                 /* extern */
M2C_UNK func_0205cfdc(void *);                      /* extern */
M2C_UNK func_0207bc20(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0207bde8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207dad8(s32, s32);                    /* extern */
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
extern M2C_UNK data_020d5d20;

void func_0205cc84(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_0204e7b8();
    func_0205cfdc(arg0);
    func_0205ce68(arg0, M2C_FIELD(&data_020d5d20, s32 *, 8));
    temp_r0 = func_02082044(0x14);
    if (temp_r0 != 0) {
        func_0207e900(temp_r0, 0, 0xC000, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = temp_r0;
    func_0207dad8(M2C_FIELD(arg0, s32 *, 0x13C), M2C_FIELD(arg0, s32 *, 0x14C));
    func_020500bc(arg0);
    temp_r0_2 = func_02082044(0x90);
    if (temp_r0_2 != 0) {
        func_0201d08c(temp_r0_2, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x6F0) = temp_r0_2;
    func_0207bde8(M2C_FIELD(arg0, s32 *, 0x108) + 0x138, 0);
    func_0207bc20(M2C_FIELD(arg0, s32 *, 0x108) + 0x138, 9, M2C_FIELD(&data_020d5d20, s32 *, 8));
}
