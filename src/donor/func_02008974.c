/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02040820 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_02040820.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02007bb4(void);
extern int func_02007a88(void);
extern int data_020d4e48;
extern int data_020d4e50;
void func_02008974(void) {
    switch (data_020d4e48) {
        case 0:
            data_020d4e48 = 2;
            data_020d4e50 = 3;
            func_02007bb4();
            break;
        case 2:
            data_020d4e50 = 3;
            break;
        case 4:
            data_020d4e50 = 3;
            func_02007a88();
            break;
        case 1:
        case 3:
            break;
    }
}
