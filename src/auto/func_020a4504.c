/* compiler: 1.2/b56 */
#include "m2c.h"

s32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(s32);
void func_0209c23c(void *);
void func_0209c208(void *);

void func_020a4504(u8 *arg0) {
    void (*r6)(s32);
    s32 r5;
    s32 r4;

    r6                     = *(void (**)(s32))(arg0 + 0x28);
    r5                     = *(s32 *) (arg0 + 0x2C);
    r4                     = _ZN3IRQ7DisableEv();
    *(u32 *) (arg0 + 0x34) = *(u32 *) (arg0 + 0x34) & ~0xCu;
    func_0209c23c(arg0 + 0xD4);
    if (*(u32 *) (arg0 + 0x34) & 0x10) {
        func_0209c208(arg0 + 0x3C);
    }
    _ZN3IRQ7RestoreEj(r4);
    if (r6 == NULL) {
        return;
    }
    r6(r5);
}
