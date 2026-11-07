/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 *func_0208e63c(u8 *arg0) {
    u8 *r;
    u8 *p;

    if (*(u8 **) (arg0 + 8) != 0) {
        return *(u8 **) (arg0 + 8);
    }
    p = *(u8 **) arg0;
    if (p != 0) {
        do {
            r = func_0208e63c(p);
            if (r != 0) {
                return r;
            }
            p = *(u8 **) (p + 4);
        } while (p != 0);
    }
    return 0;
}
