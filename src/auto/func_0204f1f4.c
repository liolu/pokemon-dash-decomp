/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02082044(u32 size);
void func_02061f54(void *p, u8 *obj);
void func_02083114(void *a, void *b, s32 c, s32 d, s32 e);
void func_020832c4(s32 a, void *b, s32 c, s32 d);
s32 func_0204f2b4(void);

extern u8 data_020cf9d4[];
extern u8 data_020cf9e4[];

void func_0204f1f4(u8 *obj) {
    void *p;
    s32 r;

    p = func_02082044(0x28);
    if (p != NULL) {
        func_02061f54(p, obj);
    }
    *(void **) (obj + 0x700) = p;
    func_02083114(*(void **) (obj + 0x16c), data_020cf9d4, 0x24, 0, 0x3000);
    func_02083114(*(void **) (obj + 0x16c), data_020cf9d4, 0xe024, 0x3000, 0x3000);
    func_020832c4(*(s32 *) (obj + 0x200), data_020cf9e4, 0x20, 0x200);
    r = func_0204f2b4();
    if (r == 5) {
        return;
    }
    func_02083114(*(void **) (obj + 0x16c), data_020cf9d4, ((r + 0x17) << 12) + 0x24, 0x3000, 0x1000);
}
