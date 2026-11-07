/* compiler: 1.2/b56 */
#include "m2c.h"

M2C_UNK func_0206ec9c(void *, s32);                 /* extern */
M2C_UNK func_0208c9f8(void *, void *);              /* extern */

s32 func_0208c6f8(void *arg0, void *arg1) {
    s32 temp_r1;
    u16 temp_lr;
    void *temp_ip;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x68);
    temp_lr = M2C_FIELD(arg1, u16 *, 0);
    temp_ip = temp_r0 + 0x18;
    if ((M2C_FIELD(temp_ip, u16 *, 0) == temp_lr) && (M2C_FIELD(temp_ip, u16 *, 2) == M2C_FIELD(arg1, u16 *, 2)) &&
        (M2C_FIELD(temp_ip, u16 *, 4) == M2C_FIELD(arg1, u16 *, 4))) {
        return 1;
    }
    M2C_FIELD(temp_r0, u16 *, 0x18) = temp_lr;
    M2C_FIELD(temp_r0, u16 *, 0x1A) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_r0, u16 *, 0x1C) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0)    = (s32) (M2C_FIELD(temp_r0, s32 *, 0) | 8);
    temp_r1                         = M2C_FIELD(temp_r0, s32 *, 0) & 0x10;
    if (temp_r1 == 0) {
        func_0206ec9c(temp_r0, temp_r1);
    }
    func_0208c9f8(arg0, arg0 + 0xAC);
    return 1;
}
