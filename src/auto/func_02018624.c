/* compiler: 1.2/b56 */
#include "m2c.h"

void **func_02018624(void **arg0) {
    void **p;

    p = (void **) *arg0;
    if (p != NULL) {
        *((s32 *) p + 1) = *((s32 *) p + 1) - 1;
        if (*((s32 *) p + 1) == 0) {
            if (*arg0 != NULL) {
                (*(void (**)(void *))(*(u8 **) *arg0 + 4))(*arg0);
            }
        }
    }
    *arg0 = NULL;
    return arg0;
}
