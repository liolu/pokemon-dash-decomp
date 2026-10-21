/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008a04(M2C_UNK);                     /* extern */
s32 func_0209c99c();                                /* extern */
s32 func_020a5778();                                /* extern */
extern u8 data_020d4df0;
extern u8 data_020d4df8;
extern s16 data_020d4e08;
extern u16 data_020d4e18;

s32 func_02006fcc(void) {
    if (data_020d4df0 != 0) {
        return 0;
    }
    if (data_020d4df8 == 0) {
        func_02008a04(2);
        data_020d4e18 = func_020a5778() * 2;
        if (func_0209c99c() != 0) {
            data_020d4e18 = 1;
        }
        data_020d4e08 = 0;
        data_020d4df8 = 1;
    }
    if (data_020d4e18 != 0) {
        return 1;
    }
    return 0;
}
