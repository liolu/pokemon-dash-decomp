/* compiler: 1.2/b56 */
#include "m2c.h"

typedef struct G {
    u8 pad[0x9c];
    u8 f;
} G;
extern u8 data_020d655c;
extern G *data_020d6560;
extern int _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(int);
extern void func_0209c2b0(int);
extern void func_0207c74c(void *);

void func_0207c7f4(int a) {
    int r4;
    u8 f;
    u8 *p;
    if ((data_020d655c | a) != 0) {
        f = 1;
    } else {
        f = 0;
    }
    data_020d655c = f;
    r4            = _ZN3IRQ7DisableEv();
    p             = &data_020d6560->f;
    *p            = *p | 0x10;
    func_0209c2b0(0);
    p  = &data_020d6560->f;
    *p = *p & ~0x10;
    _ZN3IRQ7RestoreEj(r4);
    func_0207c74c(data_020d6560);
}
