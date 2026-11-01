/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_020d6540;

void func_02076010(s32 arg0) {
    u8 *p = data_020d6540;
    if (arg0 != 0) {
        *p = *p | 0x10;
    } else {
        *p = *p & 0xEF;
    }
}
