/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d5c0(s32);                             /* extern */
void *func_0208e3b8();                              /* extern */
void *func_0208e63c(void *);                        /* extern */
M2C_UNK func_0208e68c(s32 *, void *, M2C_UNK);      /* extern */
extern M2C_UNK data_020ccfdc;
extern M2C_UNK data_020d42d8;
extern M2C_UNK data_020d42e8;

void *func_0208e458(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_r6;
    void *temp_r0;
    void *temp_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ccfdc;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d42e8;
    M2C_FIELD(arg0, s32 *, 8)      = -0x1000;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d42d8;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x50)   = arg2;
    temp_r0                        = func_0208e3b8(arg0);
    temp_r6                        = M2C_FIELD(temp_r0, s32 **, 8);
    if (temp_r6 != NULL) {
        if (!(*temp_r6 & 0x10000)) {
            func_0208e68c(temp_r6, arg0 + 0x10, 0);
            func_0208e68c(temp_r6, arg0 + 0x30, -0x1000);
        } else {
            M2C_FIELD(arg0, u16 *, 0x14) = 0U;
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1000;
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
            M2C_FIELD(arg0, u16 *, 0x34) = 0U;
            M2C_FIELD(arg0, u16 *, 0x32) = (u16) M2C_FIELD(arg0, u16 *, 0x34);
            M2C_FIELD(arg0, u16 *, 0x30) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
            M2C_FIELD(arg0, s32 *, 0x40) = 0x1000;
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
            M2C_FIELD(arg0, s32 *, 0x4C) = 0;
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x14) = 0U;
        M2C_FIELD(arg0, u16 *, 0x12) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
        M2C_FIELD(arg0, u16 *, 0x34) = 0U;
        M2C_FIELD(arg0, u16 *, 0x32) = (u16) M2C_FIELD(arg0, u16 *, 0x34);
        M2C_FIELD(arg0, u16 *, 0x30) = (u16) M2C_FIELD(arg0, u16 *, 0x32);
        M2C_FIELD(arg0, s32 *, 0x40) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg0, s32 *, 0x4C);
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
    }
    temp_r0_2 = func_0208e63c(temp_r0);
    if (temp_r0_2 == NULL) {
        M2C_FIELD(arg0, s32 *, 8) = -0x1000;
    } else {
        M2C_FIELD(arg0, s32 *, 8) = func_0200d5c0(M2C_FIELD(temp_r0_2, s32 *, 4));
    }
    return arg0;
}
