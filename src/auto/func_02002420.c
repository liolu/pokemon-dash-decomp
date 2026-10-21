#include "m2c.h"

extern M2C_UNK data_020be6c4;

u8 func_02002420(u32 arg0) {
    u8 var_r1;

    var_r1 = 0;
    if (arg0 < 0x17U) {
        var_r1 = ((s8 *) &data_020be6c4)[arg0];
    }
    return var_r1;
}
