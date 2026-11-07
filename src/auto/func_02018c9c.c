/* compiler: 1.2/b56 */
#include "m2c.h"

void **func_02018c9c(void **arg0, void **arg1) {
    if (arg1 != arg0) {
        u8 *n = (u8 *) *arg1;
        if (n != (u8 *) *arg0) {
            u8 *o;
            if (n != 0) {
                s32 *q = (s32 *) (n + 4);
                *q     = *q + 1;
            }
            o = (u8 *) *arg0;
            if (o != 0) {
                s32 *q = (s32 *) (o + 4);
                *q     = *q - 1;
                if (*(s32 *) (o + 4) == 0) {
                    u8 *r = (u8 *) *arg0;
                    if (r != 0) {
                        (*(void (**)(void *))(*(u8 **) r + 4))(r);
                    }
                }
            }
            *arg0 = n;
        }
    }
    return arg0;
}
