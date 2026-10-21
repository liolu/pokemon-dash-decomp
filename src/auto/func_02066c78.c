/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207caec();                            /* extern */
void *func_02082044(M2C_UNK);                       /* extern */
extern M2C_UNK data_020d0ab8;

void *func_02066c78(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_02082044(0xE0);
    if (temp_r0 != NULL) {
        func_0207caec();
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_020d0ab8;
        M2C_FIELD(temp_r0, s32 *, 0xC0)   = arg0;
        M2C_FIELD(temp_r0, s32 *, 0xC4)   = 0;
        M2C_FIELD(temp_r0, s32 *, 0xCC)   = 0;
    }
    return temp_r0;
}
