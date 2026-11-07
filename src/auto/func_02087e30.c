/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0208dec0(void *);
void func_0207bf04(void *);
s32 func_02088050(void *);
void func_02088270(void *);
extern u8 data_020d415c[];

void *func_02087e30(void *arg0) {
    func_0208dec0(arg0);
    func_0207bf04((u8 *) arg0 + 0x138);
    *(void **) arg0                = data_020d415c;
    *(s32 *) ((u8 *) arg0 + 0x13C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x150) = 0;
    *(s32 *) ((u8 *) arg0 + 0x154) = 0;
    *(s32 *) ((u8 *) arg0 + 0x158) = 0;
    func_02088050((u8 *) arg0 + 0x15C);
    func_02088270((u8 *) arg0 + 0x168);
    *(s32 *) ((u8 *) arg0 + 0x1A8) = 1;
    *(s32 *) ((u8 *) arg0 + 0x1AC) = 0x38000000;
    *(s32 *) ((u8 *) arg0 + 0x1B0) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1B4) = 0;
    *(s32 *) ((u8 *) arg0 + 0x1B8) = -1;
    *((u8 *) arg0 + 0x1BC)         = 0;
    *(u32 *) ((u8 *) arg0 + 0x14)  = *(u32 *) ((u8 *) arg0 + 0x14) | 0x100000;
    return arg0;
}
