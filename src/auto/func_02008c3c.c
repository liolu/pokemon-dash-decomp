/* compiler: 1.2/b56 */
/* near start: 6 diffs with profile "2.0/sp1p5 -O1" */
#include "m2c.h"

void func_02008c3c(u8 *arg0) {
    u8 *temp;

    temp = *(u8 **) (arg0 + 0x110);
    if (temp != NULL) {
        *(s32 *) (temp + 0x14) |= 0x80;
    }
}
