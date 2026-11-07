/* compiler: 1.2/b56 */
#include "m2c.h"

void func_0202139c(void *a, s32 b);
s32 func_02005338(void **a, s32 b, s32 c);
void func_02089358(void *a, s32 b);

extern u8 data_020cd704;
extern s32 data_020d5164;

void *func_02020e18(void *arg0) {
    void *sp0;
    void *t;

    func_0202139c(arg0, 0x1C8);
    *(void **) arg0 = (void *) &data_020cd704;
    func_02005338(&sp0, data_020d5164, 0x1C9);
    *(void **) ((u8 *) arg0 + 0x7C) = sp0;
    t                               = *(void **) ((u8 *) arg0 + 0x7C);
    if (t != NULL) {
        ((s32 *) t)[1] = ((s32 *) t)[1] + 1;
    }
    if (sp0 != NULL) {
        ((s32 *) sp0)[1] = ((s32 *) sp0)[1] - 1;
        if ((((s32 *) sp0)[1] == 0) && (sp0 != NULL)) {
            (*(void (**)(void *))(*(u8 **) sp0 + 4))(sp0);
        }
    }
    sp0 = NULL;
    func_02089358(*(void **) ((u8 *) arg0 + 0x7C), 0x281C9000);
    func_02089358(*(void **) ((u8 *) arg0 + 0x7C), 0x28000000);
    t                        = *(void **) ((u8 *) arg0 + 0x7C);
    ((u32 *) t)[5]           = ((u32 *) t)[5] & ~0x80;
    ((s32 *) arg0)[0x74 / 4] = 0x3C;
    return arg0;
}
