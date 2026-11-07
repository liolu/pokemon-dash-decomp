/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207dad8(s32, s32);                    /* extern */
M2C_UNK func_0207f41c(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern s32 data_ov001_020de768;
extern s32 data_ov001_020de76c;
extern s32 data_ov001_020de778;
extern s32 data_ov001_020de77c;
extern s32 data_ov001_020de780;
extern s32 data_ov001_020de794;
extern s32 data_ov001_020de79c;
extern s32 data_ov001_020de7bc;
extern s32 data_ov001_020de7c0;
extern s32 data_ov001_020de7c4;
extern M2C_UNK data_ov001_020dea40;

void func_ov001_020dc7c8(void) {
    *(s32 *) 0x04000020 = (s32) (u16) ((s32) (data_ov001_020de778 << 0xC) >> 0x10);
    *(s32 *) 0x04000024 = (u16) ((s32) (data_ov001_020de778 << 0xC) >> 0x10) << 0x10;
    *(s32 *) 0x04000028 = (data_ov001_020de7c4 + data_ov001_020de794 + 0x8000) - (data_ov001_020de778 * 8);
    *(s32 *) 0x0400002C = (data_ov001_020de7c0 + data_ov001_020de7bc + 0x6000) - (data_ov001_020de778 * 6);
    if (data_ov001_020de76c == 0) {
        func_0207dad8(data_ov001_020de77c, data_ov001_020de79c);
    } else {
        func_0207dad8(data_ov001_020de77c, data_ov001_020de768);
    }
    func_0207f41c(data_ov001_020de780, &data_ov001_020dea40, 0x200);
    data_ov001_020de76c = 1 - data_ov001_020de76c;
}
