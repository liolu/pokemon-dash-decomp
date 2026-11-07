/* compiler: 1.2/b56 */
#include "m2c.h"

s32 func_02005338(void *, s32, s32);                /* extern */
void func_02088ffc(void *, s32, s32);               /* extern */
void func_020639e4(void *, s32);                    /* extern */
extern M2C_UNK data_020d5164;

void func_0202e5c0(void *arg0, s32 arg1, s32 arg2) {
    u8 *obj;
    s32 *p;

    func_02005338(arg0, *(s32 *) &data_020d5164, arg1);
    func_02088ffc(*(void **) arg0, ((arg1 << 12) & 0x7FFF000) | 0x28000000, 0);
    func_020639e4(*(void **) (*(u8 **) (*(u8 **) arg0 + 0x64) + 0x10), arg2);
    obj = *(u8 **) arg0;
    p   = (s32 *) (obj + 0x14);
    *p  = *p & ~0x80;
}
