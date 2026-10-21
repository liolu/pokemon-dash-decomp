/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006a04();                                /* extern */
s32 func_02006aa8();                                /* extern */
s32 func_02008868();                                /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0205e354(void *);                      /* extern */
M2C_UNK func_0205eda0(void *);                      /* extern */
M2C_UNK func_02063070(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern s32 data_020d5df0;
extern s32 data_020d5df4;
extern void *data_020d6f64;
extern void *data_020d73d4;

void func_0205d518(void *arg0) {
    u16 temp_r8;

    data_020d5df0 = -1;
    data_020d5df4 = func_02006aa8();
    func_0205eda0(arg0);
    func_02047db4(arg0);
loop_1:
    temp_r8 = M2C_FIELD(data_020d6f64, u16 *, 2);
    if (func_02006a04() != 0) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 0x14;
    } else if (func_02008868() == 0) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
    } else if ((temp_r8 & 2) ||
               ((M2C_FIELD(data_020d73d4, u8 *, 2) != 0) && ((s32) M2C_FIELD(data_020d73d4, s32 *, 8) < 0x20) &&
                ((s32) M2C_FIELD(data_020d73d4, s32 *, 0xC) >= 0xA0))) {
        func_02063070(5, 2, 0);
        M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
    } else {
        func_0207c7f4(0);
        goto loop_1;
    }
    func_02047e8c(arg0);
    func_0205e354(arg0);
}
