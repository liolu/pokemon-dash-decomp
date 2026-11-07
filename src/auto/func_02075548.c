/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02075548(u8 *arg0, s32 arg1) {
    u8 *q;
    *(s32 *) (arg0 + 4)    = *(s32 *) (arg0 + 8);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x1c) + arg1;
    arg0[0x11]             = 0;
    arg0[0x12]             = 0;
    q                      = arg0 + 0x10;
    *q                     = (u8) (*q & ~0x40);
    *(s16 *) (arg0 + 0x1a) = 0;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x28) = 0;
    *(s32 *) (arg0 + 0x2c) = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    *(s32 *) (arg0 + 0x34) = 0;
    arg0[0x10]             = (u8) ((arg0[0x10] & 0xF0) | 1);
}
