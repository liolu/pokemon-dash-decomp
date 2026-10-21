/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020953f4(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02095e20(void *);                      /* extern */
M2C_UNK func_02095e80(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_020d75ac;

void func_02095c74(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_020953f4(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_020953f4(&data_020d75ac, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_02095e80(temp_r4, arg0);
    }
    func_02095e20(arg0);
}
