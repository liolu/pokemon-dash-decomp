/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081fec();                                /* extern */
M2C_UNK func_020a0c1c();                            /* extern */
s32 func_020a0ccc(s32, s32);                        /* extern */

void func_02080410(void) {
    s32 temp_r4;

    func_020a0c1c();
    temp_r4 = func_020a0ccc(0, 0);
    func_020a0ccc(func_02081fec(), temp_r4);
}
