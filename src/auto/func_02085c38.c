/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_020d73d0;
extern void *data_020d73d4;
extern void *data_020d73d8;

void func_0209eef8(void);
void func_020a2560(void);
s32 func_020a24d4(void *);
void func_020a23d0(void *);
void *func_02082044(s32);

void func_02085c38(void) {
    u32 buf[3];
    u8 *p;

    func_0209eef8();
    func_020a2560();
    if (func_020a24d4(buf) != 0) {
        func_020a23d0(buf);
    }
    p = func_02082044(0x18);
    if (p != NULL) {
        p[0]                = 0;
        p[1]                = 0;
        p[2]                = 0;
        p[3]                = 0;
        p[4]                = 0;
        p[5]                = 0;
        *(u32 *) (p + 8)    = 0;
        *(u32 *) (p + 0xC)  = 0;
        *(u32 *) (p + 0x10) = 0;
        *(u32 *) (p + 0x14) = 0;
    }
    data_020d73d0 = p;
    p             = func_02082044(0x1C);
    if (p != NULL) {
        p[0]                = 0;
        p[1]                = 0;
        p[2]                = 0;
        p[3]                = 0;
        p[4]                = 0;
        p[5]                = 0;
        *(u32 *) (p + 8)    = 0;
        *(u32 *) (p + 0xC)  = 0;
        *(u32 *) (p + 0x10) = 0;
        *(u32 *) (p + 0x14) = 0;
        *(u32 *) (p + 0x18) = 0;
    }
    data_020d73d4 = p;
    p             = func_02082044(0x18);
    if (p != NULL) {
        p[0]                = 0;
        p[1]                = 0;
        p[2]                = 0;
        p[3]                = 0;
        p[4]                = 0;
        p[5]                = 0;
        *(u32 *) (p + 8)    = 0;
        *(u32 *) (p + 0xC)  = 0;
        *(u32 *) (p + 0x10) = 0;
        *(u32 *) (p + 0x14) = 0;
    }
    data_020d73d8 = p;
}
