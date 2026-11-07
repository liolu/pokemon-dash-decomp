/* compiler: 1.2/b56 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(s32);
void func_0209cb6c(u8 *, u8 *);
void func_0209c2b0(u8 *);
extern u8 data_020d8454[];

void func_0209ccc8(u8 *arg0) {
    u8 *cur;
    s32 irq;
    u8 *t;
    irq = _ZN3IRQ7DisableEv();
    cur = *(u8 **) (data_020d8454 + 8);
    while (1) {
        t = *(u8 **) (arg0 + 4);
        if (t == 0) {
            *(u8 **) (arg0 + 4) = cur;
            *(s32 *) (arg0 + 8) = *(s32 *) (arg0 + 8) + 1;
            func_0209cb6c(cur, arg0);
            break;
        }
        if (t == cur) {
            *(s32 *) (arg0 + 8) = *(s32 *) (arg0 + 8) + 1;
            break;
        }
        *(u8 **) (cur + 0x78) = arg0;
        func_0209c2b0(arg0);
        *(u8 **) (cur + 0x78) = 0;
    }
    _ZN3IRQ7RestoreEj(irq);
}
