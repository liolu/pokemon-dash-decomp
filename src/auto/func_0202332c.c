/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f4a0(M2C_UNK **);                  /* extern */
M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
M2C_UNK func_02083194(M2C_UNK **);                  /* extern */
M2C_UNK func_020833e4(M2C_UNK **);                  /* extern */
M2C_UNK func_02083714(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d3e6c;

void *func_0202332c(void *arg0) {
    M2C_UNK **temp_r5;
    M2C_UNK **temp_r5_2;
    M2C_UNK **temp_r5_3;
    M2C_UNK **temp_r5_4;
    M2C_UNK **temp_r5_5;
    M2C_UNK **temp_r5_6;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK ***, 0xC);
    if (temp_r5 != NULL) {
        func_0207f4a0(temp_r5);
        func_02081f64(temp_r5);
    }
    temp_r5_2 = M2C_FIELD(arg0, M2C_UNK ***, 0x10);
    if (temp_r5_2 != NULL) {
        func_02083194(temp_r5_2);
        func_02081f64(temp_r5_2);
    }
    temp_r5_3 = M2C_FIELD(arg0, M2C_UNK ***, 0x1C);
    if (temp_r5_3 != NULL) {
        func_020833e4(temp_r5_3);
        func_02081f64(temp_r5_3);
    }
    temp_r5_4 = M2C_FIELD(arg0, M2C_UNK ***, 0x14);
    if (temp_r5_4 != NULL) {
        *temp_r5_4 = &data_020d3e6c;
        func_02082b74(temp_r5_4);
        func_02081f64(temp_r5_4);
    }
    temp_r5_5 = M2C_FIELD(arg0, M2C_UNK ***, 0x18);
    if (temp_r5_5 != NULL) {
        *temp_r5_5 = &data_020d3e6c;
        func_02082b74(temp_r5_5);
        func_02081f64(temp_r5_5);
    }
    temp_r5_6 = M2C_FIELD(arg0, M2C_UNK ***, 0x20);
    if (temp_r5_6 != NULL) {
        func_02083714(temp_r5_6);
        func_02081f64(temp_r5_6);
    }
    return arg0;
}
