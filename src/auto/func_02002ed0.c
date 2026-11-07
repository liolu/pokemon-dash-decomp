/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02002ed0(u32 a) {
    u32 t = ((a & 0x3000000) >> 18) | ((a & 0x30000) >> 12) | ((a & 0x300) >> 6);
    u32 x = (a & 3) | t;
    return (u16) (x % 28);
}
