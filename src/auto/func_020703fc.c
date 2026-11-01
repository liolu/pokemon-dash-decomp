/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207136c(void *);

s32 func_020703fc(void *arg0) {
    u8 *r4 = (u8 *) arg0;
    s32 r0;

    if (r4 != NULL) {
        do {
            if (*(void **) (r4 + 8) != NULL && (*r4 & 2)) {
                r0 = func_0207136c(*(void **) (r4 + 8));
                if (r0 != 0) {
                    return r0;
                }
            }
            if (!(*r4 & 1)) {
                break;
            }
            r4 = *(u8 **) (r4 + 4);
        } while (r4 != NULL);
    }
    return 0;
}
