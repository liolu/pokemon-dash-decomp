/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02099e24();                                /* extern */
extern M2C_UNK data_020c9000;
extern s32 data_020d83d0;
extern s32 data_020d83d4;

void func_0209b59c(void) {
    s32 temp_r0;

    temp_r0       = func_02099e24();
    data_020d83d4 = temp_r0;
    data_020d83d0 = *((u16 *) ((s8 *) &data_020c9000 + ((temp_r0 >> 4) * 2))) << 0xC;
}
