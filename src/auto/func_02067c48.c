/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02067c48(u8 *arg0, s16 arg1) {
    u16 *p;
    *(s16 *) (arg0 + 0xA0) = arg1;
    p                      = (u16 *) (arg0 + 4);
    *p                     = *p | 0x800;
}
