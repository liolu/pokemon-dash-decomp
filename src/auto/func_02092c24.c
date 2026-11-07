/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct R {
    s32 pad;
    s32 cnt;
} R;
typedef struct Q {
    s32 pad;
    u8 *p;
} Q;
void func_02092c24(R **a, Q **b) {
    Q *q = *b;
    u8 *t;
    if (q != NULL) {
        t = q->p;
        if (t != NULL) {
            t -= 8;
        }
        *a = (R *) t;
        if (*a != NULL) {
            (*a)->cnt += 1;
        }
        return;
    }
    *a = NULL;
}
