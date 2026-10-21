/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020962bc(M2C_UNK *);                       /* extern */
s32 func_0209c99c();                                /* extern */
extern M2C_UNK data_020d5fd4;

s32 func_02062c64(void) {
    if (func_0209c99c() != 0) {
        return 0;
    }
    return func_020962bc(&data_020d5fd4);
}
