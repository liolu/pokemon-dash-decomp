/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_Initialize from https://github.com/RonyxDumb/mkds src/arm9/021500a0_PM_Initialize.c (license: none), reused by
 * tools/donor_match.py */
extern unsigned short data_020da3e4;
extern int data_020da3fc[2];
extern short data_020da420;
extern char data_020da40c;
extern int data_020da3f4;
extern void func_020a3170(void);
extern void func_0209eef8(void);
extern int func_0209f0dc(int bit, int word);
extern void func_0209f104(int a, void *b);
extern void func_0209cd5c(char *p);
#pragma opt_strength_reduction off
void func_020a325c(void) {
    int i;
    if (data_020da3e4 != 0) {
        return;
    }
    data_020da3e4    = 1;
    data_020da3fc[0] = 0;
    data_020da3fc[1] = 0;
    func_0209eef8();
    while (func_0209f0dc(8, 1) == 0)
        ;
    func_0209f104(8, (void *) func_020a3170);
    for (i = 0; i < 4; i++) {
        *(short *) ((char *) &data_020da420 + (i << 3)) = 0;
    }
    func_0209cd5c(&data_020da40c);
    data_020da3f4 = *(int *) 0x27ffc3c;
}
