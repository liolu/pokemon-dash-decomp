/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02047270();                            /* extern */
M2C_UNK func_020472ec(M2C_UNK);                     /* extern */
M2C_UNK func_020a3c28();                            /* extern */
s32 func_020a4094();                                /* extern */
extern u8 data_020cf474;

s32 func_02046f90(void) {
    if (data_020cf474 == 0) {
        return 1;
    }
    if (func_020a4094() == 0) {
        return 0;
    }
    func_020a3c28();
    func_020472ec(1);
    func_02047270();
    return 1;
}
