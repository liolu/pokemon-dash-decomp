/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02081f64(void *);
extern u32 _u32_div_f(u32, u32);

void *func_0207a3e4(u8 *arg0) {
    u32 *end;
    u32 *cur;
    u8 *base;
    u32 cap;
    u32 *lim;
    u32 idx;
    if (*(s32 *) (arg0 + 4) != 0) {
        cap = *(u32 *) arg0;
        if (cap == 0) {
            idx = 0;
        } else {
            idx = (*(u32 *) (arg0 + 8) + *(u32 *) (arg0 + 4)) % cap;
        }
        base = *(u8 **) (arg0 + 0xc);
        end  = (u32 *) base + idx;
        cur  = (u32 *) base + *(u32 *) (arg0 + 8);
        lim  = (u32 *) base + cap;
        if (cur != end) {
            do {
                if (*cur != 0) {
                    func_02081f64((void *) *cur);
                }
                cur++;
                if (cur == lim) {
                    cur = (u32 *) base;
                }
            } while (cur != end);
        }
    }
    {
        void *m = *(void **) (arg0 + 0xc);
        if (m != 0) {
            func_02081f64(m);
        }
    }
    return arg0;
}
