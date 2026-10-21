/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a532c();                                /* extern */

u16 func_020a5778(void) {
    if (func_020a532c() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
