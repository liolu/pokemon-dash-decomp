/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02045d5c();                                /* extern */
M2C_UNK func_02045d84(M2C_UNK);                     /* extern */
M2C_UNK func_02045da0(M2C_UNK);                     /* extern */
s32 func_02046f90();                                /* extern */
M2C_UNK func_02046ff0(M2C_UNK);                     /* extern */
M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_0204e510(void *);                      /* extern */
M2C_UNK func_0204e7b8();                            /* extern */
M2C_UNK func_02057398(void *);                      /* extern */
M2C_UNK func_02057520(void *, M2C_UNK);             /* extern */
M2C_UNK func_02060514(s32, M2C_UNK);                /* extern */
s32 func_020605e0(s32);                             /* extern */
M2C_UNK func_02060608(s32, M2C_UNK);                /* extern */
u32 func_0206068c(s32);                             /* extern */
M2C_UNK func_02060c58(s32);                         /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02082ffc(M2C_UNK);                     /* extern */
M2C_UNK func_0208300c(M2C_UNK, M2C_UNK);            /* extern */

void func_020546e8(void *arg0) {
    s32 temp_r4;
    u32 temp_r0;

    func_0204e7b8();
    func_02057398(arg0);
    if (func_02045d5c() & 0x10000) {
        func_02057520(arg0, 4);
        func_02060514(M2C_FIELD(arg0, s32 *, 0x700), 1);
        func_02060608(M2C_FIELD(arg0, s32 *, 0x700), 1);
    } else {
        func_02057520(arg0, 3);
        func_02060514(M2C_FIELD(arg0, s32 *, 0x700), 0);
        func_02060608(M2C_FIELD(arg0, s32 *, 0x700), 0);
    }
    func_02047db4(arg0);
    do {
        temp_r0 = func_0206068c(M2C_FIELD(arg0, s32 *, 0x700));
        switch (temp_r0) {
            default:
                break;
            case 6:
            case 7:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0x1B;
                break;
            case 0:
                func_02045d84(0x10000);
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
                func_02082ffc(1);
                func_02057520(arg0, 3);
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 1);
                func_0208300c(1, 1);
                break;
            case 1:
                func_02045da0(0x10000);
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 0);
                func_02082ffc(1);
                func_02057520(arg0, 4);
                func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x124), 1);
                func_0208300c(1, 1);
                break;
        }
    } while (M2C_FIELD(arg0, s32 *, 0xEC) == 0x20);
    func_02046ff0(0);
    if (func_020605e0(M2C_FIELD(arg0, s32 *, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, s32 *, 0x700)) == 0);
    }
    if (func_02046f90() == 0) {
        do {
            func_0207c7f4(0);
        } while (func_02046f90() == 0);
    }
    func_02046ff0(1);
    func_02047e8c(arg0);
    if (func_02046f90() == 0) {
        do {
            func_0207c7f4(0);
        } while (func_02046f90() == 0);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x700);
    if (temp_r4 != 0) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    func_0204e510(arg0);
}
