/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02005f10(s32);
extern void func_0209dcb0(s32, s32, s32);
extern u8 data_020d4e00;
extern u8 *data_020d4e38;
extern s32 data_020d4e88;

void func_02005e90(void) {
    volatile s32 z = 0;

    func_0209dcb0(z, data_020d4e88, 0x198);
    data_020d4e00       = 1;
    data_020d4e38[0x11] = 0;
    func_02005f10(3);
}
