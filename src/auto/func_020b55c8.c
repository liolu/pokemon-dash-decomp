/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b55ec();                            /* extern */
extern M2C_UNK data_020d4d10;

M2C_UNK **func_020b55c8(M2C_UNK **arg0) {
    *arg0 = &data_020d4d10;
    func_020b55ec();
    return arg0;
}
