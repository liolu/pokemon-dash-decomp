/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200735c(u16);
u8 *func_020087e0(u16);
extern u8 data_020d4e04;
extern u8 *data_020d4e38;

s32 func_02005f10(u8 arg0) {
    u16 i;
    u8 *e;
    u8 *d;
    i             = 0;
    d             = data_020d4e38;
    d[1]          = 0;
    d[0]          = arg0;
    data_020d4e04 = 1;
    do {
        if (func_0200735c(i) != 0) {
            e = func_020087e0(i);
            if (e == 0 || *e != arg0) {
                return 0;
            }
        }
        i = i + 1;
    } while (i < 6);
    return 1;
}
