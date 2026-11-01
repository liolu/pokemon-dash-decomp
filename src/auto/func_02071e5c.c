#include "m2c.h"

void *func_02071e5c(void *arg0, s8 *arg1, s8 **arg2) {
    s8 c;

    for (;;) {
        c = *arg1;
        if (c == 0) {
            break;
        }
        if (c != 0x4E) {
            return NULL;
        }
        arg0 = M2C_FIELD(arg0, void **, 0xC);
        if (arg0 == NULL) {
            return NULL;
        }
        arg1 = arg1 + 1;
    }
    if (arg2 != NULL) {
        *arg2 = arg1;
    }
    return arg0;
}
