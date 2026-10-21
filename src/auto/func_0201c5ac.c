/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b5660(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_020cd510;

s32 func_0201c5ac(s32 arg0, M2C_UNK arg1) {
    if (func_020b5660(arg1, &data_020cd510) != 0) {
        return arg0 + 0xC;
    }
    return 0;
}
