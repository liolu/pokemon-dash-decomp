/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020d03dc;
extern s32 data_020d03e0;

void func_020604a0(void *arg0) {
    if (data_020d03e0 == 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0xA;
        M2C_FIELD(arg0, s32 *, 4) = (s32) data_020d03e0;
    } else if ((s32) data_020d03e0 < 6) {
        M2C_FIELD(arg0, s32 *, 0) = 8;
        M2C_FIELD(arg0, s32 *, 4) = (s32) (data_020d03e0 - 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 9;
        M2C_FIELD(arg0, s32 *, 4) = (s32) data_020d03dc;
        data_020d03dc             = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) data_020d03dc;
}
