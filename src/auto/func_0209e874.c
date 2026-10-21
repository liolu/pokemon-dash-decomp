/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209c99c();                                /* extern */
s32 func_0209e494();                                /* extern */
M2C_UNK func_0209e4cc();                            /* extern */
s32 func_0209e59c();                                /* extern */
M2C_UNK func_0209e70c(M2C_UNK);                     /* extern */
s32 func_0209e910(M2C_UNK);                         /* extern */

s32 func_0209e874(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0209c99c() != 0) {
        return 0;
    }
    temp_r0_3 = func_0209e494();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_0209e59c() > 0) {
        do {

        } while (func_0209e910(0) != 0);
        temp_r0_2 = func_0209e494();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0209e70c(1);
block_12:
    func_0209e4cc();
    do {
        func_0209e910(1);
        temp_r0 = func_0209e494();
    } while (temp_r0 == 0);
    return temp_r0;
}
