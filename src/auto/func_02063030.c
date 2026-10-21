/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02096518(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_0209c99c();                                /* extern */
extern M2C_UNK data_020d5fd0;
extern M2C_UNK data_020d5fd4;

void func_02063030(M2C_UNK arg0) {
    if (func_0209c99c() != 0) {
        return;
    }
    func_02096518(&data_020d5fd4, arg0);
    func_02096518(&data_020d5fd0, arg0);
}
