/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct A {
    s32 **data;
    s32 cnt;
} A;

void func_02081f64(s32 *p);

void func_0203c1ec(A *a, s32 n) {
    s32 **p;
    s32 *c = &a->cnt;
    s32 v  = *c - n;
    s32 *r;
    p  = a->data + a->cnt;
    *c = v;
    if (n == 0) {
        return;
    }
    do {
        p--;
        r = *p;
        if (r != 0) {
            *r -= 1;
            if (*r == 0 && *p != 0) {
                func_02081f64(*p);
            }
        }
        *p = 0;
        n--;
    } while (n != 0);
}
