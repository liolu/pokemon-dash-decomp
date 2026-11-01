/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020da600;
extern u8 data_020dac00;
void func_0209e0d8(s32, s32, s32, s32);
void func_020a4a8c(u32, u32);

void func_020a4a34(void) {
    u8 *r4 = (u8 *) &data_020da600;
    u32 v;

    func_0209e0d8(*(s32 *) (r4 + 0x24), 0x04100010, *(s32 *) (r4 + 0x1C), 0x200);
    v = *(u32 *) (r4 + 0x18);
    func_020a4a8c((v >> 8) | 0xB7000000, v << 0x18);
    *(volatile u32 *) 0x040001A4 = *(u32 *) (&data_020dac00 + 4);
}
