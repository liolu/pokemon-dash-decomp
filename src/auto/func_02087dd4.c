/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020880dc(void *, void *, s32 *, void **);
extern void func_0207bed8(void *);
extern void func_0208d74c(void *);
extern u8 data_020d415c;

void *func_02087dd4(void *arg0) {
    u8 *p = (u8 *) arg0;
    void *sp0;
    s32 sp4;
    void *sp8;

    *(void **) p = &data_020d415c;
    sp8          = p + 0x16C;
    sp4          = *(s32 *) (p + 0x170);
    func_020880dc(&sp0, p + 0x168, &sp4, &sp8);
    func_0207bed8(p + 0x138);
    func_0208d74c(arg0);
    return arg0;
}
