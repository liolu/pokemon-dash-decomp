/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02066574(u8 *arg0, u8 arg1) {
    s32 *p;
    *(u8 *) (arg0 + 0xBC) = arg1;
    if (*(u8 volatile *) (arg0 + 0xBC) != 0) {
        p  = (s32 *) (arg0 + 0x14);
        *p = *p & ~0x100;
    }
}
