/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_020d51d4;
extern u8 data_020d518c;
extern s32 data_020d5274;
extern u8 data_020d540c;
extern s32 data_020d52a8;
extern s32 data_020d5278;
extern s32 data_020d51e8;
void func_0203d724(void);
void func_0203dee4(void);
void func_0203f384(s32);
void func_0207dfe8(s32, s32);

void func_0203de14(void) {
    switch (data_020d51d4) {
        case 6:
        case 7:
        case 8:
        case 9:
            break;
        default:
            func_0203d724();
            break;
    }
    func_0203dee4();
    if (data_020d518c != 0) {
        func_0203f384(1);
    }
    data_020d540c = 1;
    data_020d52a8 = 0;
    func_0207dfe8(data_020d5274, 1);
    func_0207dfe8(data_020d5278, 1);
    func_0207dfe8(data_020d51e8, 1);
}
