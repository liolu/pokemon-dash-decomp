#include "m2c.h"

void func_02099a94(s32 arg0) {
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~7) | arg0;
}
