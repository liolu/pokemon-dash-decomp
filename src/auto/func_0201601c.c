/* compiler: 1.2/b56 */
/* near start: 2 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

M2C_UNK func_020245b0(M2C_UNK, void **, s32);
s32 func_0202e818();
M2C_UNK func_0206333c(M2C_UNK);
M2C_UNK func_020639e4(s32, s32);
s32 func_02088ffc(void *, s32, M2C_UNK);

void func_0201601c(M2C_UNK arg0, void **arg1) {
    s32 temp_r6;
    u8 *temp_r1;

    temp_r1          = (u8 *) *arg1;
    temp_r1          = temp_r1 + 0x14;
    *(s32 *) temp_r1 = *(s32 *) temp_r1 & ~0x80;
    temp_r6          = M2C_FIELD(M2C_FIELD(*arg1, void **, 0x64), s32 *, 0x10);
    func_020639e4(temp_r6, func_0202e818());
    func_020245b0(arg0, arg1, func_02088ffc(*arg1, 0x2822D000, 0));
    func_0206333c(0x78);
}
