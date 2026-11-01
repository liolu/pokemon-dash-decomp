/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02085f44(void);
extern s32 func_020a5ac4(void *, s32, s32);
extern void func_02007d18(void);
extern s32 data_020d4e60;
extern s32 data_020d4e6c;

s32 func_02007960(void) {
    s32 t;
    s32 r;

    t             = func_02085f44();
    r             = func_020a5ac4((void *) func_02007d18, data_020d4e60 + data_020d4e6c * 0xE0, t);
    data_020d4e6c = -1;
    if (r == 2) {
        return 1;
    }
    return 0;
}
