/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020848c4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020d3eb4;
extern s32 data_020d6f70;
extern s32 data_020d6f90;

void func_02082f84(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 4) = func_020848c4(data_020d6f90, 1, 1, &data_020d3eb4);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 4) = func_020848c4(data_020d6f70, 1, 1, &data_020d3eb4);
            return;
    }
}
