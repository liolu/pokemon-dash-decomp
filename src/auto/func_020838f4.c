/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d6750;

void func_020838f4(s32 arg0, s32 arg1) {
    switch (arg0) {                                 /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | arg1;
            break;
        case 1:                                         /* switch 1 */
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | arg1;
            break;
    }
    switch (arg1) {                                 /* switch 2; irregular */
        case 0x0:                                       /* switch 2 */
            *((M2C_UNK *) ((s8 *) &data_020d6750 + (arg0 * 4))) = 0x20;
            return;
        case 0x10:                                      /* switch 2 */
            *((M2C_UNK *) ((s8 *) &data_020d6750 + (arg0 * 4))) = 0x20;
            return;
        case 0x200010:                                  /* switch 2 */
            *((M2C_UNK *) ((s8 *) &data_020d6750 + (arg0 * 4))) = 0x80;
            return;
        case 0x300010:                                  /* switch 2 */
            *((M2C_UNK *) ((s8 *) &data_020d6750 + (arg0 * 4))) = 0x100;
            return;
        case 0x100010:                                  /* switch 2 */
            *((M2C_UNK *) ((s8 *) &data_020d6750 + (arg0 * 4))) = 0x40;
            return;
    }
}
