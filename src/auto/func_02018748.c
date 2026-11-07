/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02018748(u8 *arg0, s32 arg1) {
    if (arg1 == 0) {
        *(s32 *) (arg0 + 0x14) = *(s32 *) (arg0 + 0x14) | 0x80;
    } else {
        *(s32 *) (arg0 + 0x14) = *(s32 *) (arg0 + 0x14) & ~0x80;
    }
}
