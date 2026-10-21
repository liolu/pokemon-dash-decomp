/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208444c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020848c4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020d3ea0;
extern s32 data_020d6f94;
extern s32 data_020d6fa4;

void func_02082cc8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 8) = func_020848c4(data_020d6f94, 1, 1, &data_020d3ea0);
            func_0208444c(data_020d6f94, 0, 0, 0, 0);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = func_020848c4(data_020d6fa4, 1, 1, &data_020d3ea0);
            func_0208444c(data_020d6fa4, 0, 0, 0, 0);
            return;
    }
}
