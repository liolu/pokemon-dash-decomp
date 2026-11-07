/* compiler: 1.2/b56 */
#include "m2c.h"

void func_02078634(u8 *arg0) {
    *(s32 *) (arg0 + 4) = *(s32 *) (arg0 + 4) - 1;
    *(s32 *) (arg0 + 8) = *(s32 *) (arg0 + 8) + 1;
    if (*(s32 *) (arg0 + 8) == *(s32 *) (arg0 + 0)) {
        *(s32 *) (arg0 + 8) = 0;
    }
}
