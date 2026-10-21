/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
M2C_UNK func_02083194(M2C_UNK **);                  /* extern */
M2C_UNK func_02083714(M2C_UNK **);                  /* extern */
extern s32 data_020ccfe4;
extern M2C_UNK data_020d3e6c;
extern M2C_UNK **data_020d4e2c;
extern M2C_UNK **data_020d4e40;
extern M2C_UNK **data_020d4e4c;

void func_02005ac4(void) {
    M2C_UNK **temp_r4;
    M2C_UNK **temp_r4_2;
    M2C_UNK **temp_r4_3;

    if (data_020ccfe4 == -1) {
        return;
    }
    temp_r4 = data_020d4e2c;
    if (temp_r4 != NULL) {
        func_02083194(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = data_020d4e4c;
    if (temp_r4_2 != NULL) {
        func_02083714(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = data_020d4e40;
    if (temp_r4_3 != NULL) {
        *temp_r4_3 = &data_020d3e6c;
        func_02082b74(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    data_020ccfe4 = -1;
}
