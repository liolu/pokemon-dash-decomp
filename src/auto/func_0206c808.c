/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02099e4c();                                /* extern */
extern s32 data_020d607c;
extern s32 data_020d6080;

void func_0206c808(void) {
    s32 temp_r0;

    temp_r0       = func_02099e4c();
    data_020d6080 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_020d607c = 0x06894000;
            return;
        case 0x20:
            data_020d607c = 0x06890000;
            return;
    }
}
