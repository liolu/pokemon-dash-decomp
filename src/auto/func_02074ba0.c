/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0207488c(void *, s32);
void func_02081810(void *, void *, void *, void *);

void func_02074ba0(u8 *arg0) {
    u8 *a = arg0 + 0xC;
    u8 *b = arg0 + 0x18;
    s32 f = *(u16 *) (arg0 + 4) & 0x2000;
    if (f != 0) {
        func_0207488c(arg0, f);
    }
    func_02081810(arg0 + 0x3C, a, arg0 + 0x28, b);
    {
        u16 *q = (u16 *) (arg0 + 4);
        *q     = (u16) (*q & 0xBFFF);
    }
}
