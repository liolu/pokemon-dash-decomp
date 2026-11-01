/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02081a40(s32 arg0, s32 arg1) {
    s64 x;
    s64 y;

    x = (s64) arg0 * arg0 + 0x800;
    y = (s64) arg1 * arg1 + 0x800;
    return (s32) (x >> 12) + (s32) (y >> 12);
}
