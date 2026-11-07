/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020059fc(void *, s32, s32, s32);

void func_02074d9c(u8 *arg0) {
    u32 buf[6];
    u8 *p4;

    *(u16 *) (arg0 + 0x4) = 0;
    p4                    = arg0 + 0x4;
    *(u16 *) p4           = (u16) (*(u16 *) p4 | 0xE804);
    arg0[0x6]             = 0;
    arg0[0x7]             = 0;
    arg0[0x8]             = 0xFF;
    arg0[0x9]             = 0xBF;
    func_020059fc(buf, 0, 0, 0x1000);
    *(u32 *) (arg0 + 0xC)  = buf[0];
    *(u32 *) (arg0 + 0x10) = buf[1];
    *(u32 *) (arg0 + 0x14) = buf[2];
    func_020059fc(&buf[3], 0, 0, 0);
    *(u32 *) (arg0 + 0x18) = buf[3];
    *(u32 *) (arg0 + 0x1C) = buf[4];
    *(u32 *) (arg0 + 0x20) = buf[5];
    *(u16 *) (arg0 + 0x24) = 0;
    *(u32 *) (arg0 + 0x34) = 0x1000;
    *(u32 *) (arg0 + 0x38) = 0x190000;
    *(u32 *) (arg0 + 0x6C) = 0;
}
