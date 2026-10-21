/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020087e0(M2C_UNK);                       /* extern */
extern u8 data_020d4dfc;
extern s32 data_020d4e60;

void func_02006e94(s32 arg0, s32 *arg1) {
    s32 temp_r1;
    void *temp_r0;

    if (arg0 < 0) {
        return;
    }
    temp_r1 = (arg0 * 0xE0) + data_020d4e60;
    if (M2C_FIELD(temp_r1, u8 *, 0xC9) != 0) {
        if (data_020d4dfc == 0) {
            if (M2C_FIELD(temp_r1, u8 *, 0xA7) != 0) {
                *arg1 = (s32) M2C_FIELD(temp_r1, s8 *, 0xA8);
            } else {
                *arg1 = -1;
            }
            return;
        }
        temp_r0 = func_020087e0(0);
        if (temp_r0 == NULL) {
            return;
        }
        if (M2C_FIELD(temp_r0, u8 *, 0) != 1) {
            *arg1 = (s32) M2C_FIELD(temp_r0, s8 *, 2);
        }
        return;
    }
    *arg1 = -1;
}
