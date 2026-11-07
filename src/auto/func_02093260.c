/* compiler: 1.2/b56 */
#include "m2c.h"

void *func_02082044(s32);                           /* extern */
s32 func_02084ff8();                                /* extern */
void func_02086708(void *);                         /* extern */
void func_02093e60(void *);                         /* extern */
extern M2C_UNK data_020d44c0;

void *func_02093260(u8 *arg0) {
    void *p;
    void *q;
    s32 *rc;

    *(void **) arg0 = (void *) &data_020d44c0;
    p               = func_02082044(0x108);
    if (p != NULL) {
        func_02086708(p);
    }
    *(void **) (arg0 + 4) = p;
    q                     = *(void **) (arg0 + 4);
    if (q != NULL) {
        rc  = (s32 *) ((u8 *) q + 4);
        *rc = *rc + 1;
    }
    *(s32 *) (arg0 + 8) = func_02084ff8();
    func_02093e60(arg0 + 0xC);
    func_02093e60(arg0 + 0x18);
    return arg0;
}
