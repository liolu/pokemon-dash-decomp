/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020367e0();                            /* extern */
M2C_UNK func_020368cc();                            /* extern */
M2C_UNK func_02036cb0();                            /* extern */
M2C_UNK func_02036dd8();                            /* extern */
M2C_UNK func_02036fe4();                            /* extern */
M2C_UNK func_0203710c();                            /* extern */
M2C_UNK func_020372e0();                            /* extern */
M2C_UNK func_0203741c();                            /* extern */
M2C_UNK func_020388d0();                            /* extern */
M2C_UNK func_02038ad0();                            /* extern */
M2C_UNK func_0203d09c();                            /* extern */
M2C_UNK func_0203d200();                            /* extern */
M2C_UNK func_0203d364();                            /* extern */
M2C_UNK func_0203d4e4();                            /* extern */
M2C_UNK func_0203dd44();                            /* extern */
M2C_UNK func_0203de14();                            /* extern */
M2C_UNK func_0203e5d4();                            /* extern */
M2C_UNK func_0203ea1c();                            /* extern */
extern s8 data_020d5188;
extern s8 data_020d5194;
extern s8 data_020d51a0;
extern u32 data_020d51b0;
extern u32 data_020d51d4;
extern u32 data_020d51f8;

void func_02036638(u32 arg0, s32 arg1) {
    if ((arg1 == 0) && (arg0 == data_020d51f8)) {
        return;
    }
    data_020d5188 = 0;
    data_020d51b0 = arg0;
    switch (data_020d51f8) {                        /* switch 1 */
        default:                                        /* switch 1 */
            break;
        case 2:                                         /* switch 1 */
        case 3:                                         /* switch 1 */
            func_020372e0();
            break;
        case 1:                                         /* switch 1 */
            func_020388d0();
            break;
        case 4:                                         /* switch 1 */
            func_02036fe4();
            break;
        case 5:                                         /* switch 1 */
            func_02036cb0();
            break;
        case 6:                                         /* switch 1 */
            func_0203d4e4();
            break;
        case 7:                                         /* switch 1 */
            func_0203d364();
            break;
        case 8:                                         /* switch 1 */
            func_0203d200();
            break;
        case 9:                                         /* switch 1 */
            func_0203d09c();
            break;
        case 10:                                        /* switch 1 */
        case 11:                                        /* switch 1 */
        case 12:                                        /* switch 1 */
        case 13:                                        /* switch 1 */
        case 14:                                        /* switch 1 */
        case 15:                                        /* switch 1 */
            func_020367e0();
            break;
    }
    data_020d51d4 = data_020d51f8;
    data_020d51f8 = arg0;
    switch (arg0) {                                 /* switch 2 */
        default:                                        /* switch 2 */
            break;
        case 2:                                         /* switch 2 */
        case 3:                                         /* switch 2 */
            func_0203741c();
            break;
        case 1:                                         /* switch 2 */
            func_02038ad0();
            break;
        case 4:                                         /* switch 2 */
            func_0203710c();
            break;
        case 5:                                         /* switch 2 */
            func_02036dd8();
            break;
        case 6:                                         /* switch 2 */
            func_0203ea1c();
            break;
        case 7:                                         /* switch 2 */
            func_0203e5d4();
            break;
        case 8:                                         /* switch 2 */
            func_0203de14();
            break;
        case 9:                                         /* switch 2 */
            func_0203dd44();
            break;
        case 10:                                        /* switch 2 */
        case 11:                                        /* switch 2 */
        case 12:                                        /* switch 2 */
        case 13:                                        /* switch 2 */
        case 14:                                        /* switch 2 */
        case 15:                                        /* switch 2 */
            func_020368cc();
            break;
    }
    data_020d51a0 = 1;
    data_020d5194 = 1;
}
