/* compiler: 1.2/b56 */
#include "m2c.h"

extern s32 data_020d511c;
extern u8 data_023c0000;
extern void func_02007398(void);

void func_0202231c(void) {
    u32 *p;
    u32 off;

    data_020d511c = data_020d511c + 1;
    func_02007398();
    off = 0x3FF8;
    p   = (u32 *) &data_023c0000;
    p   = (u32 *) ((u8 *) p + off);
    *p  = *p | 1;
}
