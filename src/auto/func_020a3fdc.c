/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020da600;
void func_0209c208(void *);

void func_020a3fdc(s32 a, s32 b, s32 c) {
    u8 *r2;

    if (a != 0xB) {
        return;
    }
    if (c == 0) {
        return;
    }
    r2 = (u8 *) &data_020da600;
    *(u32 *) (r2 + 0x34) &= ~0x20;
    func_0209c208(*(void **) (r2 + 0xD0));
}
