/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a7724();                                /* extern */
extern s32 data_020cf93c;
extern u8 data_020d5d3c;

s32 func_0204f2b4(void) {
    u32 temp_r2;

    if (data_020d5d3c == 0) {
        temp_r2 = func_020a7724() & ~0xFF000000;
        switch (temp_r2) {                          /* irregular */
            case 0x455042:
                data_020cf93c = 0;
                break;
            case 0x475042:
                data_020cf93c = 2;
                break;
            case 0x525042:
                data_020cf93c = 1;
                break;
            case 0x565841:
                data_020cf93c = 3;
                break;
            case 0x505841:
                data_020cf93c = 4;
                break;
        }
        data_020d5d3c = 1;
    }
    return data_020cf93c;
}
