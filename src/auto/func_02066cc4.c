/* compiler: 1.2/b56 */
#include "m2c.h"

extern u32 data_020d0ab8;
void func_0207c9dc(void *p);

void *func_02066cc4(u8 *obj) {
    u8 *p;

    *(u32 *) obj = (u32) &data_020d0ab8;
    p            = *(u8 **) (obj + 0xcc);
    if (p != 0) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (obj + 0xcc);
            if (p != 0) {
                (*(void (**)(void *))(*(u32 *) p + 4))(p);
            }
        }
    }
    *(u32 *) (obj + 0xcc) = 0;
    p                     = *(u8 **) (obj + 0xc4);
    if (p != 0) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (obj + 0xc4);
            if (p != 0) {
                (*(void (**)(void *))(*(u32 *) p + 4))(p);
            }
        }
    }
    *(u32 *) (obj + 0xc4) = 0;
    func_0207c9dc(obj);
    return obj;
}
