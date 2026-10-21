/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020844f4(s32, s32);                    /* extern */
extern s32 data_020d6f70;
extern s32 data_020d6f90;

void func_02082f1c(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020844f4(data_020d6f90, M2C_FIELD(arg0, s32 *, 4));
            return;
        case 1:
            func_020844f4(data_020d6f70, M2C_FIELD(arg0, s32 *, 4));
            return;
    }
}
