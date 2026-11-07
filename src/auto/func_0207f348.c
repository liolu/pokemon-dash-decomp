/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02081fec(s32 n);
void func_02081edc(s32 h);
s32 func_0206d9f0(s32 a, s32 b, s32 c);
void func_0206d9e4(s32 a, s32 b, s32 c);
void func_0206c914(void);
void func_0206c878(void);
void func_0206c8dc(s32 a, s32 b, s32 c);
void func_0206c770(void);
void func_0206c70c(void);
void func_0206c758(s32 a, s32 b, s32 c);

void func_0207f348(u8 *s, s32 a1, s32 a2, s32 a3) {
    s32 h;
    s32 x;

    h = func_02081fec(a3);
    switch (*(s32 *) s) {
        case 0:
            x = func_0206d9f0(a1, 0, 1);
            func_0206d9e4(x + a2, h, a3);
            func_0206c914();
            func_0206c8dc(h, (*(s32 *) (s + 4) << 13) + (*(s32 *) (s + 8) << 9), a3);
            func_0206c878();
            break;
        case 1:
            x = func_0206d9f0(a1, 0, 1);
            func_0206d9e4(x + a2, h, a3);
            func_0206c770();
            func_0206c758(h, (*(s32 *) (s + 4) << 13) + (*(s32 *) (s + 8) << 9), a3);
            func_0206c70c();
            break;
    }
    func_02081edc(h);
}
