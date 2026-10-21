/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206c70c();                            /* extern */
M2C_UNK func_0206c758(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0206c770();                            /* extern */
M2C_UNK func_0206c878();                            /* extern */
M2C_UNK func_0206c8dc(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0206c914();                            /* extern */

void func_0207f41c(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0206c914();
            func_0206c8dc(arg1, (M2C_FIELD(arg0, s32 *, 4) << 0xD) + (M2C_FIELD(arg0, s32 *, 8) << 9), arg2);
            func_0206c878();
            return;
        case 1:
            func_0206c770();
            func_0206c758(arg1, (M2C_FIELD(arg0, s32 *, 4) << 0xD) + (M2C_FIELD(arg0, s32 *, 8) << 9), arg2);
            func_0206c70c();
            return;
    }
}
