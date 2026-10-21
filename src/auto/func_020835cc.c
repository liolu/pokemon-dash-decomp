/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020845cc(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020d3efc;
extern s32 data_020d6f7c;
extern s32 data_020d6f9c;

s32 *func_020835cc(s32 *arg0, s32 arg1) {
    s32 temp_r0;

    *arg0   = arg1;
    temp_r0 = *arg0;
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020845cc(data_020d6f9c, 0, 0x10, &data_020d3efc);
            break;
        case 1:
            func_020845cc(data_020d6f7c, 0, 0x10, &data_020d3efc);
            break;
    }
    return arg0;
}
