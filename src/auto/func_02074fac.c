/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02074fac(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    *((u8 *) arg0 + 4) |= 0xC0;
}
