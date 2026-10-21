#include "m2c.h"

extern s32 data_020bef78;
extern M2C_UNK data_020bef7c;

s32 func_02005a2c(void) {
    switch (data_020bef78) {                        /* irregular */
        case 0:
            return M2C_FIELD(&data_020bef7c, s32 *, 8);
        case 2:
            return 0x800002;
        default:
            return 0x400020;
    }
}
