/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02081fec(s32);
void func_02082504(u8 *);

u8 *func_020825e4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 a5, s32 a6, s32 *a7) {
    s32 i;

    *(s32 *) (arg0 + 0x0)  = arg2;
    *(s32 *) (arg0 + 0x4)  = 0;
    *(s32 *) (arg0 + 0x8)  = arg3;
    *(s32 *) (arg0 + 0xC)  = a5;
    *(s32 *) (arg0 + 0x10) = 0;
    *(s32 *) (arg0 + 0x14) = a6;
    *(s32 *) (arg0 + 0x18) = 0;
    arg0[0x1C]             = 0;
    arg0[0x1D]             = (arg1 != 0) ? 1 : 0;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x24) = 0;
    if (*(s32 *) (arg0 + 0x14) > 0) {
        *(void **) (arg0 + 0x18) = func_02081fec(*(s32 *) (arg0 + 0x14) * 4);
        for (i = 0; i < *(s32 *) (arg0 + 0x14); i++) {
            ((s32 *) *(void **) (arg0 + 0x18))[i] = a7[i];
        }
    }
    func_02082504(arg0);
    return arg0;
}
