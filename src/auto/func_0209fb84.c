/* compiler: 1.2/b56 */
#include "m2c.h"

extern void func_0209fc84(void *, s32);

void func_0209fb84(u8 *arg0, s16 arg1) {
    s32 tmp;

    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) | 4;
    *(u32 *) (arg0 + 0x2C) = *(u32 *) (arg0 + 8);
    *(u32 *) (arg0 + 0x34) = 0;
    *(u16 *) (arg0 + 0x32) = 0;
    *(s16 *) (arg0 + 0x30) = arg1;
    tmp                    = 2;
    func_0209fc84(arg0, tmp);
}
