/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203c894(void *obj);
void func_02081f64(void *p);

void *func_0203c808(u8 *obj) {
    u32 base;
    u32 top;
    u32 *p;
    u32 *q;

    base = *(u32 *) obj + *(u32 *) (obj + 0x10) * 4;
    top  = base + *(u32 *) (obj + 4) * 4;
    if (top > base) {
        p = (u32 *) top;
        do {
            p = p - 1;
            q = (u32 *) *p;
            if (q != 0) {
                *q = *q - 1;
                if (*q == 0 && *p != 0) {
                    func_02081f64((void *) *p);
                }
            }
            *p = 0;
        } while ((u32) p > base);
    }
    *(u32 *) (obj + 4) = 0;
    func_0203c894(obj);
    return obj;
}
