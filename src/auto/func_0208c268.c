/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0208c268(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *(u32 *) (arg0 + 0x64) = *(u32 *) (arg0 + 0x64) | 1;
    } else {
        *(u32 *) (arg0 + 0x64) = *(u32 *) (arg0 + 0x64) & 0xFFFFFFFE;
    }
}
