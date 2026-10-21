/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204fb50(void *);                      /* extern */
M2C_UNK func_02060c58(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
M2C_UNK func_02085908(M2C_UNK);                     /* extern */

void func_0204ea84(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x700);
    if (temp_r4 != 0) {
        func_02060c58(temp_r4);
        func_02081f64(temp_r4);
    }
    func_0204fb50(arg0);
    func_02085908(1);
}
