/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207e398(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_02082044(s32 size);
void func_0207f710(s32 a, s32 b, s32 c);
void func_0207f658(s32 a, s32 b, s32 c);
void func_0207dfe8(s32 a, s32 b);
void func_020801cc(void);
void func_02080118(s32 a, s32 b, s32 c, s32 d);
void func_0207ffbc(s32 a, s32 b);
void func_020800bc(s32 a, s32 b);
extern s32 data_020d6fe0;
extern s32 data_020d6fe8;
extern s32 data_020d6fe4;
extern s32 data_020c4d8c;

void func_02084dec(s32 arg0) {
    s32 r4;

    if (data_020d6fe0 != 0) {
        return;
    }
    data_020d6fe8 = arg0;
    func_0207e398(arg0, 0, 0, 1, 0x800, 0x3000, 1);
    r4 = func_02082044(8);
    if (r4 != 0) {
        func_0207f710(r4, *(s32 *) data_020d6fe8, -1);
    }
    data_020d6fe4 = r4;
    func_0207f658(r4, (s32) &data_020c4d8c, 4);
    func_0207dfe8(data_020d6fe8, 1);
    r4 = func_02082044(0x1c);
    if (r4 != 0) {
        func_020801cc();
    }
    data_020d6fe0 = r4;
    func_02080118(r4, data_020d6fe8, 1, 0);
    func_0207ffbc(data_020d6fe0, *(s32 *) (data_020d6fe4 + 4));
    func_020800bc(data_020d6fe0, 0);
    *(u8 *) (data_020d6fe0 + 0x10) = 1;
}
