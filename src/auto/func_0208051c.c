#include "m2c.h"

s32 func_0208051c(u8 *arg0) {
    s32 v = arg0[0];
    if ((v >= 0x81 && v <= 0x9F) || (v >= 0xE0 && v <= 0xFC)) {
        v = arg0[1] | (v << 8);
    }
    return v;
}
