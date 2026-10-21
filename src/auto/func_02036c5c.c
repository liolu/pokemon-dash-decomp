/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020806a0(M2C_UNK *, s32);                  /* extern */
s32 func_02080890(M2C_UNK *);                       /* extern */
M2C_UNK func_02080920(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020ad98c(s32, M2C_UNK *);              /* extern */
extern M2C_UNK data_020ce93c;
extern M2C_UNK data_020d532c;

M2C_UNK *func_02036c5c(M2C_UNK arg0, s32 arg1) {
    func_02080920(&data_020d532c, arg0, 0x15);
    if (func_02080890(&data_020d532c) > arg1) {
        func_020ad98c(func_020806a0(&data_020d532c, arg1 - 1), &data_020ce93c);
    }
    return &data_020d532c;
}
