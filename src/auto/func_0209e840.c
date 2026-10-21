/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_020d8770;
extern s32 data_020d8774;

void func_0209e840(s32 arg0) {
    if (data_020d8774 == 0) {
        data_020d8774 = arg0;
        data_020d8770 = arg0;
    } else {
        *(M2C_UNK *) data_020d8774 = arg0;
        data_020d8774              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
}
