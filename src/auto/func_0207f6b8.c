/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020844f4(s32, s32);                    /* extern */
extern s32 data_020d6f78;
extern s32 data_020d6fa8;

void *func_0207f6b8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020844f4(data_020d6fa8, M2C_FIELD(arg0, s32 *, 4));
            break;
        case 1:
            func_020844f4(data_020d6f78, M2C_FIELD(arg0, s32 *, 4));
            break;
    }
    return arg0;
}
