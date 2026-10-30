/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02040724 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_02040724.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned int data_020d4e48;
extern int data_020d4e50;
extern int func_02007a88(void);
void func_02008878(void) {
    switch (data_020d4e48) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            data_020d4e50 = 0;
            break;
        case 3:
        case 4:
            data_020d4e50 = 0;
            func_02007a88();
            break;
    }
}
