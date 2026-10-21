/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0204e510(void *);                      /* extern */
M2C_UNK func_0204e7b8(void *);                      /* extern */
M2C_UNK func_0205ce68(void *, s32);                 /* extern */
M2C_UNK func_0205cfdc(void *);                      /* extern */
M2C_UNK func_0205d0c8();                            /* extern */
s32 func_020605e0(s32 *);                           /* extern */
u32 func_0206068c(s32 *);                           /* extern */
M2C_UNK func_02060c58(s32 *);                       /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
M2C_UNK func_02081f64(s32 *);                       /* extern */
extern M2C_UNK data_020d5d20;

void func_0205cd38(void *arg0) {
    s32 *temp_r4;
    u32 temp_r0;

    func_0205d0c8();
    func_0204e7b8(arg0);
    func_0205cfdc(arg0);
    func_0205ce68(arg0, *M2C_FIELD(arg0, s32 **, 0x700));
    M2C_FIELD(arg0, s8 *, 0x6F5) = 1;
    func_02047db4(arg0);
    do {
        temp_r0 = func_0206068c(M2C_FIELD(arg0, s32 **, 0x700));
        switch (temp_r0) {
            default:
                break;
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 3;
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                func_0205ce68(arg0, *M2C_FIELD(arg0, s32 **, 0x700));
                break;
            case 7:
                M2C_FIELD(&data_020d5d20, s32 *, 0) = 6;
                M2C_FIELD(&data_020d5d20, s32 *, 4) = 0;
                M2C_FIELD(&data_020d5d20, s32 *, 8) = (s32) *M2C_FIELD(arg0, s32 **, 0x700);
                M2C_FIELD(arg0, s32 *, 0xEC)        = 0x16;
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    if (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x700);
    if (temp_r4 != NULL) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    func_0204e510(arg0);
}
