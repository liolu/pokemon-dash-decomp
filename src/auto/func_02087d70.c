/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207bed8(void *);
M2C_UNK func_02081f64(void *);
M2C_UNK func_020880dc(M2C_UNK *, void *, s32 *, void **);
M2C_UNK func_0208d74c(void *);
extern M2C_UNK data_020d415c;

void *func_02087d70(void *arg0) {
    M2C_UNK sp0;
    s32 sp4;
    void *sp8;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d415c;
    sp8                            = (u8 *) arg0 + 0x16C;
    sp4                            = M2C_FIELD(arg0, s32 *, 0x170);
    func_020880dc(&sp0, (u8 *) arg0 + 0x168, &sp4, &sp8);
    func_0207bed8((u8 *) arg0 + 0x138);
    func_0208d74c(arg0);
    func_02081f64(arg0);
    return arg0;
}
