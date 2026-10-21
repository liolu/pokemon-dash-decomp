/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201c8c8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02045bf4();                                /* extern */
s32 func_02047188(M2C_UNK);                         /* extern */
M2C_UNK func_02049584(void *);                      /* extern */
M2C_UNK func_0204a360(void *);                      /* extern */
M2C_UNK func_02063070(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02063678(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0207c7f4(M2C_UNK);                     /* extern */
extern s32 data_020bef74;
extern s32 data_020d5d30;
extern void *data_020d6f64;
extern void *data_020d73d4;

void func_0204a1bc(void *arg0) {
    s32 var_r9;
    u32 temp_r8;

    var_r9 = func_02047188(0);
    if (var_r9 == 0) {
        var_r9 = func_02047188(1);
    }
    func_0201c8c8(0, -0x1000, 1);
    func_0201c8c8(0, -0x1000, 0);
    func_0204a360(arg0);
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) < (u32) (data_020d5d30 * 2)) {
        temp_r8 = data_020bef74 - 1;
    loop_4:
        if (((var_r9 != 0) || (temp_r8 <= 1U)) &&
            ((M2C_FIELD(data_020d73d4, u8 *, 2) != 0) || (M2C_FIELD(data_020d73d4, u8 *, 1) != 0) ||
             (M2C_FIELD(data_020d6f64, u16 *, 2) & 9))) {
            M2C_FIELD(arg0, s32 *, 0xF0) = 0;
            func_02063070(5, 0, 0);
        } else {
            if (M2C_FIELD(arg0, u32 *, 0xF8) == 0x1E) {
                func_02063678(0xB, 0x7F);
            }
            if (M2C_FIELD(arg0, u32 *, 0xF8) == 0x3BE) {
                func_02063070(5, 8, 0);
                func_02063070(8, 0, 0);
            }
            func_0207c7f4(0);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) < (u32) (data_020d5d30 * 2)) {
                goto loop_4;
            }
        }
    }
    if (func_02045bf4() != 0) {
        do {
            func_0207c7f4(0);
        } while (func_02045bf4() != 0);
    }
    M2C_FIELD(arg0, s32 *, 0xEC) = 2;
    func_02049584(arg0);
}
