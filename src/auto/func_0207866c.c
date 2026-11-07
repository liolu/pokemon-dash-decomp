/* compiler: 1.2/b56 */
#include "m2c.h"
extern void func_02081f64(void *);

void func_0207866c(void *arg0, u8 *arg1) {
    u8 *o;
    u8 *c;
    c = *(u8 **) (arg1 + 0);
    if (c != 0) {
        func_0207866c(arg0, c);
    }
    c = *(u8 **) (arg1 + 4);
    if (c != 0) {
        func_0207866c(arg0, c);
    }
    o = *(u8 **) (arg1 + 0x10);
    if (o != 0) {
        s32 *q = (s32 *) (o + 4);
        *q     = *q - 1;
        if (*(s32 *) (o + 4) == 0) {
            u8 *r = *(u8 **) (arg1 + 0x10);
            if (r != 0) {
                (*(void (**)(void *))(*(u8 **) r + 4))(r);
            }
        }
    }
    *(u8 **) (arg1 + 0x10) = 0;
    func_02081f64(arg1);
}
