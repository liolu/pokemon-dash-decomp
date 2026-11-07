/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d5fa4[];
extern u8 data_020d5fd4[];
extern u8 data_020d5fd0[];
extern u8 data_020d5fcc[];
extern u8 data_020d5fac[];
extern u8 data_020d5fc4[];
extern u8 data_020d5fdc[];

s32 func_0209c99c(u8 *s);
void func_0209637c(void *a, s32 b, u8 *c);

void func_02062e40(u8 *s) {
    s32 i;

    if (func_0209c99c(s) != 0) {
        return;
    }
    func_0209637c(data_020d5fd4, *(u8 *) data_020d5fa4 == 0 ? 0x7f : 0, s);
    func_0209637c(data_020d5fd0, *(u8 *) data_020d5fa4 == 0 ? 0 : 0x7f, s);
    func_0209637c(data_020d5fcc, 0x7f, s);
    func_0209637c(data_020d5fc4, *(s32 *) data_020d5fac, s);
    for (i = 0; i < 5; i++) {
        func_0209637c(data_020d5fdc + i * 4, 0x7f, s);
    }
}
