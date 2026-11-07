/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_020d4da0;
extern s32 data_020d4da4;
extern s32 data_020d4db0;
extern s32 data_020c9840[];

void func_02002ae0(void) {
    s32 *tbl;
    s32 base0;
    s32 base1;
    tbl     = data_020c9840;
    base0   = data_020d4da0;
    base1   = data_020d4da4;
    tbl[0]  = data_020d4db0;
    tbl[2]  = base0;
    tbl[4]  = base0 + 0xF80;
    tbl[6]  = base0 + 0x1F00;
    tbl[8]  = base0 + 0x2E80;
    tbl[10] = base1;
    tbl[12] = base1 + 0xF80;
    tbl[14] = base1 + 0x1F00;
    tbl[16] = base1 + 0x2E80;
    tbl[18] = base1 + 0x3E00;
    tbl[20] = base1 + 0x4D80;
    tbl[22] = base1 + 0x5D00;
    tbl[24] = base1 + 0x6C80;
    tbl[26] = base1 + 0x7C00;
}
