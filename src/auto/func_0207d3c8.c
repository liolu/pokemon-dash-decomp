/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d6578;
extern s32 data_020d6580;
extern u8 data_020d6584[];
extern u16 data_020d6574;

s32 func_020a4158(void);
void func_0209dcc4(void *, s32, s32);
void func_020a3bd8(u16);
void func_020a3bc8(u16);
s32 func_020a416c(s32, void *, s32, s32, s32, s32);

s32 func_0207d3c8(void) {
    s32 r4;
    s32 c;

    if (data_020d6578 == 0) {
        func_0209dcc4(data_020d6584, data_020d6580, 0x20);
    } else {
        r4 = 0;
        c  = ((u8) func_020a4158() == 1) ? 1 : r4;
        if (c != 0) {
            func_020a3bd8(data_020d6574);
            r4 = func_020a416c(0, data_020d6584, 0x20, 0, 0, 0);
            func_020a3bc8(data_020d6574);
        }
        if (r4 == 0) {
            return 1;
        }
    }
    return 0;
}
