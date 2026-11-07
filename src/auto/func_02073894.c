/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020844f4(s32, s32);
extern s32 data_020d6f88;

s32 func_02073894(u8 *arg0) {
    s32 t;
    u8 *p;

    t = *(u8 *) (arg0 + 8) & 1;
    if (t == 0) {
        return t;
    }
    p  = arg0 + 8;
    *p = *p & 0xFC;
    func_020844f4(data_020d6f88, *(s32 *) (arg0 + 0x14));
    *(s32 *) (arg0 + 0x14) = -1;
    return -1;
}
