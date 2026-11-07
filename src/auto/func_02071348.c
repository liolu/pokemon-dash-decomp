/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02071348(void **arg0, u8 *arg1) {
    void *t;

    *arg0 = *(void **) (arg1 + 0xC);
    t     = *arg0;
    if (t != NULL) {
        *(s32 *) ((u8 *) t + 4) += 1;
    }
}
