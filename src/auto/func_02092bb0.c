/* compiler: 1.2/b56 */
#include "m2c.h"

void *func_02092bb0(void *arg0) {
    u8 *self = (u8 *) arg0;
    u8 *r2;
    void *r0;

    r2 = *(u8 **) (self + 4);
    if (r2 != 0) {
        *(s32 *) (r2 + 4) = *(s32 *) (r2 + 4) - 1;
        if (*(s32 *) (r2 + 4) == 0) {
            r0 = *(void **) (self + 4);
            if (r0 != 0) {
                (*(void (**)(void *))(*(u8 **) r0 + 4))(r0);
            }
        }
    }
    *(void **) (self + 4) = 0;
    return arg0;
}
