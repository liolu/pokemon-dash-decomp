/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047db4(void *);                      /* extern */
M2C_UNK func_02047e8c(void *);                      /* extern */
M2C_UNK func_02047efc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02047f58(void *, M2C_UNK);             /* extern */
M2C_UNK func_0204ea84(void *);                      /* extern */
M2C_UNK func_0204eac8();                            /* extern */
M2C_UNK func_0204f3a0(void *, s32, s32, s32, s32);  /* extern */
s32 func_020605e0(s32 *);                           /* extern */
u32 func_0206068c(s32 *);                           /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern M2C_UNK data_020d5d20;

void func_0204dbcc(void *arg0) {
    s32 temp_r5;
    u32 temp_r0;

    func_0204eac8();
    M2C_FIELD(&data_020d5d20, s32 *, 8) = (s32) *M2C_FIELD(arg0, s32 **, 0x700);
    func_0204f3a0(arg0, M2C_FIELD(&data_020d5d20, s32 *, 0), M2C_FIELD(&data_020d5d20, s32 *, 4),
                  M2C_FIELD(&data_020d5d20, s32 *, 8), 0);
    func_02047db4(arg0);
    do {
        temp_r0 = func_0206068c(M2C_FIELD(arg0, s32 **, 0x700));
        switch (temp_r0) {
            default:
                break;
            case 6:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0xA;
                break;
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                M2C_FIELD(&data_020d5d20, s32 *, 8) = (s32) *M2C_FIELD(arg0, s32 **, 0x700);
                func_02047f58(arg0, 1);
                func_0204f3a0(arg0, M2C_FIELD(&data_020d5d20, s32 *, 0), M2C_FIELD(&data_020d5d20, s32 *, 4),
                              M2C_FIELD(&data_020d5d20, s32 *, 8), 1);
                func_02047efc(arg0, 1);
                break;
            case 7:
                M2C_FIELD(arg0, s32 *, 0xEC) = 0x16;
                break;
        }
        temp_r5 = M2C_FIELD(arg0, s32 *, 0xEC);
    } while (temp_r5 == 0x20);
    M2C_FIELD(arg0, s32 *, 0xEC) = 0x20;
    if (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0) {
        do {
            func_0207c7f4(0);
        } while (func_020605e0(M2C_FIELD(arg0, s32 **, 0x700)) == 0);
    }
    func_02047e8c(arg0);
    func_0204ea84(arg0);
    M2C_FIELD(arg0, s32 *, 0xEC) = temp_r5;
}
