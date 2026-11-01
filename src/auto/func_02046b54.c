/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046be4(s32);
void func_02047270(void);
void func_020472a0(s32);
void func_020472ec(s32);
void func_02047330(s32);
s32 func_020a3c28(void);
s32 func_020a4240(s32, s32, s32, s32, s32, s32);
extern u8 data_020cf474;
extern s32 data_020d54cc;

s32 func_02046b54(s32 arg0) {
    s32 r4;

    if (data_020cf474 == 0) {
        return 0;
    }
    func_020472a0(1);
    func_02047330(0);
    func_020a4240(arg0 << 0xC, data_020d54cc, 0xA00, 0, 0, 0);
    r4 = func_020a3c28();
    func_020472ec(0);
    r4 = func_02046be4(r4);
    func_02047270();
    return r4;
}
