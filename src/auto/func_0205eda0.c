/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02005a74();
s32 func_02005a84();
M2C_UNK func_02007754();
M2C_UNK func_020500bc(void *);
M2C_UNK func_0205ffac(void *);
M2C_UNK func_0207bba4(s32, M2C_UNK, s32, s32);
M2C_UNK func_0207bde8(s32, M2C_UNK);
M2C_UNK func_0207dad8(s32, s32);
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02082044(M2C_UNK);
M2C_UNK func_02082874(s32, M2C_UNK);
M2C_UNK func_02083114(s32, M2C_UNK *, s32, s32, s32);
M2C_UNK func_020831f0(s32, M2C_UNK, M2C_UNK);
M2C_UNK func_02083544(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK func_020835cc(s32, M2C_UNK);
extern M2C_UNK data_020d0404;
extern M2C_UNK data_020d041c;

void func_0205eda0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r5;
    s32 temp_r6;

    temp_r0 = func_02082044(0x14);
    if (temp_r0 != 0) {
        func_0207e900(temp_r0, 0, 0xC000, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = temp_r0;
    func_0207dad8(M2C_FIELD(arg0, s32 *, 0x13C), M2C_FIELD(arg0, s32 *, 0x14C));
    func_020500bc(arg0);
    temp_r0_2 = func_02082044(0x10);
    if (temp_r0_2 != 0) {
        func_020831f0(temp_r0_2, 0, 0x800);
    }
    M2C_FIELD(arg0, s32 *, 0x168) = temp_r0_2;
    func_02083114(M2C_FIELD(arg0, s32 *, 0x168), &data_020d0404, 0x424, 0, 0x400);
    func_02083114(M2C_FIELD(arg0, s32 *, 0x168), &data_020d0404, 0xC24, 0x400, 0x400);
    temp_r0_3 = func_02082044(4);
    if (temp_r0_3 != 0) {
        func_020835cc(temp_r0_3, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x210) = temp_r0_3;
    func_02083544(M2C_FIELD(arg0, s32 *, 0x210), &data_020d041c, 0x20, 0x200);
    temp_r0_4 = func_02082044(0x30);
    if (temp_r0_4 != 0) {
        func_02082874(temp_r0_4, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x18C) = temp_r0_4;
    func_0207bde8(M2C_FIELD(arg0, s32 *, 0x108) + 0x138, 0);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x108);
    temp_r5 = func_02005a84();
    func_0207bba4(temp_r6 + 0x138, 0xD, temp_r5, func_02005a74());
    temp_r0_5 = M2C_FIELD(arg0, s32 *, 0xE8);
    if ((temp_r0_5 != 0x17) && (temp_r0_5 != 0x18) && (temp_r0_5 != 0x20)) {
        return;
    }
    func_02007754();
    func_0205ffac(arg0);
}
