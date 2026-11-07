/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0201d08c(s32, M2C_UNK);
M2C_UNK func_0204e7b8();
M2C_UNK func_020500bc(void *);
M2C_UNK func_0205cfdc(void *);
M2C_UNK func_0207bc9c(s32, M2C_UNK);
M2C_UNK func_0207bde8(s32, M2C_UNK);
M2C_UNK func_0207dad8(s32, s32);
M2C_UNK func_0207e900(s32, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0207eda8(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_0207f0a0(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_0207f174(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32);
M2C_UNK func_0207f28c(void *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 func_02082044(M2C_UNK);
M2C_UNK func_02082ffc(M2C_UNK);
extern M2C_UNK data_020d0304;
extern M2C_UNK data_020d0318;
extern s32 data_020d4534;

void func_0205ca1c(u8 *arg0) {
    s32 t1;
    s32 t2;
    s32 t3;
    s32 t4;
    s32 g;
    s32 w;
    s32 *p134;
    s32 *p124;

    func_0204e7b8();
    func_0205cfdc(arg0);
    t1 = *(s32 *) (*(u8 **) (arg0 + 0x124) + 0x2C);
    if (t1 != 0) {
        func_0207f174(t1, &data_020d0304, 0x24, 0x40, 0x8000);
    }
    g    = data_020d4534;
    p124 = *(s32 **) (arg0 + 0x124);
    t2   = p124[0x24 / 4];
    if (t2 != 0) {
        func_0207f0a0(t2, g, 0, 0);
    }
    p134 = *(s32 **) (arg0 + 0x134);
    t3   = *(s32 *) (*(u8 **) (arg0 + 0x124) + 0x24);
    w    = p134[2];
    if (t3 != 0) {
        func_0207eda8(t3, 0x20, 0x10, w, 0, 4, 1, 0, 0, 0);
    }
    func_0207f28c(*(void **) (arg0 + 0x134), &data_020d0318, 0x20, 0x200);
    func_02082ffc(1);
    t4 = func_02082044(0x14);
    if (t4 != 0) {
        func_0207e900(t4, 0, 0xC000, 0);
    }
    *(s32 *) (arg0 + 0x14C) = t4;
    func_0207dad8(*(s32 *) (arg0 + 0x13C), *(s32 *) (arg0 + 0x14C));
    func_020500bc(arg0);
    t4 = func_02082044(0x90);
    if (t4 != 0) {
        func_0201d08c(t4, 0);
    }
    *(s32 *) (arg0 + 0x6F0) = t4;
    func_0207bde8(*(s32 *) (arg0 + 0x108) + 0x138, 0);
    func_0207bc9c(*(s32 *) (arg0 + 0x108) + 0x138, 0xA);
}
