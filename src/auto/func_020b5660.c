/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN4cstd6strcmpEPKcS1_(s32, s32);                        /* extern */

s32 func_020b5660(void *arg0, void *arg1) {
    if ((arg0 == arg1) || (_ZN4cstd6strcmpEPKcS1_(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)) == 0)) {
        return 1;
    }
    return 0;
}
