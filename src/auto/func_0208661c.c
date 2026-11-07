/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0200d5c4(u16 *, s32, s32, s32);
void func_02074b2c(void *);
void func_02080e0c(void *, void *);

s32 func_0208661c(u8 *arg0, u16 *arg1) {
    u16 sp[3];
    u16 *p = (u16 *) (arg0 + 0x64);
    u8 *g;
    *p = *p & 0xFFFE;
    if (*(u16 *) (arg0 + 0x64) & 0x8000) {
        func_02074b2c(arg0 + 0x60);
    }
    g = arg0 + 0xD0;
    if (!(*(u16 *) (arg0 + 0x64) & 1)) {
        func_02080e0c(arg1, g);
    } else {
        func_0200d5c4(sp, 0, 0, 0);
        arg1[0] = sp[0];
        arg1[1] = sp[1];
        arg1[2] = sp[2];
    }
    return 1;
}
