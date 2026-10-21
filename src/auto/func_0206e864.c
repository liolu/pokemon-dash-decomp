/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207078c(s32, s32, M2C_UNK, s32);          /* extern */
M2C_UNK func_02075258(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_020752d0(s32, void *);                 /* extern */
M2C_UNK func_0207544c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02075470(s32);                         /* extern */
M2C_UNK func_02081f64(s32);                         /* extern */
s32 func_02082044(M2C_UNK);                         /* extern */
extern M2C_UNK data_020c2364;

s32 func_0206e864(void *arg0, void *arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r8;
    s32 var_r8;

    var_r8 = 0;
    if ((arg3 & 1) && (M2C_FIELD(arg1, s32 *, 8) != 0)) {
        temp_r8 = M2C_FIELD(arg0, s32 *, 0xFC);
        if (temp_r8 != 0) {
            func_02075470(temp_r8);
            func_02081f64(temp_r8);
        }
        temp_r0 = func_02082044(0x18);
        if (temp_r0 != 0) {
            func_02075258(temp_r0, M2C_FIELD(arg1, s32 *, 8), &data_020c2364);
        }
        M2C_FIELD(arg0, s32 *, 0xFC) = temp_r0;
        func_0207544c(M2C_FIELD(arg0, s32 *, 0xFC), arg2);
        func_020752d0(M2C_FIELD(arg0, s32 *, 0xFC), arg0);
        var_r8 = M2C_FIELD(arg0, s32 *, 0xFC);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r0_2 != 0) {
        temp_r1 = M2C_FIELD(arg1, s32 *, 0xC);
        if (temp_r1 != 0) {
            temp_r0_3 = func_0207078c(temp_r0_2, temp_r1, arg2, arg3);
            if (var_r8 == 0) {
                var_r8 = temp_r0_3;
            }
        }
    }
    return var_r8;
}
