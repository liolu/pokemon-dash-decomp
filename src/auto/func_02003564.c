/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 data_020d4dd4[4];
u32 func_02003564(void) {
    u32 *s = data_020d4dd4;
    u32 a  = s[0];
    u32 b  = s[1];
    u32 c  = s[2];
    u32 d  = s[3];
    u32 r  = c ^ ((a << 1) | (b >> 31));
    s[0]   = b;
    s[1]   = c;
    s[2]   = d;
    s[3]   = r;
    return r;
}
