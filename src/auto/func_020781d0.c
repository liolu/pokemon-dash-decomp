/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02078568(void *a, void *b, s32 c);
void func_02078634(void *a);
void func_020792cc(void *a, void *b, void *c);
void func_02081f64(s32 a);

void func_020781d0(void *arg0) {
    u8 *s = (u8 *) arg0;
    u32 sp0[6];
    u32 sp18[6];

    func_02078568(sp18, arg0, *(s32 *) (s + 0x14));
    func_02078568(sp0, arg0, 0);
    func_020792cc(arg0, sp0, sp18);
    *(s32 *) (s + 0x14) = 0;
    if (*(u32 *) (s + 0x4) > 1) {
        if (*(u32 *) (s + 0x4) > 2) {
            do {
                func_02081f64(((s32 *) *(u8 **) (s + 0xc))[*(s32 *) (s + 0x8)]);
                func_02078634(arg0);
            } while (*(u32 *) (s + 0x4) > 2);
        }
        *(s32 *) (s + 0x10) = 0x40;
        return;
    }
    *(s32 *) (s + 0x10) = 0;
}
