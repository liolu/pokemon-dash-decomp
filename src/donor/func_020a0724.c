/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205d368 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205d368.c (license: MIT), reused
 * by tools/donor_match.py */
#pragma ipa file
int func_020a0724(int *o, int r1, int sel) {
    switch (sel) {
        case 0:
            r1 += o[8];
            break;
        case 1:
            r1 += o[10];
            break;
        case 2:
            r1 += o[9];
            break;
        default:
            return 0;
    }
    if ((unsigned) r1 < (unsigned) o[8]) {
        r1 = o[8];
    }
    if (r1 > o[9]) {
        r1 = o[9];
    }
    o[10] = r1;
    return 1;
}
