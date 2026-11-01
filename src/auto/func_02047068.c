/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020470f8(void);
void func_020472a0(s32);
void func_020472ec(s32);
void func_02047270(void);
void func_02047330(s32);
s32 func_020a3c28(void);
s32 func_020a416c(s32, s32, s32, s32, s32, s32);
extern u8 data_020cf474;
extern s32 data_020d54cc;

s32 func_02047068(s32 arg0) {
    s32 r4;

    if (data_020cf474 == 0) {
        return 1;
    }
    func_020472a0(0);
    func_020470f8();
    func_02047330(1);
    func_020a416c(arg0 << 0xC, data_020d54cc, 0x850, 0, 0, 0);
    r4 = func_020a3c28();
    func_020472ec(1);
    func_02047270();
    if (r4 == 0) {
        return 1;
    }
    return 0;
}
