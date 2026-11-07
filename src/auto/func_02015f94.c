/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02063070(s32, s32, s32);
extern s32 func_02088bd8(s32);

s32 func_02015f94(s32 a0, s32 *arg1) {
    s32 t = (func_02088bd8(*arg1) + 0x800) >> 12;
    if (t == 0x5a) {
        func_02063070(0, 0x14, 0);
    } else if (t == 0x96) {
        func_02063070(0, 0x14, 0);
    } else if (t == 0xd2) {
        func_02063070(0, 0x15, 0);
        return 0;
    }
    return 1;
}
