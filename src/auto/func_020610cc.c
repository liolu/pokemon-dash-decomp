/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 *data_020d5e40;

void func_0207d830(void *, s32, s32);

void func_020610cc(u8 *arg0) {
    u8 *p;
    u8 *obj;
    s32 x;
    s32 v;

    p = data_020d5e40;
    if (*(s32 *) (p + 0xC) != -1) {
        switch (*(s32 *) (arg0 + 0x10)) {
            case 0:
                x   = *(s32 *) (arg0 + 0x14) * 3;
                obj = *(u8 **) (arg0 + 0x8);
                func_0207d830(*(void **) (obj + 0x140), 0, 0x18 - x / 2);
                break;
            case 4:
                x   = *(s32 *) (arg0 + 0x14) * 3;
                obj = *(u8 **) (arg0 + 0x8);
                func_0207d830(*(void **) (obj + 0x140), 0, x / 2);
                break;
        }
    }
    obj = *(u8 **) (arg0 + 0x8);
    v   = (*(s32 *) (obj + 0xF8) / 2) & 0x1F;
    func_0207d830(*(void **) (obj + 0x13C), v, v);
    *(s32 *) (arg0 + 0x14) += 1;
}
