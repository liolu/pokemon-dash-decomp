/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02032ed8(void *, s32, s32, s32, s32, s32);
extern u8 data_020cf3bc[];

void *func_02045898(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    func_02032ed8(arg0, arg1, arg2, arg3, arg4, (s32) arg5);
    *(u8 **) arg0                  = data_020cf3bc;
    *(s32 *) ((u8 *) arg0 + 0x104) = 0;
    *(s32 *) ((u8 *) arg0 + 0x108) = 0;
    *(s32 *) ((u8 *) arg0 + 0x10C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x110) = 0;
    return arg0;
}
