/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d75a0[];
extern u8 data_020d75ac[];
extern u8 data_020d75b8[];
extern u8 data_020d7938[];
extern void func_020955ec(void *, s32);
extern void func_02095540(void *, void *);

void func_02096214(void) {
    s32 i;
    u8 *p;
    u8 *q;
    func_020955ec(data_020d75ac, 0x14);
    func_020955ec(data_020d75a0, 0x14);
    p = data_020d7938;
    for (i = 0; i < 0x10; i++) {
        p[0x2c] = 0;
        p[0x3c] = (u8) i;
        func_02095540(data_020d75a0, p);
        p += 0x44;
    }
    q = data_020d75b8;
    for (i = 0; i < 0x20; i++) {
        func_020955ec(q, 0xc);
        func_020955ec(q + 0xc, 0);
        *(s32 *) (q + 0x18) = 1;
        q += 0x1c;
    }
}
