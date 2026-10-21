/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020632c4(s32, u8, s32);                /* extern */
s32 func_0208c188();                                /* extern */

s32 func_0208c15c(s32 arg0, s32 arg1) {
    if (arg1 >= 0) {
        func_020632c4(arg1 >> 0x10, (u8) arg1, func_0208c188());
    }
    return 0;
}
