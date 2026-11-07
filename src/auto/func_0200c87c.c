/* compiler: 1.2/b56 */
#include "m2c.h"

extern void func_02032ed8(void *, s32, s32, s32, s32, s32);
extern u8 data_020cd170;

void *func_0200c87c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 *p;

    func_02032ed8(arg0, arg1, 0, 0, arg2, arg3);
    *(void **) arg0 = &data_020cd170;
    p               = (u32 *) ((u8 *) arg0 + 0xC);
    *p              = *p | 0x20;
    return arg0;
}
