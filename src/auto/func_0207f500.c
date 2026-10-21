/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020845cc(s32, s32, M2C_UNK, M2C_UNK *); /* extern */
s32 func_020848c4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020d3cfc;
extern M2C_UNK data_020d6fac;
extern M2C_UNK data_020d6fbc;

void *func_0207f500(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = arg3;
    temp_r1                   = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 < 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                M2C_FIELD(arg0, s32 *, 8) = func_020848c4(
                    *((M2C_UNK *) ((s8 *) &data_020d6fac + (M2C_FIELD(arg0, s32 *, 4) * 4))), 1, 1, &data_020d3cfc);
                break;
            case 1:                                     /* switch 1 */
                M2C_FIELD(arg0, s32 *, 8) = func_020848c4(
                    *((M2C_UNK *) ((s8 *) &data_020d6fbc + (M2C_FIELD(arg0, s32 *, 4) * 4))), 1, 1, &data_020d3cfc);
                break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                func_020845cc(*((M2C_UNK *) ((s8 *) &data_020d6fac + (M2C_FIELD(arg0, s32 *, 4) * 4))), temp_r1, 1,
                              &data_020d3cfc);
                break;
            case 1:                                     /* switch 2 */
                func_020845cc(*((M2C_UNK *) ((s8 *) &data_020d6fbc + (M2C_FIELD(arg0, s32 *, 4) * 4))), temp_r1, 1,
                              &data_020d3cfc);
                break;
        }
    }
    return arg0;
}
