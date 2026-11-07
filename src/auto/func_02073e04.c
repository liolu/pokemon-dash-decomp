/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020844f4(s32, s32);
extern s32 data_020d6f84;

s32 func_02073e04(u8 *arg0) {
    s32 r;
    u8 *p;

    r = arg0[8] & 1;
    if (r == 0) {
        return r;
    }
    p  = arg0 + 8;
    *p = (u8) (*p & 0xFC);
    func_020844f4(data_020d6f84, *(s32 *) (arg0 + 0x10));
    *(s32 *) (arg0 + 0x10) = -1;
    return -1;
}
