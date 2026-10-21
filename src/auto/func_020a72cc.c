/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209bbb8(u16);                         /* extern */
M2C_UNK func_0209bd64(u16);                         /* extern */
M2C_UNK func_0209cdd4(u8 *, u32);                   /* extern */
M2C_UNK func_0209d9c0(M2C_UNK);                     /* extern */
M2C_UNK func_0209dacc(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_0209dba4(M2C_UNK, u8 *, u8 *, u32);    /* extern */
M2C_UNK func_0209dc94(u8 *, u8 *, u32);             /* extern */
M2C_UNK func_0209dcc4(u8 *, u8 *, u32);             /* extern */
s32 func_020a75dc();                                /* extern */
extern M2C_UNK data_020db940;

s32 func_020a72cc(M2C_UNK arg0, u8 *arg1, u8 *arg2, u32 arg3, u32 arg4) {
    u32 var_r1;
    u8 *var_r5;
    u8 *var_r6;
    u8 temp_r0;

    var_r6 = arg1;
    var_r5 = arg2;
    if (func_020a75dc() == 0) {
        return 0;
    }
    func_0209bd64(M2C_FIELD(&data_020db940, u16 *, 2));
    if (!(arg4 & 1)) {
        func_0209d9c0(arg0);
        func_0209cdd4(var_r5, arg3);
    }
    switch (arg4) {                                 /* irregular */
        case 16:
            func_0209dacc(arg0, var_r6, var_r5, arg3);
            break;
        case 32:
            func_0209dba4(arg0, var_r6, var_r5, arg3);
            break;
        case 17:
            func_0209dc94(var_r6, var_r5, arg3);
            break;
        case 33:
            func_0209dcc4(var_r6, var_r5, arg3);
            break;
        case 1:
            for (var_r1 = 0; var_r1 < arg3; var_r1 += 1) {
                temp_r0 = *var_r6;
                var_r6 += 1;
                *var_r5 = temp_r0;
                var_r5 += 1;
            }
            break;
    }
    func_0209bbb8(M2C_FIELD(&data_020db940, u16 *, 2));
    if (func_020a75dc() != 0) {
        return 1;
    }
    return 0;
}
