/* compiler: 1.2/b56 */
#include "m2c.h"

extern s32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(s32);
extern void func_020a0ca0(void *);
extern void func_0209c23c(void *);

void func_0209fe28(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = _ZN3IRQ7DisableEv();
    func_020a0ca0(arg0);
    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) & ~0xF;
    *(s32 *) (arg0 + 0x14) = arg1;
    func_0209c23c(arg0 + 0x18);
    _ZN3IRQ7RestoreEj(temp_r4);
}
