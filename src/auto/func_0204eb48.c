/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    u8 p[0x16c];
    s32 f16c;
    u8 p170[0x90];
    s32 f200;
    u8 p204[0x4fc];
    void *f700;
} S;
extern void func_0204feb4(void *);
extern void func_02061f54(void *, void *);
extern void *func_02082044(s32);
extern void func_02083114(s32, void *, s32, s32, s32);
extern void func_020832c4(s32, void *, s32, s32);
extern void func_02085984(s32, s32);
extern u8 data_020cf9ac;
extern u8 data_020cf9c0;
void func_0204eb48(S *s) {
    void *p;
    func_02085984(1, 1);
    p = func_02082044(0x28);
    if (p != 0) {
        func_02061f54(p, s);
    }
    s->f700 = p;
    func_02083114(s->f16c, &data_020cf9ac, 0x24, 0, 0x5000);
    func_02083114(s->f16c, &data_020cf9ac, 0x5024, 0x5000, 0x5000);
    func_020832c4(s->f200, &data_020cf9c0, 0x20, 0x200);
    func_0204feb4(s);
}
