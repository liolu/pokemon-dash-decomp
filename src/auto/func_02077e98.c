/* compiler: 1.2/b56 */
#include "m2c.h"

void **func_02077e98(void **arg0, void **arg1) {
    u8 *t;
    u8 *old;
    u8 *obj;
    if (arg1 != arg0) {
        t = (u8 *) *arg1;
        if ((void *) t != *arg0) {
            if (t != NULL) {
                *(s32 *) (t + 4) = *(s32 *) (t + 4) + 1;
            }
            old = (u8 *) *arg0;
            if (old != NULL) {
                *(s32 *) (old + 4) = *(s32 *) (old + 4) - 1;
                if (*(s32 *) (old + 4) == 0) {
                    obj = (u8 *) *arg0;
                    if (obj != NULL) {
                        (*(void (**)(void *))(*(u8 **) obj + 4))(obj);
                    }
                }
            }
            *arg0 = (void *) t;
        }
    }
    return arg0;
}
