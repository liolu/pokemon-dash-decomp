/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020966e8(u8 *);

void func_020980c8(u8 *arg0) {
    s32 *q;

    if (*(s32 *) (arg0 + 0x11C) == 0) {
        return;
    }
    q  = (s32 *) (arg0 + 0x11C);
    *q = *q - 1;
    if (*(s32 *) (arg0 + 0x11C) != 0) {
        return;
    }
    func_020966e8(arg0);
}
