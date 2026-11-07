/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0209bd44(u16);
M2C_UNK func_0209bd64(u16);
extern u16 data_020d7548;
extern s32 (*data_020d7550)(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_020d7564;

s32 func_02094bd4(void) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5                      = *(volatile u16 *) 0x04000204 & 3;
    *(volatile u16 *) 0x04000204 = (*(volatile u16 *) 0x04000204 & ~3) | 3;
    func_0209bd64(data_020d7548);
    *(volatile u16 *) 0x04000204 = (u16) ((*(volatile u16 *) 0x04000204 & 0xFFFC) | *(u16 *) ((u8 *) data_020d7564 + 0x10));
    *(volatile u8 *) 0x0A005555  = 0xAA;
    *(volatile u8 *) 0x0A002AAA  = 0x55;
    *(volatile u8 *) 0x0A005555  = 0x80;
    *(volatile u8 *) 0x0A005555  = 0xAA;
    *(volatile u8 *) 0x0A002AAA  = 0x55;
    *(volatile u8 *) 0x0A005555  = 0x10;
    temp_r4                      = data_020d7550(3, 0x0A000000, 0xFF);
    *(volatile u16 *) 0x04000204 = (u16) ((*(volatile u16 *) 0x04000204 & 0xFFFC) | 1);
    func_0209bd44(data_020d7548);
    *(volatile u16 *) 0x04000204 = (u16) ((*(volatile u16 *) 0x04000204 & ~3) | temp_r5);
    return temp_r4;
}
