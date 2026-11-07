/* compiler: 1.2/b56 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(s32 irq);
void func_0209c2b0(u8 *lock);
s32 func_020a0318(u8 *obj);

s32 func_020a07a0(u8 *arg0) {
    s32 busy;
    s32 irq;
    s32 flag;
    s32 c;

    busy = 0;
    irq  = _ZN3IRQ7DisableEv();
    if (*(u32 *) (arg0 + 0xC) & 1) {
        c = 1;
    } else {
        c = busy;
    }
    if (c != 0) {
        if (*(u8 **) (*(u8 **) (arg0 + 0x8) + 0x18) != arg0) {
            busy = 1;
        } else {
            busy = 0;
        }
        if (busy != 0) {
            *(u32 *) (arg0 + 0xC) |= 4;
        }
        do {
            func_0209c2b0(arg0 + 0x18);
            if (*(u32 *) (arg0 + 0xC) & 1) {
                flag = 1;
            } else {
                flag = 0;
            }
        } while (flag != 0);
    }
    _ZN3IRQ7RestoreEj(irq);
    if (busy != 0) {
        return func_020a0318(arg0);
    }
    if (*(u32 *) (arg0 + 0x14) == 0) {
        return 1;
    }
    return 0;
}
