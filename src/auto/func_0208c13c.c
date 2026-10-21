/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208c13c(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x114) >= 1U) {
        return *M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x11C), void **, 0xC), s32 **, 0xC);
    }
    return 0x28000000;
}
