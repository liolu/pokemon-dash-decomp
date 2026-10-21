/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005ac4();                            /* extern */
M2C_UNK func_02005c60(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
M2C_UNK func_02082874(s32, s32);                    /* extern */
M2C_UNK func_02083114(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020831f0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02083684(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0208376c(s32, s32, M2C_UNK);           /* extern */
extern s32 data_020ccfe4;
extern M2C_UNK data_020ccfe8;
extern M2C_UNK data_020ccffc;
extern s32 data_020d4e2c;
extern s32 data_020d4e40;
extern s32 data_020d4e4c;

void func_02005cbc(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (data_020ccfe4 != -1) {
        func_02005ac4();
    }
    temp_r0 = func_02082044(0x30);
    if (temp_r0 != 0) {
        func_02082874(temp_r0, arg0);
    }
    data_020d4e40 = temp_r0;
    temp_r0_2     = func_02082044(0x10);
    if (temp_r0_2 != 0) {
        func_020831f0(temp_r0_2, arg0, 0x200);
    }
    data_020d4e2c = temp_r0_2;
    func_02083114(temp_r0_2, &data_020ccfe8, 0x80, 0, 0x200);
    temp_r0_3 = func_02082044(8);
    if (temp_r0_3 != 0) {
        func_0208376c(temp_r0_3, arg0, -1);
    }
    data_020d4e4c = temp_r0_3;
    func_02083684(temp_r0_3, &data_020ccffc, 0, 0x20);
    data_020ccfe4 = arg0;
    func_02005c60(arg0, arg1, arg2);
}
