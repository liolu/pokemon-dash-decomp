/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207dd18(void *);                      /* extern */
M2C_UNK func_0207e900(void *, s32, s32, u8);        /* extern */
M2C_UNK func_0207efcc(void *, s32, s32);            /* extern */
M2C_UNK func_0207f230(void *);                      /* extern */
M2C_UNK func_02081f64(void *);                      /* extern */
void *func_02082044(M2C_UNK);                       /* extern */

void func_0207dbf8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5) {
    s32 temp_r1;
    s32 temp_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    M2C_FIELD(arg0, s32 *, 8)    = 3;
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 4);
    temp_r5                      = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r5 != NULL) {
        func_0207f230(temp_r5);
        func_02081f64(temp_r5);
    }
    if (arg3 != 0) {
        temp_r5_2 = M2C_FIELD(arg0, void **, 0x28);
        if (temp_r5_2 != NULL) {
            func_0207f230(temp_r5_2);
            func_02081f64(temp_r5_2);
        }
        temp_r0 = func_02082044(0x10);
        if (temp_r0 != NULL) {
            func_0207efcc(temp_r0, M2C_FIELD(arg0, s32 *, 0), arg3);
        }
        M2C_FIELD(arg0, void **, 0x28) = temp_r0;
        M2C_FIELD(arg0, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0x28);
        temp_r1                        = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x18)   = (s32) ((s32) (temp_r1 + ((u32) (temp_r1 >> 0xA) >> 0x15)) >> 0xB);
    }
    if (arg4 != 0) {
        temp_r5_3 = M2C_FIELD(arg0, void **, 0x30);
        if (temp_r5_3 != NULL) {
            func_0207f230(temp_r5_3);
            func_02081f64(temp_r5_3);
        }
        temp_r0_2 = func_02082044(0x14);
        if (temp_r0_2 != NULL) {
            func_0207e900(temp_r0_2, M2C_FIELD(arg0, s32 *, 0), arg4, arg5);
        }
        M2C_FIELD(arg0, void **, 0x30) = temp_r0_2;
        M2C_FIELD(arg0, void **, 0x2C) = (void *) M2C_FIELD(arg0, void **, 0x30);
        temp_r1_2                      = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x1C)   = (s32) ((s32) (temp_r1_2 + ((u32) (temp_r1_2 >> 0xD) >> 0x12)) >> 0xE);
    }
    func_0207dd18(arg0);
}
