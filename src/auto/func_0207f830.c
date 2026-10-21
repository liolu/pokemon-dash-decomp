/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020849d4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02099f58();                            /* extern */
extern M2C_UNK data_020d6fbc;

void func_0207f830(s32 arg0) {
    func_02099f58();
    switch (arg0) {                                 /* irregular */
        case 0x0:
            return;
        case 0x80:
            func_020849d4(M2C_FIELD(&data_020d6fbc, s32 *, 0), 0, 0x10);
            func_020849d4(M2C_FIELD(&data_020d6fbc, s32 *, 4), 0, 0x10);
            func_020849d4(M2C_FIELD(&data_020d6fbc, s32 *, 8), 0, 0x10);
            func_020849d4(M2C_FIELD(&data_020d6fbc, s32 *, 0xC), 0, 0x10);
            return;
    }
}
