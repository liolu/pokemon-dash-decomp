/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02040790 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_02040790.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02007bb4(void);
extern int func_02007a88(void);
extern int data_020d4e48;
extern int data_020d4e50;
void func_020088e4(void) {
    switch (data_020d4e48) {
        case 0:
            data_020d4e48 = 2;
            data_020d4e50 = 4;
            func_02007bb4();
            break;
        case 2:
            data_020d4e50 = 4;
            break;
        case 3:
            data_020d4e50 = 4;
            func_02007a88();
            break;
        case 1:
        case 4:
            break;
    }
}
