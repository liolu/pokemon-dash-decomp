/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046cb8();                            /* extern */
s32 func_020801f8(M2C_UNK *, s32);                  /* extern */
s32 func_020ab474(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_020ab544(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK data_020cf484;
extern s8 data_020d54c4;
extern s32 data_020d54cc;
extern M2C_UNK data_020d54d4;

s32 func_02046be4(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r5;

    var_r5 = 0;
    if (arg0 == 0) {
        temp_r4 = data_020d54cc;
        if (func_020ab474(temp_r4 + 0x20, &data_020cf484, 4) == 0) {
            func_020ab544(&data_020d54d4, temp_r4, 0x84C);
            switch ((s32) M2C_FIELD(&data_020d54d4, u8 *, 0x18)) { /* irregular */
                case 0x2:
                    temp_r4_2                           = M2C_FIELD(&data_020d54d4, s32 *, 4);
                    M2C_FIELD(&data_020d54d4, s32 *, 4) = 0;
                    if (temp_r4_2 == func_020801f8(&data_020d54d4, 0x84C)) {
                        case 0xE5:
                        case 0x0:
                        case 0x1:
                            func_02046cb8();
                            var_r5        = 1;
                            data_020d54c4 = 1;
                    }
                    break;
            }
        }
    }
    return var_r5;
}
