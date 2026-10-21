/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206c684();                            /* extern */
M2C_UNK func_0206c6d0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0206c6e8();                            /* extern */
M2C_UNK func_0206c794();                            /* extern */
M2C_UNK func_0206c7ec(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0206c808();                            /* extern */

void func_02083370(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0206c808();
            func_0206c7ec(arg1, M2C_FIELD(arg0, s32 *, 4) << 9, arg2);
            func_0206c794();
            return;
        case 1:
            func_0206c6e8();
            func_0206c6d0(arg1, M2C_FIELD(arg0, s32 *, 4) << 9, arg2);
            func_0206c684();
            return;
    }
}
