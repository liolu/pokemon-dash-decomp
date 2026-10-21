/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008878();                            /* extern */
extern u8 data_020d4df0;
extern s8 data_020d4df4;
extern u8 data_020d4df8;
extern s8 data_020d4dfc;

void func_02006f64(void) {
    if ((data_020d4df8 != 0) && (data_020d4df0 == 0)) {
        data_020d4dfc = 0;
        data_020d4df0 = 1;
        func_02008878();
    }
    data_020d4df4 = 0;
}
