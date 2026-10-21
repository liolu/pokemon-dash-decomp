/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a0cec();                            /* extern */
extern s32 data_020da338;

void func_020a0c1c(s32 arg0) {
    if (data_020da338 != 0) {
        return;
    }
    data_020da338 = 1;
    func_020a0cec(arg0);
}
