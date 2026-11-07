/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02081f64(void *p);
void func_02070f00(void *p);
s32 func_02070948(void *p);

void func_0206ffcc(u8 *obj) {
    u8 *n;
    s32 *p;
    s32 *rc;

    n = *(u8 **) (obj + 4);
    if (n != NULL) {
        func_0206ffcc(n);
        func_02081f64(n);
    }
    n = *(u8 **) (obj + 8);
    if (n != NULL) {
        func_02070f00(n);
        p = *(s32 **) (n + 4);
        if (p != NULL) {
            rc  = p + 1;
            *rc = *rc - 1;
            if (p[1] == 0 && *(s32 **) (n + 4) != NULL) {
                (*(void (**)(void *))(*(u32 *) (*(u8 **) (n + 4)) + 4))(*(u8 **) (n + 4));
            }
        }
        *(u32 *) (n + 4) = 0;
        func_02081f64(n);
    }
    n = *(u8 **) (obj + 0xc);
    if (n != NULL) {
        func_02070948(n);
        func_02081f64(n);
    }
}
