/* compiler: 1.2/b56 */
#include "m2c.h"

void func_020955ec(void *, s32);
void func_02095540(s32, void *);
s32 func_020956b4(void *);
extern s32 data_020d7568;
extern u8 data_020d756c;

void func_02095620(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4) {
    u32 *p;
    *(s32 *) arg0          = arg1;
    *(s32 *) (arg0 + 0x18) = arg2;
    *(s32 *) (arg0 + 0x1C) = arg3;
    *(s32 *) (arg0 + 0x20) = 0;
    p                      = (u32 *) (arg0 + 0x20);
    *p                     = *p & ~0xFF;
    *p                     = *p | (u8) arg4;
    func_020955ec(arg0 + 0xC, 4);
    if (data_020d7568 == 0) {
        func_020955ec(&data_020d756c, 4);
        data_020d7568 = 1;
    }
    func_02095540(func_020956b4(arg0), arg0);
}
