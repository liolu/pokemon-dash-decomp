/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080920(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_020ad98c(M2C_UNK *, s32);              /* extern */
s32 func_020ada64(M2C_UNK *);                       /* extern */
extern void *data_020cd74c;
extern M2C_UNK data_020d4ec4;

M2C_UNK *func_020068b8(M2C_UNK arg0) {
    s32 temp_r4;

    func_020ad98c(&data_020d4ec4, M2C_FIELD(data_020cd74c, s32 *, 0xB0));
    temp_r4 = func_020ada64(&data_020d4ec4);
    func_02080920((M2C_UNK *) ((s8 *) &data_020d4ec4 + temp_r4), arg0, 0x20 - func_020ada64(&data_020d4ec4));
    return &data_020d4ec4;
}
