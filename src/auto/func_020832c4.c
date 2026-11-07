/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_02081fec(u32 x);
void func_020802b0(void *a, s32 b, s32 c, s32 d);
void func_0206c808(void);
void func_0206c7ec(void *a, s32 b, s32 c);
void func_0206c794(void);
void func_0206c6e8(void);
void func_0206c6d0(void *a, s32 b, s32 c);
void func_0206c684(void);
void func_02081edc(void *a);

void func_020832c4(u8 *obj, void *arg1, s32 arg2, s32 arg3) {
    s32 r4;
    s32 kind;

    r4   = func_02081fec(arg3);
    kind = *(s32 *) obj;
    switch (kind) {
        case 0:
            func_020802b0(arg1, arg2, r4, arg3);
            func_0206c808();
            func_0206c7ec((void *) r4, *(s32 *) (obj + 4) << 9, arg3);
            func_0206c794();
            break;
        case 1:
            func_020802b0(arg1, arg2, r4, arg3);
            func_0206c6e8();
            func_0206c6d0((void *) r4, *(s32 *) (obj + 4) << 9, arg3);
            func_0206c684();
            break;
    }
    func_02081edc((void *) r4);
}
