/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02080550(s32 c) {
    switch (c) {
        case 0x41:
        case 0x45:
        case 0x49:
        case 0x4f:
        case 0x55:
        case 0x61:
        case 0x65:
        case 0x69:
        case 0x6f:
        case 0x75:
        case 0x855a:
        case 0x856c:
        case 0x8571:
        case 0x8579:
        case 0x858c:
        case 0x8591:
            return 1;
        default:
            return 0;
    }
}
