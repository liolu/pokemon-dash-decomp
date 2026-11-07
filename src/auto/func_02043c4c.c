/* compiler: 1.2/b56 */
#include "m2c.h"

M2C_UNK func_0200ca24(void *);
u32 func_0201f640(s32);
M2C_UNK func_020261e4(void **, void *, u32);
M2C_UNK func_02032404(void *, void **);
M2C_UNK func_020444a0(void *);
extern u8 *data_020d5164;

void func_02043c4c(u8 *arg0) {
    void *sp0;
    s32 t;
    s32 e;
    s32 q;
    u8 *p;

    *(s32 *) (arg0 + 0xDC) = *(s32 *) (arg0 + 0xDC) + 1;
    t                      = func_0201f640(*(s32 *) (data_020d5164 + 0x180));
    *(s32 *) (arg0 + 0x88) = t / 10;
    e                      = *(s32 *) (data_020d5164 + 0x164);
    if (e - *(s32 *) (arg0 + 0xDC) == 0) {
        *(s32 *) (arg0 + 0x128) = 0xF;
        t                       = func_0201f640(*(s32 *) (data_020d5164 + 0x180));
        q                       = t / 10;
        if (q >= 0xEA60) {
            q = 0xEA60;
        }
        *(s32 *) (arg0 + 0x84) = q;
        func_0200ca24(arg0);
        return;
    }
    p = *(u8 **) (*(u8 **) (arg0 + 0x70) + 4);
    if (p != NULL) {
        p = p - 8;
    }
    func_020261e4(&sp0, data_020d5164, (u32) (*(s32 *) (p + 0x70) + 1) % (u32) e);
    func_02032404(arg0, &sp0);
    if (sp0 != NULL) {
        *(s32 *) ((u8 *) sp0 + 4) = *(s32 *) ((u8 *) sp0 + 4) - 1;
        if ((*(s32 *) ((u8 *) sp0 + 4) == 0) && (sp0 != NULL)) {
            (*(void (**)(void *))(*(u8 **) sp0 + 4))(sp0);
        }
    }
    sp0 = NULL;
    if (*(s32 *) (arg0 + 0x78) != 1) {
        *(s32 *) (arg0 + 0x78) = 1;
        *(s8 *) (arg0 + 0x80)  = 1;
    }
    *(s32 *) (arg0 + 0x7C) = 0x3C;
    func_020444a0(arg0);
}
