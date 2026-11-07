/* compiler: 1.2/b56 */
#include "m2c.h"

u32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(u32);
void func_0209c2b0(void *);
void func_0209c23c(void *);

s32 func_0209c9a4(u8 *obj, s32 *out, u32 flags) {
    u32 irq;
    u32 r8;

    irq = _ZN3IRQ7DisableEv();
    if (*(s32 *) (obj + 0x10) == 0) {
        r8 = flags & 1;
        do {
            if (r8 == 0) {
                _ZN3IRQ7RestoreEj(irq);
                return 0;
            }
            func_0209c2b0(obj + 2);
        } while (*(s32 *) (obj + 0x10) == 0);
    }
    if (out != NULL) {
        *out = ((s32 *) *(s32 **) (obj + 4))[*(s32 *) (obj + 0xC)];
    }
    *(s32 *) (obj + 0xC)  = (*(s32 *) (obj + 0xC) + 1) % *(s32 *) (obj + 8);
    *(s32 *) (obj + 0x10) = *(s32 *) (obj + 0x10) - 1;
    func_0209c23c(obj);
    _ZN3IRQ7RestoreEj(irq);
    return 1;
}
