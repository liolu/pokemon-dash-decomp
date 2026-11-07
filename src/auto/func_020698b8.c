/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0208c268(void *, s32);
void func_02086c0c(void *, s32);
void func_020699c4(void *, s32);
void func_020699cc(void *, s32);
void func_0207c620(void);

s32 func_020698b8(void *arg0) {
    u8 *p;
    u32 *f;

    func_0208c268(*(void **) ((u8 *) arg0 + 0xC8), 0);
    p  = *(u8 **) ((u8 *) arg0 + 0xC8);
    f  = (u32 *) (p + 0x14);
    *f = *f | 0x80;
    func_02086c0c(*(void **) ((u8 *) arg0 + 0xC8), 0x38000003);
    p  = *(u8 **) ((u8 *) arg0 + 0xC8);
    f  = (u32 *) (p + 0x18);
    *f = *f | 0x20;
    func_020699c4(*(void **) ((u8 *) arg0 + 0xC8), 0);
    func_020699cc(*(void **) ((u8 *) arg0 + 0xC8), 0);
    p                               = *(u8 **) ((u8 *) arg0 + 0xCC);
    f                               = (u32 *) (p + 0x14);
    *f                              = *f | 0x80;
    *(void **) ((u8 *) arg0 + 0xD8) = NULL;
    func_0207c620();
    return 1;
}
