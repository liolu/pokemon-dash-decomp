/* compiler: 1.2/b56 */
#include "m2c.h"

extern void *func_02082044(u32);
extern void func_0208f7e8(void *, s32);

void func_02089e4c(void **arg0, s32 arg1) {
    void *r4;
    s32 *p;

    r4 = func_02082044(0x1C);
    if (r4 != NULL) {
        func_0208f7e8(r4, arg1);
    }
    *arg0 = r4;
    if (*arg0 != NULL) {
        p  = (s32 *) ((u8 *) *arg0 + 4);
        *p = *p + 1;
    }
}
