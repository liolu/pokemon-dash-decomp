/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_020d4534;
extern s32 data_020d3de8;
extern u8 data_020d032c[];
void func_0207f0a0(void *, u32, u32, u32);
void func_0207f174(void *, u8 *, s32, s32, s32);
void func_0207eda8(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_0205ce68(u8 *obj, s32 arg) {
    u8 *p;
    u8 *q;
    s32 t;

    p = *(u8 **) (obj + 0x124);
    t = data_020d4534;
    if (*(void **) (p + 0x24) != NULL) {
        func_0207f0a0(*(void **) (p + 0x24), t, 0, 0);
    }
    if (data_020d3de8 == 0 && arg != 0) {
        goto f2c;
    }
    p = *(u8 **) (obj + 0x124);
    if (*(void **) (p + 0x2C) != NULL) {
        func_0207f174(*(void **) (p + 0x2C), data_020d032c, (arg << 13) + 0x24, 0x40, 0x2000);
    }
    p = *(u8 **) (obj + 0x124);
    q = *(u8 **) (obj + 0x134);
    t = *(s32 *) (q + 8);
    if (*(void **) (p + 0x24) != NULL) {
        func_0207eda8(*(void **) (p + 0x24), 0x20, 4, t, 0, 0xE, 1, 0, 0, 0);
    }
    goto done;
f2c:
    p = *(u8 **) (obj + 0x124);
    if (*(void **) (p + 0x2C) != NULL) {
        func_0207f174(*(void **) (p + 0x2C), data_020d032c, 0x2024, 0x40, 0x4000);
    }
    p = *(u8 **) (obj + 0x124);
    q = *(u8 **) (obj + 0x134);
    t = *(s32 *) (q + 8);
    if (*(void **) (p + 0x24) != NULL) {
        func_0207eda8(*(void **) (p + 0x24), 0x10, 4, t, 8, 0xE, ((((arg - 1) & 1) << 4) + 1) + (((arg - 1) >> 1) << 7), 0x20,
                      0, 0);
    }
done:
    *(s32 *) (obj + 0x250) = arg << 12;
}
