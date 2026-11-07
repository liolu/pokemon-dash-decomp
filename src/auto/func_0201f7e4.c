/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02088ffc(void *, s32, s32);

void func_0201f7e4(void *arg0, s32 arg1) {
    s32 v;
    s32 base;
    s32 sec;
    s32 min;
    s32 min100;
    s32 sec60;
    s32 ms;
    void *o;

    o = *(void **) ((u8 *) arg0 + 0xC);
    v = (*(s32(**)(void *))(*(u8 **) o + 8))(o);
    if (arg1 > 0x5B8D7F) {
        base = (0x07FFF000 & (v << 12)) | 0x2800000C;
        func_02088ffc(*(void **) ((u8 *) arg0 + 0xC), base, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x10), base, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x18), base, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x1C), base, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x24), base, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x28), base, 0);
    } else {
        sec    = arg1 / 1000;
        min    = sec / 60;
        min100 = min % 100;
        sec60  = sec % 60;
        ms     = arg1 % 1000;
        base   = (0x07FFF000 & (v << 12)) | 0x28000000;
        func_02088ffc(*(void **) ((u8 *) arg0 + 0xC), base + min100 / 10, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x10), base + min100 % 10, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x18), base + sec60 / 10, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x1C), base + sec60 % 10, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x24), base + ms / 100, 0);
        func_02088ffc(*(void **) ((u8 *) arg0 + 0x28), base + (ms / 10) % 10, 0);
    }
    *(s32 *) ((u8 *) arg0 + 0x30) = arg1;
}
