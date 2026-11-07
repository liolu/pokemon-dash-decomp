/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d6578;
extern u8 data_020d6570;
extern u8 data_020d6568;
extern s32 data_020d6580;
extern s32 data_020d657c;
extern u8 data_020d6584[];
extern u8 data_020d3cc4[];

char *func_020ad918(char *a, const char *b, unsigned int n);
s32 func_0207d3c8(void);
void func_0209dcdc(u32 a, s32 b, s32 c);

s32 func_0207d320(void) {
    volatile u32 t;
    s32 flag;

    flag          = data_020d6578;
    data_020d6570 = 0;
    data_020d6568 = 0;
    if (flag == 0) {
        t = 0xefbeadde;
        func_0209dcdc(t, data_020d6580, data_020d657c);
    } else {
        func_020ad918((char *) data_020d6584, (const char *) data_020d3cc4, 4);
        if (func_0207d3c8() != 0) {
            return 1;
        }
    }
    return 0;
}
