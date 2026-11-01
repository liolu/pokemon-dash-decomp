/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_020a2d54(void *, s32 *);
void func_02088ffc(s32, u32, s32);

void func_0202e68c(u8 *arg0, s32 arg1) {
    s32 sp0;
    u32 r1v;

    func_020a2d54(0, &sp0);
    r1v = 0x2823A000;
    if (*(s32 *) (arg0 + 0x18) == arg1) {
        r1v += 1;
    }
    if (sp0 != 1) {
        r1v += 2;
    }
    func_02088ffc(*(s32 *) (arg0 + arg1 * 4 + 0x30), r1v, 0);
}
