/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02075e48(u8 **arg0) {
    s32 var_ip;
    s32 var_r3;
    u8 *temp_r2;
    u8 *temp_r2_4;
    u8 temp_r2_2;
    u8 temp_r2_3;

    temp_r2   = *arg0;
    var_r3    = 3;
    *arg0     = temp_r2 + 1;
    temp_r2_2 = *temp_r2;
    var_ip    = ((s32) (temp_r2_2 & 0x70) >> 4) + 1;
    if (!(temp_r2_2 & 0x80)) {
        return var_ip;
    }
    do {
        temp_r2_4 = *arg0;
        *arg0     = temp_r2_4 + 1;
        temp_r2_3 = *temp_r2_4;
        var_ip += (temp_r2_3 & 0x7F) << var_r3;
        var_r3 += 7;
    } while (temp_r2_3 & 0x80);
    return var_ip;
}
