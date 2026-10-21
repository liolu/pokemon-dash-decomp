/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020844f4(s32, M2C_UNK);                /* extern */
extern s32 data_020d6f7c;
extern s32 data_020d6f9c;

s32 *func_02083574(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020844f4(data_020d6f9c, 0);
            break;
        case 1:
            func_020844f4(data_020d6f7c, 0);
            break;
    }
    return arg0;
}
