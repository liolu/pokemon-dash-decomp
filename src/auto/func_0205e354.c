/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205f820(void *);                      /* extern */
M2C_UNK func_0207dfe8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0207f230(M2C_UNK **);                  /* extern */
M2C_UNK func_02081f64(M2C_UNK **);                  /* extern */
M2C_UNK func_02082b74(M2C_UNK **);                  /* extern */
M2C_UNK func_02083194(M2C_UNK **);                  /* extern */
M2C_UNK func_02083574(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020d3e6c;

void func_0205e354(void *arg0) {
    M2C_UNK **temp_r4;
    M2C_UNK **temp_r4_2;
    M2C_UNK **temp_r4_3;
    M2C_UNK **temp_r4_4;

    func_0207dfe8(M2C_FIELD(arg0, s32 *, 0x13C), 0);
    temp_r4 = M2C_FIELD(arg0, M2C_UNK ***, 0x14C);
    if (temp_r4 != NULL) {
        func_0207f230(temp_r4);
        func_02081f64(temp_r4);
    }
    temp_r4_2 = M2C_FIELD(arg0, M2C_UNK ***, 0x168);
    if (temp_r4_2 != NULL) {
        func_02083194(temp_r4_2);
        func_02081f64(temp_r4_2);
    }
    temp_r4_3 = M2C_FIELD(arg0, M2C_UNK ***, 0x210);
    if (temp_r4_3 != NULL) {
        func_02083574(temp_r4_3);
        func_02081f64(temp_r4_3);
    }
    temp_r4_4 = M2C_FIELD(arg0, M2C_UNK ***, 0x18C);
    if (temp_r4_4 != NULL) {
        *temp_r4_4 = &data_020d3e6c;
        func_02082b74(temp_r4_4);
        func_02081f64(temp_r4_4);
    }
    if (M2C_FIELD(arg0, s32 *, 0xEC) != 0xD) {
        return;
    }
    func_0205f820(arg0);
}
