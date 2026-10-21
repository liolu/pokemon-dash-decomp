/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f174(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020800bc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02081edc();                            /* extern */
s32 func_02081fec(M2C_UNK);                         /* extern */
extern M2C_UNK data_020d3d94;
extern M2C_UNK data_020d3da8;

void func_02080118(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, void **, 0x14) = arg1;
    switch (arg2) {                                 /* irregular */
        case 1:
            temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x2C);
            if (temp_r0 != 0) {
                func_0207f174(temp_r0, &data_020d3d94, 0, 0, 0x3000);
            }
            break;
        case 2:
            temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x2C);
            if (temp_r0_2 != 0) {
                func_0207f174(temp_r0_2, &data_020d3da8, 0, 0, 0x3000);
            }
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_02081edc();
    }
    M2C_FIELD(arg0, s32 *, 0) = func_02081fec(0x600);
    func_020800bc(arg0, 0);
}
