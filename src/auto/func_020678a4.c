/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct V12 {
    s32 a, b, c;
} V12;
typedef struct V8 {
    s32 a, b;
} V8;

M2C_UNK func_020059fc(V12 *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0200d5c4(V8 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02018748(void **, M2C_UNK);            /* extern */
void **func_02018770(void *);                       /* extern */
M2C_UNK func_02067c48(s32, s32);                    /* extern */
s32 func_02067c60();                                /* extern */
M2C_UNK func_02067c68(void *);                      /* extern */
u32 func_02067c70(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020699bc(void **, M2C_UNK);            /* extern */
M2C_UNK func_020699c4(void **, M2C_UNK);            /* extern */
M2C_UNK func_020699cc(void **, M2C_UNK);            /* extern */
M2C_UNK func_02074bf4(s32, V12 *);              /* extern */
M2C_UNK func_02074c3c(s32, V12 *);              /* extern */
M2C_UNK func_0207bc9c(void **, M2C_UNK);            /* extern */
M2C_UNK func_02086a68(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_02086c50(void **, s32, M2C_UNK);       /* extern */
M2C_UNK func_0208c268(void **, M2C_UNK);            /* extern */
s32 func_020ad5f0();                                /* extern */

s32 func_020678a4(void *arg0, M2C_UNK arg1) {
    V8 sp0;
    V12 sp8;
    V12 sp14;
    V12 sp20;
    s32 temp_ip;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r1;
    s32 temp_r0_3;
    u32 temp_r5;
    u32 temp_r4;
    s32 temp_ret;
    void **temp_r0;
    void **temp_r0_2;

    temp_r5 = func_02067c70(arg1, 0);
    temp_r4 = func_02067c70(arg1, 1);
    func_02018748(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_02018748(func_02018770(arg0 + 0xCC), 1);
    func_0208c268(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_02067c68(arg0 + 0xC4);
    temp_r7 = func_02067c60();
    func_020059fc(&sp8, 0, 0x41000, 0x352000);
    func_02074c3c(temp_r7, &sp8);
    func_02067c68(arg0 + 0xC4);
    temp_r7_2 = func_02067c60();
    func_020059fc(&sp14, 0, 0x16000, 0x2DA000);
    func_02074bf4(temp_r7_2, &sp14);
    func_02067c68(arg0 + 0xC4);
    func_02067c48(func_02067c60(), 0xE39);
    func_020059fc(&sp20, 0, 0, 0x2D8000);
    temp_r0 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, void *), 0x2C)(temp_r0, &sp20);
    func_0200d5c4(&sp0, 0, 0, 0);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xC8);
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, void *), 0x24)(temp_r0_2, &sp0);
    func_02086c50(M2C_FIELD(arg0, void ***, 0xC8), 0x08019000, 0x38000001);
    M2C_FIELD(arg0, s32 *, 0xD8) = 0xF;
    func_020699c4(M2C_FIELD(arg0, void ***, 0xC8), 1);
    func_020699cc(M2C_FIELD(arg0, void ***, 0xC8), 0x7F);
    func_020699bc(M2C_FIELD(arg0, void ***, 0xC8), 0);
    temp_ret  = func_020ad5f0();
    temp_r0_3 = temp_ret;
    temp_ip   = temp_ret % 5;
    switch (temp_ip) {                              /* switch 1; irregular */
        case 0:                                         /* switch 1 */
            var_r1 = 0x0801903B;
            break;
        case 1:                                         /* switch 1 */
            var_r1 = 0x08019079;
            break;
        default:                                        /* switch 1 */
            var_r1 = 0x08019009;
            break;
    }
    if (temp_r5 != -1U) {
        switch (temp_r4) {                          /* switch 2 */
            case 2:                                     /* switch 2 */
                switch (temp_r5) {                      /* switch 3; irregular */
                    case 1:                                 /* switch 3 */
                        var_r1 = 0x0801902C;
                        break;
                    case 2:                                 /* switch 3 */
                        var_r1 = 0x0801903E;
                        break;
                    default:                                /* switch 3 */
                        var_r1 = 0x08019009;
                        break;
                }
                break;
            case 3:                                     /* switch 2 */
                switch (temp_r5) {                      /* switch 4; irregular */
                    case 1:                                 /* switch 4 */
                        var_r1 = 0x080190A2;
                        break;
                    case 2:                                 /* switch 4 */
                        var_r1 = 0x0801902F;
                        break;
                    case 3:                                 /* switch 4 */
                        var_r1 = 0x0801903E;
                        break;
                    default:                                /* switch 4 */
                        var_r1 = 0x08019009;
                        break;
                }
                break;
            case 4:                                     /* switch 2 */
                switch (temp_r5) {                      /* switch 5 */
                    case 1:                                 /* switch 5 */
                        var_r1 = 0x080190A2;
                        break;
                    case 2:                                 /* switch 5 */
                        var_r1 = 0x0801902C;
                        break;
                    case 3:                                 /* switch 5 */
                        var_r1 = 0x0801902F;
                        break;
                    case 4:                                 /* switch 5 */
                        var_r1 = 0x0801903E;
                        break;
                    default:
                        var_r1 = 0x08019009;
                        break;
                }
                break;
            case 5:                                     /* switch 2 */
                switch (temp_r5) {                      /* switch 6 */
                    case 1:                                 /* switch 6 */
                        var_r1 = 0x080190A2;
                        break;
                    case 2:                                 /* switch 6 */
                        var_r1 = 0x0801902C;
                        break;
                    case 3:                                 /* switch 6 */
                        var_r1 = 0x0801902F;
                        break;
                    case 4:                                 /* switch 6 */
                        var_r1 = 0x08019030;
                        break;
                    case 5:                                 /* switch 6 */
                        var_r1 = 0x08019078;
                        break;
                    default:
                        var_r1 = 0x08019009;
                        break;
                }
                break;
            case 6:                                     /* switch 2 */
                switch (temp_r5) {                      /* switch 7 */
                    case 1:                                 /* switch 7 */
                        var_r1 = 0x080190A2;
                        break;
                    case 2:                                 /* switch 7 */
                        var_r1 = 0x0801902C;
                        break;
                    case 3:                                 /* switch 7 */
                        var_r1 = 0x0801902F;
                        break;
                    case 4:                                 /* switch 7 */
                        var_r1 = 0x08019030;
                        break;
                    case 5:                                 /* switch 7 */
                        var_r1 = 0x0801903E;
                        break;
                    case 6:                                 /* switch 7 */
                        var_r1 = 0x08019078;
                        break;
                    default:
                        var_r1 = 0x08019009;
                        break;
                }
                break;
            default:
                var_r1 = 0x08019009;
                break;
        }
    }
    func_02086a68(M2C_FIELD(arg0, void ***, 0xC8), var_r1, 0x38000001);
    func_0207bc9c((void **) ((u8 *) M2C_FIELD(arg0, void ***, 0xC8) + 0x138), 0xF);
    return 1;
}
