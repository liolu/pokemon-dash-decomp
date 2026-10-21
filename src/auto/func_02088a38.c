/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e124(s32, s32);                    /* extern */
void *func_0208e3b8(void *);                        /* extern */

s32 func_02088a38(void *arg0, void **arg1) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(func_0208e3b8(*arg1), void **, 8);
    if ((temp_r1 == NULL) || !(M2C_FIELD(temp_r1, s32 *, 0) & 0x10000) || (M2C_FIELD(temp_r1, s32 *, 8) != 0)) {
        return 0;
    }
    func_0206e124(M2C_FIELD(M2C_FIELD(arg0, void **, 0x64), s32 *, 0x10), M2C_FIELD(temp_r1, s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) *M2C_FIELD(*arg1, s32 **, 0xC);
    return 1;
}
