/* compiler: 1.2/b56 */
#include "m2c.h"

u32 _ZN3IRQ7DisableEv(void);
void _ZN3IRQ7RestoreEj(u32 state);
void *func_020953dc(void *list, void *node);
void func_020953f4(void *list, void *node);
void func_02098090(void *node);
void func_020980c8(void *obj);
void func_020a084c(void *obj);
extern u8 data_020d7e7c;

void func_02098118(u8 *arg0) {
    s32 *p;
    u32 state;
    void *cur;
    void *next;
    u32 *reg;
    s32 flag;

    p = *(s32 **) (arg0 + 0x130);
    if (p != NULL) {
        *p                       = 0;
        *(s32 **) (arg0 + 0x130) = NULL;
    }
    func_020980c8(arg0);
    flag = (*(u32 *) (arg0 + 0x68) & 0x10) != 0;
    if (flag != 0) {
        func_020a084c(arg0 + 0x5C);
    }
    state = _ZN3IRQ7DisableEv();
    cur   = func_020953dc(&data_020d7e7c, NULL);
    if (cur != NULL) {
        do {
            next = func_020953dc(&data_020d7e7c, cur);
            if (*(u8 **) ((u8 *) cur + 8) == arg0) {
                func_020953f4(&data_020d7e7c, cur);
                func_02098090(cur);
            }
            cur = next;
        } while (next != NULL);
    }
    _ZN3IRQ7RestoreEj(state);
    reg  = (u32 *) (arg0 + 0x10C);
    *reg = *reg & ~1;
    *reg = *reg & ~4;
    *reg = *reg & ~2;
}
