/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02081fec(void *);
extern void func_020802b0(void *, void *, s32, void *);
extern void func_0206c914(void);
extern void func_0206c878(void);
extern void func_0206c8dc(s32, s32, void *);
extern void func_0206c770(void);
extern void func_0206c758(s32, s32, void *);
extern void func_0206c70c(void);
extern void func_02081edc(s32);

void func_0207f28c(u8 *arg0, void *arg1, void *arg2, void *arg3) {
    s32 r4;
    r4 = func_02081fec(arg3);
    switch (*(s32 *) arg0) {
        case 0:
            func_020802b0(arg1, arg2, r4, arg3);
            func_0206c914();
            func_0206c8dc(r4, (*(s32 *) (arg0 + 4) << 0xD) + (*(s32 *) (arg0 + 8) << 9), arg3);
            func_0206c878();
            break;
        case 1:
            func_020802b0(arg1, arg2, r4, arg3);
            func_0206c770();
            func_0206c758(r4, (*(s32 *) (arg0 + 4) << 0xD) + (*(s32 *) (arg0 + 8) << 9), arg3);
            func_0206c70c();
            break;
    }
    func_02081edc(r4);
}
