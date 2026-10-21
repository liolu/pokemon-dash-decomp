/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200663c();                            /* extern */
M2C_UNK func_020066d8();                            /* extern */
s32 func_020078c8();                                /* extern */
M2C_UNK func_02007a88();                            /* extern */
M2C_UNK func_020a59bc(M2C_UNK, u16);                /* extern */
M2C_UNK func_020a7204(M2C_UNK, s32, u16, s32, s32, s32); /* extern */
extern s16 data_020d4e10;
extern s32 data_020d4e50;
extern void *data_020d4e70;
extern M2C_UNK data_020d4f00;

void func_020080b8(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 8);
        switch ((s32) temp_r1) {                    /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                data_020d4e10 = 0;
                switch (data_020d4e50) {                /* switch 2; irregular */
                    case 0:                                 /* switch 2 */
                        func_02007a88();
                        return;
                    case 3:                                 /* switch 2 */
                        if (func_020078c8() != 0) {
                            return;
                        }
                        data_020d4e50 = 0;
                        func_02007a88();
                        return;
                    case 4:                                 /* switch 2 */
                        data_020d4e50 = 4;
                        func_02007a88();
                        return;
                }
                break;
            case 7:                                     /* switch 1 */
                if (M2C_FIELD(&data_020d4f00, u8 *, 0x57) == 0) {
                    func_020a59bc(0, M2C_FIELD(arg0, u16 *, 0x10));
                    return;
                }
                func_020066d8();
                return;
            case 2:                                     /* switch 1 */
                func_020a7204(0, M2C_FIELD(data_020d4e70, s32 *, 0), M2C_FIELD(data_020d4e70, u16 *, 4),
                              M2C_FIELD(data_020d4e70, s32 *, 8), (s32) M2C_FIELD(data_020d4e70, u16 *, 0xC), 1);
                return;
            case 9:                                     /* switch 1 */
                func_0200663c();
                return;
        }
    } else {
        data_020d4e50 = 0;
        func_02007a88();
    }
}
