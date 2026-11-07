/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Q {
    int *buf;
    volatile int head;
    int tail;
} Q;
extern int func_02082568(int, int);
extern void func_02082590(int);
extern void func_02081f64(int);

int func_020823c8(Q *q) {
    int h;
    int o;
    if (q->head != q->tail) {
        h       = q->head;
        o       = q->buf[h];
        q->head = (h + 1) % 512;
        if (func_02082568(o, -1) == 0) {
            if (o != 0) {
                func_02082590(o);
                func_02081f64(o);
            }
            return 0;
        }
        return o;
    }
    return 0;
}
