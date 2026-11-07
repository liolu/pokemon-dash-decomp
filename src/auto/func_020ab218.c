/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020ab218(u8 *arg0) {
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x1C);
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x20);
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x28) - (*(s32 *) (arg0 + 0x18) & *(s32 *) (arg0 + 0x2C));
    *(s32 *) (arg0 + 0x34) = *(s32 *) (arg0 + 0x18);
}
