/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02081f64(void *node);

void func_0202c234(void **arg0, s32 *arg1, void **arg2, void **arg3) {
    void *last;
    void *first;
    void *x;
    void *p;
    void **slot;

    last  = *arg3;
    first = *arg2;
    if (first == last) {
        *arg0 = last;
        return;
    }
    x                                        = *(void **) last;
    *(void **) ((u8 *) *(void **) first + 4) = *(void **) ((u8 *) x + 4);
    *(void **) (*(void **) ((u8 *) x + 4))   = *(void **) first;
    if (*arg2 != *arg3) {
        do {
            slot = (void **) ((u8 *) *arg2 + 8);
            p    = *slot;
            if (p != NULL) {
                *(s32 *) ((u8 *) p + 4) -= 1;
                if (*(s32 *) ((u8 *) p + 4) == 0) {
                    if (*slot != NULL) {
                        (*(void (**)(void *))(*(u8 **) (*slot) + 4))(*slot);
                    }
                }
            }
            *slot = NULL;
            x     = *arg2;
            *arg2 = *(void **) ((u8 *) x + 4);
            func_02081f64(x);
            *arg1 -= 1;
        } while (*arg2 != *arg3);
    }
    *arg0 = *arg3;
}
