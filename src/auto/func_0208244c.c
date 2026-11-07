/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Rb {
    s32 *buf;
    s32 head;
    s32 tail;
} Rb;

void func_02082568(s32 a, s32 b);

s32 func_0208244c(Rb *r, s32 v) {
    if ((r->tail + 1) % 512 == r->head) {
        return 0;
    }
    func_02082568(v, 1);
    r->buf[r->tail] = v;
    r->tail         = (r->tail + 1) % 512;
    return 1;
}
