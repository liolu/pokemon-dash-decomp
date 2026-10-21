/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200aae4(void *);                          /* extern */
M2C_UNK func_0200bc44(void *, M2C_UNK);             /* extern */
M2C_UNK func_02063070(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02088ffc(s32, s32, M2C_UNK);           /* extern */
u8 func_ov001_020dc6f8(s32, s32);                   /* extern */

s32 func_0200a9e8(void *arg0) {
    s32 var_r4;
    u8 temp_r0;

    var_r4                        = 0;
    M2C_FIELD(arg0, u8 *, 0x140)  = func_ov001_020dc6f8(M2C_FIELD(arg0, s32 *, 0x18) << 7, M2C_FIELD(arg0, s32 *, 0x20) << 7);
    M2C_FIELD(arg0, s32 *, 0x130) = (s32) M2C_FIELD(arg0, u8 *, 0x140);
    temp_r0                       = M2C_FIELD(arg0, u8 *, 0x140);
    if (temp_r0 == 4) {
        var_r4 = 2;
        func_02088ffc(M2C_FIELD(arg0, s32 *, 0x10), 0x2819D033, 0);
        M2C_FIELD(arg0, s32 *, 0x198) = 3;
        func_0200bc44(arg0, 0);
        func_02063070(6, 0xC, 0);
    } else if (temp_r0 != 8) {
        if (func_0200aae4(arg0) == 0) {
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
        } else {
            func_02088ffc(M2C_FIELD(arg0, s32 *, 0x10), 0x2819D025, 0);
            M2C_FIELD(arg0, s32 *, 0x198) = 5;
            var_r4                        = 6;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) (var_r4 * 0x3C);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x11C) > 0) && (M2C_FIELD(arg0, u8 *, 0x140) != 4)) {
        return 1;
    }
    return 0;
}
