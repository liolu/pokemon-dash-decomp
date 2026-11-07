/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020472a0(s32 a);
void func_02047330(s32 a);
void func_020472ec(s32 a);
void func_02047270(void);
s32 func_020a3c28(void);
void func_020a4240(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020ad7b0(s32 a, void *b, s32 c);

extern u8 data_020cf474;
extern s32 data_020bef74;
extern s32 data_020d54cc;
extern s32 data_020cf484;

s32 func_02047188(s32 arg0) {
    s32 r4;
    s32 var_r4;

    if ((data_020cf474 == 0) || ((u32) (data_020bef74 - 1) <= 1U)) {
        return 0;
    }
    func_020472a0(1);
    func_02047330(0);
    func_020a4240(arg0 << 0xC, data_020d54cc, 0x40, 0, 0, 0);
    r4 = func_020a3c28();
    func_020472ec(0);
    if ((u32) (r4 - 4) <= 1U) {
        data_020cf474 = 0;
    }
    if ((r4 == 0) && (func_020ad7b0(data_020d54cc + 0x20, &data_020cf484, 4) == 0)) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02047270();
    return var_r4;
}
