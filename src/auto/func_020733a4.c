/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02075258(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_020752d0(s32, void *);                 /* extern */
M2C_UNK func_0207544c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
extern M2C_UNK data_020c22bc;

s32 func_020733a4(void *arg0, void *arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4;

    if ((arg3 & 0x10) && (M2C_FIELD(arg1, s32 *, 4) != 0)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x6C);
        if (temp_r4 != 0) {
            func_02075470(temp_r4);
            func_02081f64(temp_r4);
        }
        temp_r0 = func_02082044(0x18);
        if (temp_r0 != 0) {
            func_02075258(temp_r0, M2C_FIELD(arg1, s32 *, 4), &data_020c22bc);
        }
        M2C_FIELD(arg0, s32 *, 0x6C) = temp_r0;
        func_0207544c(M2C_FIELD(arg0, s32 *, 0x6C), arg2);
        func_020752d0(M2C_FIELD(arg0, s32 *, 0x6C), arg0);
        return M2C_FIELD(arg0, s32 *, 0x6C);
    }
    return 0;
}
