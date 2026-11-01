/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207f174(void *, void *, s32, s32, s32);
void func_0207f28c(s32, void *, s32, s32);
void func_0207f500(s32, s32, s32, s32);
void *func_02082044(s32);
extern u8 data_020cd750[];
extern u8 data_020cd764[];

void func_02023124(u8 *arg0, s32 arg1) {
    void *t;
    s32 v;
    void *h;

    *(s32 *) (arg0 + 0x3C) = arg1;
    h                      = *(void **) (arg0 + 8);
    v                      = *(s32 *) (arg0 + 0x3C) << 6;
    if (*(void **) ((u8 *) h + 0x2C) != NULL) {
        func_0207f174(*(void **) ((u8 *) h + 0x2C), data_020cd750, 0x24, v, 0x5000);
    }
    t = func_02082044(0xC);
    if (t != NULL) {
        func_0207f500((s32) t, *(s32 *) arg0, *(s32 *) (*(u8 **) (arg0 + 8) + 0xC), -1);
    }
    *(void **) (arg0 + 0xC) = t;
    func_0207f28c(*(s32 *) (arg0 + 0xC), data_020cd764, 0x20, 0x200);
}
