/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_020d73dc;
extern u8 data_020d7490[];
extern s32 data_020d73e8;
extern s32 data_020d73ec;
extern s32 data_020d73e4;
extern s32 data_020d73e0;
extern u8 data_020d7494[];
extern u8 data_020d7408[];
extern u8 data_020d73f0[];
extern u8 data_020d7458[];
extern u8 data_020d7420[];
void func_0209d864(u8 *);
void func_020ab544(u8 *, u8 *, u32);
void func_02080920(u8 *, u8 *, s32);

void func_02085f78(void) {
    s32 idx;

    if (data_020d73dc != 0) {
        return;
    }
    func_0209d864(data_020d7490);
    data_020d73e8 = data_020d7490[0];
    if (data_020d73e8 >= 6) {
        data_020d73e8 = 0;
    }
    data_020d73ec = data_020d7490[2];
    data_020d73e4 = data_020d7490[3];
    if (data_020d73ec < 1 || data_020d73ec > 0xC) {
        data_020d73ec = 1;
    }
    if (data_020d73e4 < 1 || data_020d73e4 > 0x1F) {
        data_020d73e4 = 1;
    }
    data_020d73e0 = data_020d7490[1];
    if (data_020d73e0 >= 0x10) {
        data_020d73e0 = 0;
    }
    idx = *(u16 *) (data_020d7490 + 0x18);
    if (idx > 0xA) {
        idx = 0;
    }
    func_020ab544(data_020d7408, data_020d7494, idx * 2);
    ((u16 *) data_020d7408)[idx] = 0;
    func_02080920(data_020d73f0, data_020d7408, 0x15);

    idx = *(u16 *) (data_020d7490 + 0x4E);
    if (idx > 0x1A) {
        idx = 0;
    }
    func_020ab544(data_020d7458, data_020d7494 + 0x16, idx * 2);
    ((u16 *) data_020d7458)[idx] = 0;
    func_02080920(data_020d7420, data_020d7458, 0x35);
    data_020d73dc = 1;
}
