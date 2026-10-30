/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02021388 from https://github.com/dothacktranslate/okamiden-decomp src/main/func_02021388.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int undefined4;
void func_020b3b18(undefined4 *param_1, int param_2, int param_3)

{
    int iVar1;

    iVar1                                  = param_1[6] + param_2;
    *(undefined4 *) (param_1[6] + param_2) = param_1[1];
    *(undefined4 *) (iVar1 + 4)            = *param_1;
    *(undefined4 *) (iVar1 + 8)            = param_1[2];
    if (*(unsigned char *) *param_1 == '*') {
        *(int *) (iVar1 + 0xc)  = iVar1 + 0x10;
        *(int *) (iVar1 + 0x10) = *(int *) param_1[1] + param_3;
        return;
    }
    *(int *) (iVar1 + 0xc) = param_1[1] + param_3;
    return;
}
