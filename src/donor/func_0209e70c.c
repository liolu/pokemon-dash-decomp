/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b070 from https://github.com/tangosdev/sm64ds-decomp src/func_0205b070.c (license: MIT), reused by
 * tools/donor_match.py */
extern volatile int data_020d8770;
extern volatile int data_020d8780;
extern int data_020d8784;
extern int data_020d8a40;
extern volatile int data_020d878c[];
extern int data_020d8788;
extern int data_020d8774;
extern void func_0209cdd4(unsigned int a, unsigned int b);
extern int func_0209f028(unsigned int a, unsigned int c, unsigned int b);
extern int func_0209e910(int a);
int func_0209e70c(int x) {
    if (data_020d8770 == 0) {
        return 1;
    }
    if (data_020d8784 >= 8) {
        if (x == 0) {
            return 0;
        }
        do {
            func_0209e910(1);
        } while (data_020d8784 >= 8);
    }
    func_0209cdd4((unsigned int) &data_020d8a40, 0x1800);
    if (func_0209f028(7, data_020d8770, 0) < 0) {
        if (x == 0) {
            return 0;
        }
        while (func_0209f028(7, data_020d8770, 0) < 0)
            ;
    }
    int temp           = data_020d8770;
    int idx            = data_020d8780;
    data_020d878c[idx] = temp;
    idx++;
    data_020d8780 = idx;
    if (idx > 8) {
        data_020d8780 = 0;
    }

    data_020d8770 = 0;
    data_020d8774 = 0;
    data_020d8784 = data_020d8784 + 1;
    data_020d8788 = data_020d8788 + 1;
    return 1;
}
