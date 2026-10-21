/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209e334(s32, M2C_UNK);                /* extern */
extern s32 data_020d759c;

void func_02095c3c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0209e334(arg0, 0);
    data_020d759c &= ~arg0;
}
