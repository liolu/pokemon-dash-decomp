/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02045da0(M2C_UNK);                     /* extern */

void func_02046140(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 2:
            func_02045da0(0x80);
        /* fallthrough */
        case 1:
            func_02045da0(0x40);
        /* fallthrough */
        case 0:
            func_02045da0(0x20);
            return;
    }
}
