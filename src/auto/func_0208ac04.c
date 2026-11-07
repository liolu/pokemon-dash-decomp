/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02081f64(void *);

u32 *func_0208ac04(u32 *q) {
    u32 *end, *cur, *base, *wrap;
    u32 n, r;
    if (((volatile u32 *) q)[1] != 0) {
        n = q[0];
        if (n == 0) {
            r = 0;
        } else {
            r = (q[2] + q[1]) % n;
        }
        base = (u32 *) q[3];
        end  = base + r;
        cur  = base + q[2];
        wrap = base + n;
        if (cur != end) {
            do {
                if (*cur != 0) {
                    func_02081f64((void *) *cur);
                }
                cur++;
                if (cur == wrap) {
                    cur = base;
                }
            } while (cur != end);
        }
    }
    if (q[3] != 0) {
        func_02081f64((void *) q[3]);
    }
    return q;
}
