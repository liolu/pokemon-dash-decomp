/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s8 data_020d4e04;
extern s8 *data_020d4e38;
extern M2C_UNK data_020d4f00;

void func_02006ae8(void) {
    *data_020d4e38                        = 2;
    M2C_FIELD(&data_020d4f00, s8 *, 0x57) = 1;
    data_020d4e04                         = 1;
}
