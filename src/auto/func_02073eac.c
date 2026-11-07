/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0209b654(s32 a, s32 b, s32 c);

void func_02073eac(u8 *arg0) {
    u8 *p = *(u8 **) (arg0 + 0xC);

    func_0209b654(*(s32 *) (arg0 + 0x18), *(s32 *) (arg0 + 0x10), *(s32 *) (p + 4));
    *(u8 *) (arg0 + 8) |= 2;
}
