/* compiler: 1.2/b56 */
#include "m2c.h"

extern u8 data_020cd20c[];
extern u8 data_020cd22c[];
extern u8 func_02003a44[];
void func_02045cf4(s32);
void func_02081f64(void);
void func_020b523c(u8 *, s32, s32, void *);
void func_02026514(u8 *);

u8 *func_0200dcbc(u8 *obj) {
    u8 *p;

    *(u8 **) obj          = data_020cd20c;
    *(u8 **) (obj + 0x24) = data_020cd22c;
    func_02045cf4((s32) (*(s32 *) (obj + 0x320) + 0x800) >> 12);
    p = *(u8 **) (obj + 0x31C);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (obj + 0x31C);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(u8 **) (obj + 0x31C) = NULL;
    p                      = *(u8 **) (obj + 0x260);
    if (p != NULL) {
        *(s32 *) p = *(s32 *) p - 1;
        if (*(s32 *) p == 0 && *(u8 **) (obj + 0x260) != NULL) {
            func_02081f64();
        }
    }
    *(u8 **) (obj + 0x260) = NULL;
    p                      = *(u8 **) (obj + 0x25C);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (obj + 0x25C);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(u8 **) (obj + 0x25C) = NULL;
    p                      = *(u8 **) (obj + 0x258);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0) {
            p = *(u8 **) (obj + 0x258);
            if (p != NULL) {
                (*(void (**)(void *))(*(u8 **) p + 4))(p);
            }
        }
    }
    *(u8 **) (obj + 0x258) = NULL;
    func_020b523c(obj + 0x248, 3, 4, func_02003a44);
    func_02026514(obj);
    return obj;
}
