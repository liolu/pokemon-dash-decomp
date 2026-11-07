/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct R {
    s32 pad;
    s32 rc;
} R;
R **func_0202b648(u8 *, s32);

void func_02026088(R **arg0, u8 *arg1, s32 arg2) {
    R **t = func_0202b648(arg1 + 0x124, arg2);
    if (t != NULL) {
        *arg0 = *t;
        if (*arg0 != NULL) {
            s32 *p = &(*arg0)->rc;
            *p     = *p + 1;
        }
        return;
    }
    *arg0 = NULL;
}
