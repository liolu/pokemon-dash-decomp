/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_020d3e58;
extern u32 data_020d6744;
extern s32 data_020d6748;
extern void *data_020d674c;

void func_02082504(void *arg0) {
    void *temp_r1;

    M2C_FIELD(arg0, void **, 0x24) = (void *) data_020d674c;
    temp_r1                        = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0x20) = arg0;
    }
    data_020d674c = arg0;
    if ((u32) arg0 < (u32) data_020d3e58) {
        data_020d3e58 = (u32) arg0;
    }
    if ((u32) data_020d6744 < (u32) arg0) {
        data_020d6744 = (u32) arg0;
    }
    data_020d6748 += 1;
}
