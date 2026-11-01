/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207bc20(s32 a, s32 b, s32 c);
void func_0207c620(void);
u64 func_0209d3a0(void);

s32 func_0206997c(u8 *arg0, u8 *arg1) {
    u64 r;

    func_0207bc20(*(s32 *) (arg0 + 0xC8) + 0x138, 0xB, *(s32 *) (*(u8 **) (arg1 + 0x18)));
    r                      = func_0209d3a0();
    *(u64 *) (arg0 + 0xD0) = r;
    func_0207c620();
    return 1;
}
