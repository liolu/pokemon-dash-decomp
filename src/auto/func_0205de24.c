/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006ae8();                            /* extern */
M2C_UNK func_02006c88(u32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0205e688(void *);                      /* extern */
M2C_UNK func_0205f380(void *);                      /* extern */
M2C_UNK func_02060514(u32 *, u32);                  /* extern */
s32 func_020605e0(u32 *);                           /* extern */
u32 func_0206068c(u32 *);                           /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern s32 data_020d03dc;
extern u32 data_020d03e0;
extern s32 data_020d03e4;

void func_0205de24(void *arg0) {
    u32 *temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    func_02006ae8();
    func_0205f380(arg0);
    temp_r0 = M2C_FIELD(arg0, u32 **, 0x700);
    func_02060514(temp_r0, *temp_r0);
    temp_r0_2     = *M2C_FIELD(arg0, u32 **, 0x700);
    data_020d03e0 = temp_r0_2;
    data_020d03dc = -1;
    data_020d03e4 = -1;
    func_02006c88(temp_r0_2, -1, 0);
    func_02047db4(arg0);
    do {
        func_02006c88(data_020d03e0, data_020d03dc, 0);
        temp_r0_3 = func_0206068c(M2C_FIELD(arg0, u32 **, 0x700));
        switch (temp_r0_3) {
            default:
                break;
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0xD;
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                data_020d03e0 = temp_r0_3;
                break;
            case 8:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0xF;
                break;
            case 7:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0x10;
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    if (func_020605e0(M2C_FIELD(arg0, u32 **, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, u32 **, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    func_0205e688(arg0);
}
