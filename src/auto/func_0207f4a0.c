/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020844f4(s32, s32);                    /* extern */
extern M2C_UNK data_020d6fac;
extern M2C_UNK data_020d6fbc;

void *func_0207f4a0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020844f4(*((M2C_UNK *) ((s8 *) &data_020d6fac + (M2C_FIELD(arg0, s32 *, 4) * 4))), M2C_FIELD(arg0, s32 *, 8));
            break;
        case 1:
            func_020844f4(*((M2C_UNK *) ((s8 *) &data_020d6fbc + (M2C_FIELD(arg0, s32 *, 4) * 4))), M2C_FIELD(arg0, s32 *, 8));
            break;
    }
    return arg0;
}
