/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_020d4530;
extern s16 data_020d83ac;

void func_02099b70(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020d4530       = 0;
    data_020d83ac       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
