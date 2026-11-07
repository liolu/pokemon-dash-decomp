/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02064718(void *);

u8 *func_02064680(u8 *arg0) {
    u8 *r7;
    u32 *lo;
    u32 *p;
    u8 *r;
    int *q;
    lo = *(u32 **) arg0 + *(s32 *) (arg0 + 0x10);
    p  = lo + *(s32 *) (arg0 + 4);
    if (p > lo) {
        do {
            p--;
            r = (u8 *) *p;
            if (r != 0) {
                q  = (int *) (r + 4);
                *q = *q - 1;
                if (*(int *) (r + 4) == 0) {
                    u8 *o = (u8 *) *p;
                    if (o != 0) {
                        (*(void (**)(void *))(*(u8 **) o + 4))(o);
                    }
                }
            }
            *p = 0;
        } while (p > lo);
    }
    *(s32 *) (arg0 + 4) = 0;
    func_02064718(arg0);
    return arg0;
}
