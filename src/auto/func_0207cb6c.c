/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 *buf;
    s32 n;
} Arr;

void *func_02081fec(s32);

void *func_0207cb6c(Arr *a, s32 n) {
    s32 i;
    a->n   = n;
    a->buf = func_02081fec(a->n * 4);
    i      = 0;
    if (a->n > 0) {
        do {
            a->buf[i] = 0;
            i += 1;
        } while (i < a->n);
    }
    return a;
}
